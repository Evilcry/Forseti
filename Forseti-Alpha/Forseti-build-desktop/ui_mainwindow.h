/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 4 16:08:19 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Version;
    QAction *action_Qt;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QPushButton *dumpButton;
    QPushButton *dumpAllButton;
    QPushButton *saveProcButton;
    QPushButton *scanCryptoButton;
    QPushButton *refreshButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeWidget_2;
    QPushButton *dumpRegionButton;
    QPushButton *savemapButton;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    QTreeWidget *treeWidget_5;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QTreeWidget *treeWidget_3;
    QPushButton *saveOFilesListButton;
    QPushButton *refrOFilesButton;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QTreeWidget *treeWidget_4;
    QPushButton *refrStatsButton;
    QPushButton *saveStatsButton;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QLabel *label_2;
    QTreeWidget *treeWidget_6;
    QLabel *label;
    QTreeWidget *treeWidget_7;
    QPushButton *rfrshNetButton;
    QPushButton *saveNtwButton;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_About;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(728, 461);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Version = new QAction(MainWindow);
        action_Version->setObjectName(QString::fromUtf8("action_Version"));
        action_Qt = new QAction(MainWindow);
        action_Qt->setObjectName(QString::fromUtf8("action_Qt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setColumnCount(2);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 5);

        dumpButton = new QPushButton(tab);
        dumpButton->setObjectName(QString::fromUtf8("dumpButton"));

        gridLayout->addWidget(dumpButton, 1, 0, 1, 1);

        dumpAllButton = new QPushButton(tab);
        dumpAllButton->setObjectName(QString::fromUtf8("dumpAllButton"));

        gridLayout->addWidget(dumpAllButton, 1, 1, 1, 1);

        saveProcButton = new QPushButton(tab);
        saveProcButton->setObjectName(QString::fromUtf8("saveProcButton"));

        gridLayout->addWidget(saveProcButton, 1, 2, 1, 1);

        scanCryptoButton = new QPushButton(tab);
        scanCryptoButton->setObjectName(QString::fromUtf8("scanCryptoButton"));

        gridLayout->addWidget(scanCryptoButton, 1, 3, 1, 1);

        refreshButton = new QPushButton(tab);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        gridLayout->addWidget(refreshButton, 1, 4, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        treeWidget_2 = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(5, QString::fromUtf8("6"));
        __qtreewidgetitem1->setText(4, QString::fromUtf8("5"));
        __qtreewidgetitem1->setText(3, QString::fromUtf8("4"));
        __qtreewidgetitem1->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem1->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeWidget_2->setHeaderItem(__qtreewidgetitem1);
        treeWidget_2->setObjectName(QString::fromUtf8("treeWidget_2"));
        treeWidget_2->setColumnCount(6);

        gridLayout_3->addWidget(treeWidget_2, 0, 0, 1, 2);

        dumpRegionButton = new QPushButton(tab_2);
        dumpRegionButton->setObjectName(QString::fromUtf8("dumpRegionButton"));

        gridLayout_3->addWidget(dumpRegionButton, 1, 0, 1, 1);

        savemapButton = new QPushButton(tab_2);
        savemapButton->setObjectName(QString::fromUtf8("savemapButton"));

        gridLayout_3->addWidget(savemapButton, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        treeWidget_5 = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("1"));
        treeWidget_5->setHeaderItem(__qtreewidgetitem2);
        treeWidget_5->setObjectName(QString::fromUtf8("treeWidget_5"));

        gridLayout_6->addWidget(treeWidget_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        treeWidget_3 = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem3->setText(0, QString::fromUtf8("1"));
        treeWidget_3->setHeaderItem(__qtreewidgetitem3);
        treeWidget_3->setObjectName(QString::fromUtf8("treeWidget_3"));
        treeWidget_3->setColumnCount(2);

        gridLayout_4->addWidget(treeWidget_3, 0, 0, 1, 2);

        saveOFilesListButton = new QPushButton(tab_3);
        saveOFilesListButton->setObjectName(QString::fromUtf8("saveOFilesListButton"));

        gridLayout_4->addWidget(saveOFilesListButton, 1, 0, 1, 1);

        refrOFilesButton = new QPushButton(tab_3);
        refrOFilesButton->setObjectName(QString::fromUtf8("refrOFilesButton"));

        gridLayout_4->addWidget(refrOFilesButton, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        treeWidget_4 = new QTreeWidget(tab_5);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem();
        __qtreewidgetitem4->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem4->setText(0, QString::fromUtf8("1"));
        treeWidget_4->setHeaderItem(__qtreewidgetitem4);
        treeWidget_4->setObjectName(QString::fromUtf8("treeWidget_4"));
        treeWidget_4->setColumnCount(2);

        gridLayout_5->addWidget(treeWidget_4, 0, 0, 1, 2);

        refrStatsButton = new QPushButton(tab_5);
        refrStatsButton->setObjectName(QString::fromUtf8("refrStatsButton"));

        gridLayout_5->addWidget(refrStatsButton, 1, 0, 1, 1);

        saveStatsButton = new QPushButton(tab_5);
        saveStatsButton->setObjectName(QString::fromUtf8("saveStatsButton"));

        gridLayout_5->addWidget(saveStatsButton, 1, 1, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        treeWidget_6 = new QTreeWidget(tab_6);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem();
        __qtreewidgetitem5->setText(13, QString::fromUtf8("14"));
        __qtreewidgetitem5->setText(12, QString::fromUtf8("13"));
        __qtreewidgetitem5->setText(11, QString::fromUtf8("12"));
        __qtreewidgetitem5->setText(10, QString::fromUtf8("11"));
        __qtreewidgetitem5->setText(9, QString::fromUtf8("10"));
        __qtreewidgetitem5->setText(8, QString::fromUtf8("9"));
        __qtreewidgetitem5->setText(7, QString::fromUtf8("8"));
        __qtreewidgetitem5->setText(6, QString::fromUtf8("7"));
        __qtreewidgetitem5->setText(5, QString::fromUtf8("6"));
        __qtreewidgetitem5->setText(4, QString::fromUtf8("5"));
        __qtreewidgetitem5->setText(3, QString::fromUtf8("4"));
        __qtreewidgetitem5->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem5->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem5->setText(0, QString::fromUtf8("1"));
        treeWidget_6->setHeaderItem(__qtreewidgetitem5);
        treeWidget_6->setObjectName(QString::fromUtf8("treeWidget_6"));
        treeWidget_6->setColumnCount(14);

        gridLayout_7->addWidget(treeWidget_6, 1, 0, 1, 2);

        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_7->addWidget(label, 2, 0, 1, 1);

        treeWidget_7 = new QTreeWidget(tab_6);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem();
        __qtreewidgetitem6->setText(13, QString::fromUtf8("14"));
        __qtreewidgetitem6->setText(12, QString::fromUtf8("13"));
        __qtreewidgetitem6->setText(11, QString::fromUtf8("12"));
        __qtreewidgetitem6->setText(10, QString::fromUtf8("11"));
        __qtreewidgetitem6->setText(9, QString::fromUtf8("10"));
        __qtreewidgetitem6->setText(8, QString::fromUtf8("9"));
        __qtreewidgetitem6->setText(7, QString::fromUtf8("8"));
        __qtreewidgetitem6->setText(6, QString::fromUtf8("7"));
        __qtreewidgetitem6->setText(5, QString::fromUtf8("6"));
        __qtreewidgetitem6->setText(4, QString::fromUtf8("5"));
        __qtreewidgetitem6->setText(3, QString::fromUtf8("4"));
        __qtreewidgetitem6->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem6->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem6->setText(0, QString::fromUtf8("1"));
        treeWidget_7->setHeaderItem(__qtreewidgetitem6);
        treeWidget_7->setObjectName(QString::fromUtf8("treeWidget_7"));
        treeWidget_7->setColumnCount(14);

        gridLayout_7->addWidget(treeWidget_7, 3, 0, 1, 2);

        rfrshNetButton = new QPushButton(tab_6);
        rfrshNetButton->setObjectName(QString::fromUtf8("rfrshNetButton"));

        gridLayout_7->addWidget(rfrshNetButton, 4, 0, 1, 1);

        saveNtwButton = new QPushButton(tab_6);
        saveNtwButton->setObjectName(QString::fromUtf8("saveNtwButton"));

        gridLayout_7->addWidget(saveNtwButton, 4, 1, 1, 1);

        tabWidget->addTab(tab_6, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 25));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_About = new QMenu(menuBar);
        menu_About->setObjectName(QString::fromUtf8("menu_About"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_About->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(action_Open);
        menu_About->addAction(action_Version);
        menu_About->addAction(action_Qt);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Forseti v. 1.0", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        action_Version->setText(QApplication::translate("MainWindow", "&Version", 0, QApplication::UnicodeUTF8));
        action_Qt->setText(QApplication::translate("MainWindow", "&About Qt", 0, QApplication::UnicodeUTF8));
        dumpButton->setText(QApplication::translate("MainWindow", "Dump Process", 0, QApplication::UnicodeUTF8));
        dumpAllButton->setText(QApplication::translate("MainWindow", "Dump All Processes", 0, QApplication::UnicodeUTF8));
        saveProcButton->setText(QApplication::translate("MainWindow", "Save Proc List", 0, QApplication::UnicodeUTF8));
        scanCryptoButton->setText(QApplication::translate("MainWindow", "Scan for Crypto", 0, QApplication::UnicodeUTF8));
        refreshButton->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Processes", 0, QApplication::UnicodeUTF8));
        dumpRegionButton->setText(QApplication::translate("MainWindow", "Dump Region", 0, QApplication::UnicodeUTF8));
        savemapButton->setText(QApplication::translate("MainWindow", "Save Map", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Memory Map", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Threads", 0, QApplication::UnicodeUTF8));
        saveOFilesListButton->setText(QApplication::translate("MainWindow", "SaveList", 0, QApplication::UnicodeUTF8));
        refrOFilesButton->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Opened Files", 0, QApplication::UnicodeUTF8));
        refrStatsButton->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        saveStatsButton->setText(QApplication::translate("MainWindow", "Save Stats", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Process Stats", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "ipv4 TCP Table", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "ipv4 UDP Table", 0, QApplication::UnicodeUTF8));
        rfrshNetButton->setText(QApplication::translate("MainWindow", "Refresh List", 0, QApplication::UnicodeUTF8));
        saveNtwButton->setText(QApplication::translate("MainWindow", "Save List", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Network Activity", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_About->setTitle(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
