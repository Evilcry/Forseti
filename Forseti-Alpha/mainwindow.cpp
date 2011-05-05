#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QTreeWidget>
#include <QStringList>
#include <QDirIterator>
#include <QFileInfo>
#include <QRegExp>
#include <QTreeWidgetItemIterator>
#include <QtNetwork/QHostAddress>
#include <arpa/inet.h>          // htonl

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::StartUp();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::StartUp()
{
    ui->treeWidget->setHeaderLabels( QStringList() << "Pid" << "Process Name" ); // Proc List
    ui->treeWidget_2->setHeaderLabels(QStringList() << "Start" << "End" << "Name" << "Len" << "Permission" << "Inode" );
    ui->treeWidget_3->setHeaderLabels(QStringList() << "File Descriptor" << "File Name");
    ui->treeWidget_4->setHeaderLabels(QStringList() << "Name" << "Value");
    ui->treeWidget_5->setHeaderLabel("Thread List");
    ui->treeWidget_6->setHeaderLabels(QStringList() << "sl" << "LocalAddress" << "Port" << "RemoteAddress" << "Port" << "st" <<
                                      "tx_queue" << "rx_queue"  << "tr" << "tm->when" << "retrnsmt" << "uid" << "timeout" << "inode");
    ui->treeWidget_7->setHeaderLabels(QStringList() << "sl" << "LocalAddress" << "Port" << "RemoteAddress" << "Port" << "st" <<
                                      "tx_queue" << "rx_queue" << "tr" << "tm->when" << "retrnsmt" << "uid" << "timeout" << "inode");
    MainWindow::EnumerateProcesses();
}

void MainWindow::EnumerateProcesses()
{
    QDirIterator iterProc("/proc", QDir::Dirs);
    int row = 0;

    while ( iterProc.hasNext() )
    {
        QString Pid = iterProc.fileInfo().baseName();
        if ( Pid.isEmpty() )
        {
            iterProc.next();
            continue;
        }
        else
        {
            if ( Pid.at(0).isDigit() )
            {
                QTreeWidgetItem *item = new QTreeWidgetItem();
                QString name;
                item->setText(0,Pid);
                ui->treeWidget->insertTopLevelItem(row,item);
                name = MainWindow::getNameFromPid(Pid);
                if ( name.isEmpty() )
                {
                    item->setText(1, "-");
                    ui->treeWidget->insertTopLevelItem(row,item);
                    row++;
                    iterProc.next();
                    continue;
                }
                else
                {
                    item->setText(1, name);
                    ui->treeWidget->insertTopLevelItem(row,item);
                }
                row++;
                iterProc.next();
                continue;
            }
        }

        iterProc.next();
    }
}

QString MainWindow::getNameFromPid(QString Pid)
{
    QString name = "";
    QFile file("/proc/" + Pid + "/cmdline");

    if ( ! file.open(QIODevice::ReadOnly | QIODevice::Text) )
        return( name );

    name = file.readLine();
    file.close();

    return( name );

}

void MainWindow::on_action_Open_triggered()
{

}

void MainWindow::on_action_Version_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Forseti - Linux Forensics Tool v.1.0 by Giuseppe Evilcry Bonfa");
    msgBox.exec();
}

void MainWindow::on_action_Qt_triggered()
{
    QMessageBox msgBox;
    msgBox.aboutQt(NULL, "Forseti 1.0");
}

void MainWindow::on_dumpButton_clicked()
{

}

void MainWindow::on_dumpAllButton_clicked()
{

}

void MainWindow::on_saveProcButton_clicked()
{

}

void MainWindow::on_scanCryptoButton_clicked()
{

}

void MainWindow::on_refreshButton_clicked()
{
    MainWindow::EnumerateProcesses();
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if ( index == 1 ) // Memory Map
    {
        QTreeWidgetItem *selectedItem = ui->treeWidget->currentItem();
        if ( ! ui->treeWidget->isItemSelected(selectedItem) )
        {
            QMessageBox msgBox;
            msgBox.setText("Please Select a Process Item");
            msgBox.exec();
        }
        else
        {
            ui->treeWidget_2->clear();
            MainWindow::treeWidget_memoryMap(selectedItem->text(0));
        }
    }

    if ( index == 2 ) // Threads
    {
        QTreeWidgetItem *selectedItem = ui->treeWidget->currentItem();
        if ( ! ui->treeWidget->isItemSelected(selectedItem) )
        {
            QMessageBox msgBox;
            msgBox.setText("Please Select a Process Item");
            msgBox.exec();
        }
        else
        {
            ui->treeWidget_2->clear();
            MainWindow::treeWidget_memoryMap(selectedItem->text(0));
        }

    }

    if ( index == 3 ) // Opened Files
    {
        QTreeWidgetItem *selectedItem = ui->treeWidget->currentItem();
        if ( ! ui->treeWidget->isItemSelected(selectedItem) )
        {
            QMessageBox msgBox;
            msgBox.setText("Please Select a Process Item");
            msgBox.exec();
        }
        else
        {
            ui->treeWidget_3->clear();
            MainWindow::EnumerateOpenedFiles(selectedItem->text(0));
        }
    }

    if ( index == 4 ) // Process Statistics
    {
        QTreeWidgetItem *selectedItem = ui->treeWidget->currentItem();
        if ( ! ui->treeWidget->isItemSelected(selectedItem) )
        {
            QMessageBox msgBox;
            msgBox.setText("Please Select a Process Item");
            msgBox.exec();
        }
        else
        {
            ui->treeWidget_4->clear();
            MainWindow::EnumerateProcessStatistics(selectedItem->text(0));
        }
    }

    if ( index == 5 ) // Network Activity
    {
        QTreeWidgetItem *selectedItem = ui->treeWidget->currentItem();
        if ( ! ui->treeWidget->isItemSelected(selectedItem) )
        {
            QMessageBox msgBox;
            msgBox.setText("Please Select a Process Item");
            msgBox.exec();
        }
        else
        {
            ui->treeWidget_6->clear();
            MainWindow::ProcessNetworkActivity(selectedItem->text(0));
        }
    }

    return;
}

void MainWindow::treeWidget_memoryMap(QString Pid)
{
    QFile memoryMap("/proc/" + Pid + "/maps");

    if ( memoryMap.open(QIODevice::ReadOnly)  )
    {
        int row = 0;

        QByteArray line;
        QRegExp rx("^([a-f\\d]+)-([a-f\\d]+)\\s([rwxsp-]{4})\\s+[\\d\\w]{8}\\s+[\\d\\w]{2}:[\\d\\w]{2}\\s+(\\d+)\\s*(.+)\\s*$");

        do
        {
            line = memoryMap.readLine();

            if (rx.indexIn(line) != -1)
            {
                QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget_2);
                item->setText(0, rx.cap(1)); //start
                item->setText(1,rx.cap(2)); //end
                QString procName = rx.cap(5).trimmed();

                if ( procName.contains("[stack]") || procName.contains("[heap]") || procName.contains("[vdso]"))
                {
                    item->setText(2, procName); //proc
                    QString len = QString::number(rx.cap(2).toInt(0, 16) - rx.cap(1).toInt(0,16), 16);
                    item->setText(3,len);
                    item->setBackgroundColor(2, "lightGreen");
                    QFont font("", 9, QFont::Black | QFont::Bold);
                    item->setFont(2,font);
                }
                else
                {
                    item->setText(2, procName); //proc
                    QString len = QString::number(rx.cap(2).toInt(0, 16) - rx.cap(1).toInt(0,16), 16);
                    item->setText(3,len);
                }

                item->setText(4, rx.cap(3)); //perm
                QString inode = QString::number(rx.cap(4).toInt(0, 16), 16);
                item->setText(5, inode);
                ui->treeWidget_2->insertTopLevelItem(row, item);
                row++;
            }

        } while(!line.isEmpty());
        memoryMap.close();
    }
}

void MainWindow::EnumerateOpenedFiles(QString Pid)
{
    QString dirSearchPath = "/proc/" + Pid + "/fdinfo/";
    QDirIterator iterFileDescriptors(dirSearchPath, QDir::Files);
    int row = 0;

    while(iterFileDescriptors.hasNext())
    {
        QString fname = iterFileDescriptors.fileName();

        if (fname.isNull())
            iterFileDescriptors.next();
        else
        {
            QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget_3);
            item->setText(0, fname);
            item->setText(1,MainWindow::getNameFromFileDescriptor(fname, Pid));
            ui->treeWidget_3->insertTopLevelItem(row, item);
            row++;
            iterFileDescriptors.next();
        }
    }
}

QString MainWindow::getNameFromFileDescriptor(QString FD, QString Pid)
{
    QString fdPath = "/proc/" + Pid + "/fd/" + FD;
    QString fdName = QFile::symLinkTarget(fdPath);
    if ( fdName.contains("/proc/") )
    {
        QFileInfo pathInfo(fdName);
        return(pathInfo.baseName());
    }
    return fdName;
}

void MainWindow::EnumerateProcessStatistics(QString Pid)
{
    QString pStatsPath = "/proc/" + Pid + "/" + "status";
    QFile status(pStatsPath);

    if ( status.open(QIODevice::ReadOnly) )
    {
        int row = 0;
        QString line;       
        do
        {
            line = status.readLine();
            if (line.isEmpty())
                break;
            QStringList statEntries = line.split(":");
            QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget_4);
            item->setText(0,statEntries.at(0));
            item->setText(1, statEntries.at(1));
            ui->treeWidget_4->insertTopLevelItem(row, item);
            row++;

        } while(!line.isEmpty());
        status.close();
    }

}

void MainWindow::ProcessNetworkActivity(QString Pid)
{
    ui->treeWidget_3->clear();              // opened files
    MainWindow::EnumerateOpenedFiles(Pid);

    QTreeWidgetItemIterator it(ui->treeWidget_3);

    while(*it)
    {
        QString socketEntry = (*it)->text(1);
        if ( socketEntry.isEmpty() || socketEntry.contains("socket:") == false )
            ++it;
        else
        {
            QFile tcp("/proc/" + Pid + "/net/" + "tcp");
            if ( tcp.open(QIODevice::ReadOnly) )
            {
                QString TcpEntry;
                QRegExp rx("([\\d0-9]{5})");
                rx.indexIn(socketEntry,0);
                int row = 0;

                QString socketInode = rx.cap(0);
                do
                {
                    TcpEntry = tcp.readLine();
                    if ( TcpEntry.contains(socketInode) )
                    {
                        // Split Tcp Entry and Fill Tree Widget

                        QStringList tcpList = MainWindow::ParseTcpLine(TcpEntry);

                        if ( tcpList.isEmpty() )
                            continue;
                        else
                        {
                            // Fill Tree Widget
                            QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget_6);
                            for(int i = 0; i < tcpList.count(); i++)
                                item->setText(i,tcpList.at(i));

                            ui->treeWidget_4->insertTopLevelItem(row, item);
                            row++;
                        }

                    }
                    else
                        continue;

                } while(!TcpEntry.isEmpty());
                tcp.close();

                ++it;
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Unable to open TCP Table");
                msgBox.exec();
                ++it;
            }
        }
    }
}

QStringList MainWindow::ParseTcpLine(QString tcpEntry)
{
    QStringList splitList = tcpEntry.split(" ");

    if ( splitList.isEmpty() )
        return(splitList);
    else
    {
        QStringList tcpEnum;
        bool addr_conv = true;
        for (int i = 0; i < splitList.count(); i++ )
        {
            if ( splitList.at(i).isEmpty() )
                continue;
            else
            {
                if ( addr_conv )
                {
                    if ( splitList.at(i).endsWith(":") )
                    {
                        tcpEnum << splitList.at(i);
                        QStringList address = splitList.at(i+1).split(":");
                        tcpEnum << MainWindow::fromHex2Ip(address.at(0));
                        tcpEnum << address.at(1);

                        address.clear();
                        address = splitList.at(i+2).split(":");
                        tcpEnum << MainWindow::fromHex2Ip(address.at(0));
                        tcpEnum << address.at(1);

                        addr_conv = false;
                    }
                }
                else
                {
                    if ( i+2 > splitList.count() )
                        break;
                    else
                    {
                        QString qsTemp = splitList.at(i+2);
                        if ( qsTemp.isEmpty() )
                            continue;
                        else
                        {
                            if ( qsTemp.contains(":") )
                            {
                                QStringList tempSplit = qsTemp.split(":");
                                tcpEnum << tempSplit.at(0);
                                tcpEnum << tempSplit.at(1);
                            }
                            else
                                tcpEnum << qsTemp;
                        }
                    }
                }

            }
        }

        return(tcpEnum);
    }

}

void MainWindow::on_refrOFilesButton_clicked()
{

}

QString MainWindow::fromHex2Ip(QString hexIp)
{
    unsigned long ulIp = hexIp.toLongLong(0, 16);
    QHostAddress ipAddress(htonl(ulIp));
    return ipAddress.toString();
}
