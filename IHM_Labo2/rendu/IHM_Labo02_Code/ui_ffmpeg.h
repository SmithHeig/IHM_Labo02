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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FFMPEG
{
public:
    QWidget *centralWidget;
    QPushButton *browseButton;
    QPushButton *openButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_outputFile;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_genreate_output;
    QTextEdit *textEdit_result;
    QLabel *label_duration;
    QLabel *label_10;
    QLabel *ErrorMessage;
    QLineEdit *lineEditInputFile;
    QPushButton *browseButton_2;
    QTimeEdit *timeEdit_end;
    QTimeEdit *timeEdit_start;
    QLabel *ErrorMessage_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FFMPEG)
    {
        if (FFMPEG->objectName().isEmpty())
            FFMPEG->setObjectName(QStringLiteral("FFMPEG"));
        FFMPEG->resize(528, 498);
        FFMPEG->setMinimumSize(QSize(528, 498));
        FFMPEG->setMaximumSize(QSize(528, 498));
        centralWidget = new QWidget(FFMPEG);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        browseButton = new QPushButton(centralWidget);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setGeometry(QRect(450, 20, 75, 23));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setEnabled(true);
        openButton->setGeometry(QRect(210, 50, 111, 23));
        openButton->setCheckable(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 141, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(20, 280, 101, 16));
        lineEdit_outputFile = new QLineEdit(centralWidget);
        lineEdit_outputFile->setObjectName(QStringLiteral("lineEdit_outputFile"));
        lineEdit_outputFile->setEnabled(false);
        lineEdit_outputFile->setGeometry(QRect(120, 280, 321, 20));
        lineEdit_outputFile->setFrame(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(150, 150, 101, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(270, 150, 51, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        label_5->setGeometry(QRect(90, 180, 51, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);
        label_6->setGeometry(QRect(390, 180, 51, 16));
        pushButton_genreate_output = new QPushButton(centralWidget);
        pushButton_genreate_output->setObjectName(QStringLiteral("pushButton_genreate_output"));
        pushButton_genreate_output->setEnabled(false);
        pushButton_genreate_output->setGeometry(QRect(190, 340, 151, 23));
        textEdit_result = new QTextEdit(centralWidget);
        textEdit_result->setObjectName(QStringLiteral("textEdit_result"));
        textEdit_result->setEnabled(true);
        textEdit_result->setGeometry(QRect(10, 370, 511, 61));
        label_duration = new QLabel(centralWidget);
        label_duration->setObjectName(QStringLiteral("label_duration"));
        label_duration->setEnabled(false);
        label_duration->setGeometry(QRect(230, 220, 71, 20));
        label_duration->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(false);
        label_10->setGeometry(QRect(240, 180, 51, 21));
        ErrorMessage = new QLabel(centralWidget);
        ErrorMessage->setObjectName(QStringLiteral("ErrorMessage"));
        ErrorMessage->setEnabled(false);
        ErrorMessage->setGeometry(QRect(10, 80, 511, 41));
        ErrorMessage->setFocusPolicy(Qt::NoFocus);
        ErrorMessage->setTextFormat(Qt::AutoText);
        ErrorMessage->setScaledContents(false);
        ErrorMessage->setAlignment(Qt::AlignCenter);
        lineEditInputFile = new QLineEdit(centralWidget);
        lineEditInputFile->setObjectName(QStringLiteral("lineEditInputFile"));
        lineEditInputFile->setGeometry(QRect(120, 20, 321, 20));
        browseButton_2 = new QPushButton(centralWidget);
        browseButton_2->setObjectName(QStringLiteral("browseButton_2"));
        browseButton_2->setGeometry(QRect(450, 280, 75, 23));
        timeEdit_end = new QTimeEdit(centralWidget);
        timeEdit_end->setObjectName(QStringLiteral("timeEdit_end"));
        timeEdit_end->setEnabled(true);
        timeEdit_end->setGeometry(QRect(377, 220, 91, 22));
        timeEdit_start = new QTimeEdit(centralWidget);
        timeEdit_start->setObjectName(QStringLiteral("timeEdit_start"));
        timeEdit_start->setGeometry(QRect(87, 220, 91, 22));
        ErrorMessage_2 = new QLabel(centralWidget);
        ErrorMessage_2->setObjectName(QStringLiteral("ErrorMessage_2"));
        ErrorMessage_2->setEnabled(false);
        ErrorMessage_2->setGeometry(QRect(20, 310, 511, 21));
        ErrorMessage_2->setFocusPolicy(Qt::NoFocus);
        ErrorMessage_2->setTextFormat(Qt::AutoText);
        ErrorMessage_2->setScaledContents(false);
        ErrorMessage_2->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setEnabled(false);
        label_11->setGeometry(QRect(370, 200, 71, 21));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(false);
        label_12->setGeometry(QRect(260, 130, 71, 21));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(false);
        label_13->setGeometry(QRect(230, 210, 71, 21));
        label_13->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setEnabled(false);
        label_15->setGeometry(QRect(80, 200, 71, 21));
        label_15->setAlignment(Qt::AlignCenter);
        FFMPEG->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FFMPEG);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 528, 21));
        FFMPEG->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FFMPEG);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMaximumSize(QSize(531, 12));
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
        label->setText(QApplication::translate("FFMPEG", "Select input video file", Q_NULLPTR));
        label_2->setText(QApplication::translate("FFMPEG", "Select output folder", Q_NULLPTR));
        label_3->setText(QApplication::translate("FFMPEG", "Total video duration:", Q_NULLPTR));
        label_4->setText(QApplication::translate("FFMPEG", "00:00:00", Q_NULLPTR));
        label_5->setText(QApplication::translate("FFMPEG", "Start time", Q_NULLPTR));
        label_6->setText(QApplication::translate("FFMPEG", "End time", Q_NULLPTR));
        pushButton_genreate_output->setText(QApplication::translate("FFMPEG", "Generate output", Q_NULLPTR));
        label_duration->setText(QApplication::translate("FFMPEG", "00:00:00", Q_NULLPTR));
        label_10->setText(QApplication::translate("FFMPEG", "Duration", Q_NULLPTR));
        ErrorMessage->setText(QString());
        lineEditInputFile->setPlaceholderText(QApplication::translate("FFMPEG", "Choose a video file", Q_NULLPTR));
        browseButton_2->setText(QApplication::translate("FFMPEG", "browse", Q_NULLPTR));
        ErrorMessage_2->setText(QString());
        label_11->setText(QApplication::translate("FFMPEG", "[hh:mm:ss]", Q_NULLPTR));
        label_12->setText(QApplication::translate("FFMPEG", "[hh:mm:ss]", Q_NULLPTR));
        label_13->setText(QApplication::translate("FFMPEG", "[hh:mm:ss]", Q_NULLPTR));
        label_15->setText(QApplication::translate("FFMPEG", "[hh:mm:ss]", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FFMPEG: public Ui_FFMPEG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEG_H
