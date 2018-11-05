/********************************************************************************
** Form generated from reading UI file 'ffmpeg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEG_H
#define UI_FFMPEG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FFMPEG
{
public:
    QWidget *centralWidget;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QPushButton *browseButton;
    QPushButton *openButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *browseButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditInputFile;
    QLabel *ErrorMessage;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FFMPEG)
    {
        if (FFMPEG->objectName().isEmpty())
            FFMPEG->setObjectName(QStringLiteral("FFMPEG"));
        FFMPEG->resize(502, 490);
        centralWidget = new QWidget(FFMPEG);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setGeometry(QRect(40, 230, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setEnabled(false);
        horizontalSlider_2->setGeometry(QRect(260, 230, 160, 21));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        browseButton = new QPushButton(centralWidget);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setGeometry(QRect(400, 20, 75, 23));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setEnabled(true);
        openButton->setGeometry(QRect(190, 50, 91, 23));
        openButton->setCheckable(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 111, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(30, 110, 101, 16));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(150, 110, 211, 20));
        browseButton_2 = new QPushButton(centralWidget);
        browseButton_2->setObjectName(QStringLiteral("browseButton_2"));
        browseButton_2->setEnabled(false);
        browseButton_2->setGeometry(QRect(370, 110, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(140, 150, 101, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(250, 150, 51, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        label_5->setGeometry(QRect(90, 210, 51, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);
        label_6->setGeometry(QRect(310, 210, 51, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(false);
        label_7->setGeometry(QRect(90, 260, 51, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(false);
        label_8->setGeometry(QRect(310, 250, 51, 16));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(160, 320, 151, 23));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(30, 360, 411, 61));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(false);
        label_9->setGeometry(QRect(210, 290, 51, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(false);
        label_10->setGeometry(QRect(210, 270, 51, 16));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 20, 261, 22));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditInputFile = new QLineEdit(horizontalLayoutWidget);
        lineEditInputFile->setObjectName(QStringLiteral("lineEditInputFile"));

        horizontalLayout->addWidget(lineEditInputFile);

        ErrorMessage = new QLabel(centralWidget);
        ErrorMessage->setObjectName(QStringLiteral("ErrorMessage"));
        ErrorMessage->setEnabled(false);
        ErrorMessage->setGeometry(QRect(190, 80, 101, 16));
        FFMPEG->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FFMPEG);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 502, 21));
        FFMPEG->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FFMPEG);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FFMPEG->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FFMPEG);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FFMPEG->setStatusBar(statusBar);

        retranslateUi(FFMPEG);

        QMetaObject::connectSlotsByName(FFMPEG);
    } // setupUi

    void retranslateUi(QMainWindow *FFMPEG)
    {
        FFMPEG->setWindowTitle(QApplication::translate("FFMPEG", "FFMPEG", Q_NULLPTR));
        browseButton->setText(QApplication::translate("FFMPEG", "browse", Q_NULLPTR));
        openButton->setText(QApplication::translate("FFMPEG", "open", Q_NULLPTR));
        label->setText(QApplication::translate("FFMPEG", "Select input file (.mp4)", Q_NULLPTR));
        label_2->setText(QApplication::translate("FFMPEG", "Select output folder", Q_NULLPTR));
        browseButton_2->setText(QApplication::translate("FFMPEG", "browse", Q_NULLPTR));
        label_3->setText(QApplication::translate("FFMPEG", "Total video duration:", Q_NULLPTR));
        label_4->setText(QApplication::translate("FFMPEG", "00:00:00", Q_NULLPTR));
        label_5->setText(QApplication::translate("FFMPEG", "Start time", Q_NULLPTR));
        label_6->setText(QApplication::translate("FFMPEG", "End time", Q_NULLPTR));
        label_7->setText(QApplication::translate("FFMPEG", "00:00:00", Q_NULLPTR));
        label_8->setText(QApplication::translate("FFMPEG", "00:00:00", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FFMPEG", "Generate output", Q_NULLPTR));
        label_9->setText(QApplication::translate("FFMPEG", "00:00:00", Q_NULLPTR));
        label_10->setText(QApplication::translate("FFMPEG", "Duration", Q_NULLPTR));
        ErrorMessage->setText(QApplication::translate("FFMPEG", "Select output folder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FFMPEG: public Ui_FFMPEG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEG_H
