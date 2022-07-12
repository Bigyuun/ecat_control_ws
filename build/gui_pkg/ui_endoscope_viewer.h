/********************************************************************************
** Form generated from reading UI file 'endoscope_viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDOSCOPE_VIEWER_H
#define UI_ENDOSCOPE_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EndoscopeViewer
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *image_frame;
    QVBoxLayout *overlay_layout;
    QPushButton *b_start_capture;
    QPushButton *b_stop_capture;
    QPushButton *b_exit;

    void setupUi(QMainWindow *EndoscopeViewer)
    {
        if (EndoscopeViewer->objectName().isEmpty())
            EndoscopeViewer->setObjectName(QString::fromUtf8("EndoscopeViewer"));
        EndoscopeViewer->resize(1700, 1080);
        EndoscopeViewer->setMaximumSize(QSize(1920, 1080));
        centralwidget = new QWidget(EndoscopeViewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color : rgb(46,46,48)"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 20, 20, 20);
        image_frame = new QLabel(centralwidget);
        image_frame->setObjectName(QString::fromUtf8("image_frame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image_frame->sizePolicy().hasHeightForWidth());
        image_frame->setSizePolicy(sizePolicy);

        gridLayout->addWidget(image_frame, 0, 0, 1, 1);

        overlay_layout = new QVBoxLayout();
        overlay_layout->setSpacing(5);
        overlay_layout->setObjectName(QString::fromUtf8("overlay_layout"));
        overlay_layout->setSizeConstraint(QLayout::SetMinimumSize);
        overlay_layout->setContentsMargins(5, 5, 5, 5);
        b_start_capture = new QPushButton(centralwidget);
        b_start_capture->setObjectName(QString::fromUtf8("b_start_capture"));
        b_start_capture->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(b_start_capture->sizePolicy().hasHeightForWidth());
        b_start_capture->setSizePolicy(sizePolicy1);
        b_start_capture->setMinimumSize(QSize(50, 50));
        b_start_capture->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 71,219);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        overlay_layout->addWidget(b_start_capture);

        b_stop_capture = new QPushButton(centralwidget);
        b_stop_capture->setObjectName(QString::fromUtf8("b_stop_capture"));
        b_stop_capture->setEnabled(true);
        sizePolicy1.setHeightForWidth(b_stop_capture->sizePolicy().hasHeightForWidth());
        b_stop_capture->setSizePolicy(sizePolicy1);
        b_stop_capture->setMinimumSize(QSize(50, 50));
        b_stop_capture->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 71,219);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        overlay_layout->addWidget(b_stop_capture);

        b_exit = new QPushButton(centralwidget);
        b_exit->setObjectName(QString::fromUtf8("b_exit"));
        sizePolicy1.setHeightForWidth(b_exit->sizePolicy().hasHeightForWidth());
        b_exit->setSizePolicy(sizePolicy1);
        b_exit->setMinimumSize(QSize(50, 50));
        b_exit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color:rgb(255,123,0);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        overlay_layout->addWidget(b_exit);


        gridLayout->addLayout(overlay_layout, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 1);
        EndoscopeViewer->setCentralWidget(centralwidget);

        retranslateUi(EndoscopeViewer);

        QMetaObject::connectSlotsByName(EndoscopeViewer);
    } // setupUi

    void retranslateUi(QMainWindow *EndoscopeViewer)
    {
        EndoscopeViewer->setWindowTitle(QApplication::translate("EndoscopeViewer", "MainWindow", nullptr));
        image_frame->setText(QString());
        b_start_capture->setText(QApplication::translate("EndoscopeViewer", "START CAPTURE", nullptr));
        b_stop_capture->setText(QApplication::translate("EndoscopeViewer", "STOP CAPTURE", nullptr));
        b_exit->setText(QApplication::translate("EndoscopeViewer", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndoscopeViewer: public Ui_EndoscopeViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDOSCOPE_VIEWER_H
