#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void StartUp();
    void EnumerateProcesses();
    QString getNameFromPid(QString Pid);
    void treeWidget_memoryMap(QString Pid);
    void EnumerateOpenedFiles(QString Pid);
    QString getNameFromFileDescriptor(QString FD, QString Pid);
    void EnumerateProcessStatistics(QString Pid);
    void ProcessNetworkActivity(QString Pid);
    QStringList ParseTcpLine(QString tcpEntry);
    QString fromHex2Ip(QString hexIp);
    void tcpTreeWidget(QString Pid, QString socketInode);
    void udpTreeWidget(QString Pid);

private slots:
    void on_refrOFilesButton_clicked();
    void on_tabWidget_currentChanged(int index);
    void on_refreshButton_clicked();
    void on_scanCryptoButton_clicked();
    void on_saveProcButton_clicked();
    void on_dumpAllButton_clicked();
    void on_dumpButton_clicked();
    void on_action_Qt_triggered();
    void on_action_Version_triggered();
    void on_action_Open_triggered();
};

#endif // MAINWINDOW_H
