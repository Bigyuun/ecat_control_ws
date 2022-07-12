/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *overlay_layout;
    QLabel *label_motor1;
    QGridLayout *motor1_grid_layout;
    QLabel *line_target_velocity_m1;
    QLabel *label_control_word_m1;
    QLabel *label_target_velocity_m1;
    QLabel *label_actual_velocity_m1;
    QLabel *label_status_word_m1;
    QLabel *line_control_word_m1;
    QLabel *line_actual_velocity_m1;
    QLabel *line_status_word_m1;
    QLabel *label_motor2;
    QGridLayout *gridLayout_3;
    QLabel *label_control_word_m2;
    QLabel *label_actual_velocity_m2;
    QLabel *label_status_word_m2;
    QLabel *label_target_velocity_m2;
    QLabel *line_target_velocity_m2;
    QLabel *line_control_word_m2;
    QLabel *line_actual_velocity_m2;
    QLabel *line_status_word_m2;
    QLabel *label_motor3;
    QGridLayout *gridLayout_2;
    QLabel *line_status_word_m3;
    QLabel *label_target_velocity_m3;
    QLabel *label_control_word_m3;
    QLabel *label_actual_velocity_m3;
    QLabel *label_status_word_m3;
    QLabel *line_control_word_m3;
    QLabel *line_target_velocity_m3;
    QLabel *line_actual_velocity_m3;
    QLabel *label_status;
    QGridLayout *status_grid_layout;
    QLabel *label_emergency_switch;
    QLabel *label_com_status;
    QLabel *line_emergency_switch;
    QLabel *line_com_status;
    QPushButton *button_emergency;
    QPushButton *button_reset;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_4;
    QLabel *image_frame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1109, 656);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindow);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        overlay_layout = new QVBoxLayout();
        overlay_layout->setSpacing(3);
        overlay_layout->setObjectName(QString::fromUtf8("overlay_layout"));
        overlay_layout->setContentsMargins(2, 2, 2, 2);
        label_motor1 = new QLabel(centralwidget);
        label_motor1->setObjectName(QString::fromUtf8("label_motor1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_motor1->sizePolicy().hasHeightForWidth());
        label_motor1->setSizePolicy(sizePolicy1);
        label_motor1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        label_motor1->setAlignment(Qt::AlignCenter);

        overlay_layout->addWidget(label_motor1);

        motor1_grid_layout = new QGridLayout();
        motor1_grid_layout->setObjectName(QString::fromUtf8("motor1_grid_layout"));
        line_target_velocity_m1 = new QLabel(centralwidget);
        line_target_velocity_m1->setObjectName(QString::fromUtf8("line_target_velocity_m1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_target_velocity_m1->sizePolicy().hasHeightForWidth());
        line_target_velocity_m1->setSizePolicy(sizePolicy2);
        line_target_velocity_m1->setMinimumSize(QSize(80, 30));
        line_target_velocity_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_target_velocity_m1->setAlignment(Qt::AlignCenter);

        motor1_grid_layout->addWidget(line_target_velocity_m1, 0, 1, 1, 1);

        label_control_word_m1 = new QLabel(centralwidget);
        label_control_word_m1->setObjectName(QString::fromUtf8("label_control_word_m1"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_control_word_m1->sizePolicy().hasHeightForWidth());
        label_control_word_m1->setSizePolicy(sizePolicy3);
        label_control_word_m1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        motor1_grid_layout->addWidget(label_control_word_m1, 1, 0, 1, 1);

        label_target_velocity_m1 = new QLabel(centralwidget);
        label_target_velocity_m1->setObjectName(QString::fromUtf8("label_target_velocity_m1"));
        sizePolicy3.setHeightForWidth(label_target_velocity_m1->sizePolicy().hasHeightForWidth());
        label_target_velocity_m1->setSizePolicy(sizePolicy3);
        label_target_velocity_m1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        label_target_velocity_m1->setAlignment(Qt::AlignCenter);
        label_target_velocity_m1->setMargin(5);

        motor1_grid_layout->addWidget(label_target_velocity_m1, 0, 0, 1, 1);

        label_actual_velocity_m1 = new QLabel(centralwidget);
        label_actual_velocity_m1->setObjectName(QString::fromUtf8("label_actual_velocity_m1"));
        sizePolicy3.setHeightForWidth(label_actual_velocity_m1->sizePolicy().hasHeightForWidth());
        label_actual_velocity_m1->setSizePolicy(sizePolicy3);
        label_actual_velocity_m1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        label_actual_velocity_m1->setAlignment(Qt::AlignCenter);
        label_actual_velocity_m1->setMargin(2);

        motor1_grid_layout->addWidget(label_actual_velocity_m1, 0, 2, 1, 1);

        label_status_word_m1 = new QLabel(centralwidget);
        label_status_word_m1->setObjectName(QString::fromUtf8("label_status_word_m1"));
        sizePolicy3.setHeightForWidth(label_status_word_m1->sizePolicy().hasHeightForWidth());
        label_status_word_m1->setSizePolicy(sizePolicy3);
        label_status_word_m1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        motor1_grid_layout->addWidget(label_status_word_m1, 1, 2, 1, 1);

        line_control_word_m1 = new QLabel(centralwidget);
        line_control_word_m1->setObjectName(QString::fromUtf8("line_control_word_m1"));
        sizePolicy2.setHeightForWidth(line_control_word_m1->sizePolicy().hasHeightForWidth());
        line_control_word_m1->setSizePolicy(sizePolicy2);
        line_control_word_m1->setMinimumSize(QSize(80, 30));
        line_control_word_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_control_word_m1->setAlignment(Qt::AlignCenter);

        motor1_grid_layout->addWidget(line_control_word_m1, 1, 1, 1, 1);

        line_actual_velocity_m1 = new QLabel(centralwidget);
        line_actual_velocity_m1->setObjectName(QString::fromUtf8("line_actual_velocity_m1"));
        sizePolicy2.setHeightForWidth(line_actual_velocity_m1->sizePolicy().hasHeightForWidth());
        line_actual_velocity_m1->setSizePolicy(sizePolicy2);
        line_actual_velocity_m1->setMinimumSize(QSize(80, 30));
        line_actual_velocity_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_actual_velocity_m1->setAlignment(Qt::AlignCenter);

        motor1_grid_layout->addWidget(line_actual_velocity_m1, 0, 3, 1, 1);

        line_status_word_m1 = new QLabel(centralwidget);
        line_status_word_m1->setObjectName(QString::fromUtf8("line_status_word_m1"));
        sizePolicy2.setHeightForWidth(line_status_word_m1->sizePolicy().hasHeightForWidth());
        line_status_word_m1->setSizePolicy(sizePolicy2);
        line_status_word_m1->setMinimumSize(QSize(80, 30));
        line_status_word_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_status_word_m1->setAlignment(Qt::AlignCenter);

        motor1_grid_layout->addWidget(line_status_word_m1, 1, 3, 1, 1);


        overlay_layout->addLayout(motor1_grid_layout);

        label_motor2 = new QLabel(centralwidget);
        label_motor2->setObjectName(QString::fromUtf8("label_motor2"));
        sizePolicy1.setHeightForWidth(label_motor2->sizePolicy().hasHeightForWidth());
        label_motor2->setSizePolicy(sizePolicy1);
        label_motor2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        label_motor2->setAlignment(Qt::AlignCenter);

        overlay_layout->addWidget(label_motor2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_control_word_m2 = new QLabel(centralwidget);
        label_control_word_m2->setObjectName(QString::fromUtf8("label_control_word_m2"));
        sizePolicy3.setHeightForWidth(label_control_word_m2->sizePolicy().hasHeightForWidth());
        label_control_word_m2->setSizePolicy(sizePolicy3);
        label_control_word_m2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        gridLayout_3->addWidget(label_control_word_m2, 3, 0, 1, 1);

        label_actual_velocity_m2 = new QLabel(centralwidget);
        label_actual_velocity_m2->setObjectName(QString::fromUtf8("label_actual_velocity_m2"));
        sizePolicy3.setHeightForWidth(label_actual_velocity_m2->sizePolicy().hasHeightForWidth());
        label_actual_velocity_m2->setSizePolicy(sizePolicy3);
        label_actual_velocity_m2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        label_actual_velocity_m2->setMargin(2);

        gridLayout_3->addWidget(label_actual_velocity_m2, 2, 2, 1, 1);

        label_status_word_m2 = new QLabel(centralwidget);
        label_status_word_m2->setObjectName(QString::fromUtf8("label_status_word_m2"));
        sizePolicy3.setHeightForWidth(label_status_word_m2->sizePolicy().hasHeightForWidth());
        label_status_word_m2->setSizePolicy(sizePolicy3);
        label_status_word_m2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        gridLayout_3->addWidget(label_status_word_m2, 3, 2, 1, 1);

        label_target_velocity_m2 = new QLabel(centralwidget);
        label_target_velocity_m2->setObjectName(QString::fromUtf8("label_target_velocity_m2"));
        sizePolicy3.setHeightForWidth(label_target_velocity_m2->sizePolicy().hasHeightForWidth());
        label_target_velocity_m2->setSizePolicy(sizePolicy3);
        label_target_velocity_m2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        label_target_velocity_m2->setMargin(5);

        gridLayout_3->addWidget(label_target_velocity_m2, 2, 0, 1, 1);

        line_target_velocity_m2 = new QLabel(centralwidget);
        line_target_velocity_m2->setObjectName(QString::fromUtf8("line_target_velocity_m2"));
        sizePolicy2.setHeightForWidth(line_target_velocity_m2->sizePolicy().hasHeightForWidth());
        line_target_velocity_m2->setSizePolicy(sizePolicy2);
        line_target_velocity_m2->setMinimumSize(QSize(80, 30));
        line_target_velocity_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_target_velocity_m2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(line_target_velocity_m2, 2, 1, 1, 1);

        line_control_word_m2 = new QLabel(centralwidget);
        line_control_word_m2->setObjectName(QString::fromUtf8("line_control_word_m2"));
        sizePolicy2.setHeightForWidth(line_control_word_m2->sizePolicy().hasHeightForWidth());
        line_control_word_m2->setSizePolicy(sizePolicy2);
        line_control_word_m2->setMinimumSize(QSize(80, 30));
        line_control_word_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_control_word_m2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(line_control_word_m2, 3, 1, 1, 1);

        line_actual_velocity_m2 = new QLabel(centralwidget);
        line_actual_velocity_m2->setObjectName(QString::fromUtf8("line_actual_velocity_m2"));
        sizePolicy2.setHeightForWidth(line_actual_velocity_m2->sizePolicy().hasHeightForWidth());
        line_actual_velocity_m2->setSizePolicy(sizePolicy2);
        line_actual_velocity_m2->setMinimumSize(QSize(80, 30));
        line_actual_velocity_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_actual_velocity_m2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(line_actual_velocity_m2, 2, 3, 1, 1);

        line_status_word_m2 = new QLabel(centralwidget);
        line_status_word_m2->setObjectName(QString::fromUtf8("line_status_word_m2"));
        sizePolicy2.setHeightForWidth(line_status_word_m2->sizePolicy().hasHeightForWidth());
        line_status_word_m2->setSizePolicy(sizePolicy2);
        line_status_word_m2->setMinimumSize(QSize(80, 30));
        line_status_word_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_status_word_m2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(line_status_word_m2, 3, 3, 1, 1);


        overlay_layout->addLayout(gridLayout_3);

        label_motor3 = new QLabel(centralwidget);
        label_motor3->setObjectName(QString::fromUtf8("label_motor3"));
        sizePolicy1.setHeightForWidth(label_motor3->sizePolicy().hasHeightForWidth());
        label_motor3->setSizePolicy(sizePolicy1);
        label_motor3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        label_motor3->setAlignment(Qt::AlignCenter);

        overlay_layout->addWidget(label_motor3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line_status_word_m3 = new QLabel(centralwidget);
        line_status_word_m3->setObjectName(QString::fromUtf8("line_status_word_m3"));
        sizePolicy2.setHeightForWidth(line_status_word_m3->sizePolicy().hasHeightForWidth());
        line_status_word_m3->setSizePolicy(sizePolicy2);
        line_status_word_m3->setMinimumSize(QSize(80, 30));
        line_status_word_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_status_word_m3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_status_word_m3, 2, 6, 1, 1);

        label_target_velocity_m3 = new QLabel(centralwidget);
        label_target_velocity_m3->setObjectName(QString::fromUtf8("label_target_velocity_m3"));
        sizePolicy2.setHeightForWidth(label_target_velocity_m3->sizePolicy().hasHeightForWidth());
        label_target_velocity_m3->setSizePolicy(sizePolicy2);
        label_target_velocity_m3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        label_target_velocity_m3->setMargin(5);

        gridLayout_2->addWidget(label_target_velocity_m3, 1, 3, 1, 1);

        label_control_word_m3 = new QLabel(centralwidget);
        label_control_word_m3->setObjectName(QString::fromUtf8("label_control_word_m3"));
        sizePolicy2.setHeightForWidth(label_control_word_m3->sizePolicy().hasHeightForWidth());
        label_control_word_m3->setSizePolicy(sizePolicy2);
        label_control_word_m3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        gridLayout_2->addWidget(label_control_word_m3, 2, 3, 1, 1);

        label_actual_velocity_m3 = new QLabel(centralwidget);
        label_actual_velocity_m3->setObjectName(QString::fromUtf8("label_actual_velocity_m3"));
        sizePolicy2.setHeightForWidth(label_actual_velocity_m3->sizePolicy().hasHeightForWidth());
        label_actual_velocity_m3->setSizePolicy(sizePolicy2);
        label_actual_velocity_m3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        label_actual_velocity_m3->setMargin(2);

        gridLayout_2->addWidget(label_actual_velocity_m3, 1, 5, 1, 1);

        label_status_word_m3 = new QLabel(centralwidget);
        label_status_word_m3->setObjectName(QString::fromUtf8("label_status_word_m3"));
        sizePolicy2.setHeightForWidth(label_status_word_m3->sizePolicy().hasHeightForWidth());
        label_status_word_m3->setSizePolicy(sizePolicy2);
        label_status_word_m3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        gridLayout_2->addWidget(label_status_word_m3, 2, 5, 1, 1);

        line_control_word_m3 = new QLabel(centralwidget);
        line_control_word_m3->setObjectName(QString::fromUtf8("line_control_word_m3"));
        sizePolicy2.setHeightForWidth(line_control_word_m3->sizePolicy().hasHeightForWidth());
        line_control_word_m3->setSizePolicy(sizePolicy2);
        line_control_word_m3->setMinimumSize(QSize(80, 30));
        line_control_word_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_control_word_m3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_control_word_m3, 2, 4, 1, 1);

        line_target_velocity_m3 = new QLabel(centralwidget);
        line_target_velocity_m3->setObjectName(QString::fromUtf8("line_target_velocity_m3"));
        sizePolicy2.setHeightForWidth(line_target_velocity_m3->sizePolicy().hasHeightForWidth());
        line_target_velocity_m3->setSizePolicy(sizePolicy2);
        line_target_velocity_m3->setMinimumSize(QSize(80, 30));
        line_target_velocity_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_target_velocity_m3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_target_velocity_m3, 1, 4, 1, 1);

        line_actual_velocity_m3 = new QLabel(centralwidget);
        line_actual_velocity_m3->setObjectName(QString::fromUtf8("line_actual_velocity_m3"));
        sizePolicy2.setHeightForWidth(line_actual_velocity_m3->sizePolicy().hasHeightForWidth());
        line_actual_velocity_m3->setSizePolicy(sizePolicy2);
        line_actual_velocity_m3->setMinimumSize(QSize(80, 30));
        line_actual_velocity_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_actual_velocity_m3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_actual_velocity_m3, 1, 6, 1, 1);


        overlay_layout->addLayout(gridLayout_2);

        label_status = new QLabel(centralwidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        sizePolicy1.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy1);
        label_status->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        label_status->setAlignment(Qt::AlignCenter);

        overlay_layout->addWidget(label_status);

        status_grid_layout = new QGridLayout();
        status_grid_layout->setObjectName(QString::fromUtf8("status_grid_layout"));
        label_emergency_switch = new QLabel(centralwidget);
        label_emergency_switch->setObjectName(QString::fromUtf8("label_emergency_switch"));
        sizePolicy2.setHeightForWidth(label_emergency_switch->sizePolicy().hasHeightForWidth());
        label_emergency_switch->setSizePolicy(sizePolicy2);
        label_emergency_switch->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        status_grid_layout->addWidget(label_emergency_switch, 0, 0, 1, 1);

        label_com_status = new QLabel(centralwidget);
        label_com_status->setObjectName(QString::fromUtf8("label_com_status"));
        sizePolicy2.setHeightForWidth(label_com_status->sizePolicy().hasHeightForWidth());
        label_com_status->setSizePolicy(sizePolicy2);
        label_com_status->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 12pt \"Noto Sans\";"));

        status_grid_layout->addWidget(label_com_status, 1, 0, 1, 1);

        line_emergency_switch = new QLabel(centralwidget);
        line_emergency_switch->setObjectName(QString::fromUtf8("line_emergency_switch"));
        sizePolicy2.setHeightForWidth(line_emergency_switch->sizePolicy().hasHeightForWidth());
        line_emergency_switch->setSizePolicy(sizePolicy2);
        line_emergency_switch->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_emergency_switch->setAlignment(Qt::AlignCenter);

        status_grid_layout->addWidget(line_emergency_switch, 0, 1, 1, 1);

        line_com_status = new QLabel(centralwidget);
        line_com_status->setObjectName(QString::fromUtf8("line_com_status"));
        sizePolicy2.setHeightForWidth(line_com_status->sizePolicy().hasHeightForWidth());
        line_com_status->setSizePolicy(sizePolicy2);
        line_com_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Noto Sans\";"));
        line_com_status->setAlignment(Qt::AlignCenter);

        status_grid_layout->addWidget(line_com_status, 1, 1, 1, 1);


        overlay_layout->addLayout(status_grid_layout);

        button_emergency = new QPushButton(centralwidget);
        button_emergency->setObjectName(QString::fromUtf8("button_emergency"));
        button_emergency->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(button_emergency->sizePolicy().hasHeightForWidth());
        button_emergency->setSizePolicy(sizePolicy4);
        button_emergency->setMinimumSize(QSize(50, 50));
        button_emergency->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0,0);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        overlay_layout->addWidget(button_emergency);

        button_reset = new QPushButton(centralwidget);
        button_reset->setObjectName(QString::fromUtf8("button_reset"));
        sizePolicy1.setHeightForWidth(button_reset->sizePolicy().hasHeightForWidth());
        button_reset->setSizePolicy(sizePolicy1);
        button_reset->setMinimumSize(QSize(50, 50));
        button_reset->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color:rgb(255,123,0);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        overlay_layout->addWidget(button_reset);

        overlay_layout->setStretch(0, 1);

        gridLayout->addLayout(overlay_layout, 0, 1, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 642, 638));
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        image_frame = new QLabel(scrollAreaWidgetContents);
        image_frame->setObjectName(QString::fromUtf8("image_frame"));
        sizePolicy.setHeightForWidth(image_frame->sizePolicy().hasHeightForWidth());
        image_frame->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(image_frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QRosApp", nullptr));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindow", "&Preferences", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About &Qt", nullptr));
        label_motor1->setText(QApplication::translate("MainWindow", "MOTOR 1", nullptr));
        line_target_velocity_m1->setText(QString());
        label_control_word_m1->setText(QApplication::translate("MainWindow", "  Control Word", nullptr));
        label_target_velocity_m1->setText(QApplication::translate("MainWindow", "  Target Position", nullptr));
        label_actual_velocity_m1->setText(QApplication::translate("MainWindow", "  Actual Position ", nullptr));
        label_status_word_m1->setText(QApplication::translate("MainWindow", "  Status Word", nullptr));
        line_control_word_m1->setText(QString());
        line_actual_velocity_m1->setText(QString());
        line_status_word_m1->setText(QString());
        label_motor2->setText(QApplication::translate("MainWindow", "MOTOR 2", nullptr));
        label_control_word_m2->setText(QApplication::translate("MainWindow", "  Control Word  ", nullptr));
        label_actual_velocity_m2->setText(QApplication::translate("MainWindow", "  Actual Position ", nullptr));
        label_status_word_m2->setText(QApplication::translate("MainWindow", "  Status Word  ", nullptr));
        label_target_velocity_m2->setText(QApplication::translate("MainWindow", "  Target Position", nullptr));
        line_target_velocity_m2->setText(QString());
        line_control_word_m2->setText(QString());
        line_actual_velocity_m2->setText(QString());
        line_status_word_m2->setText(QString());
        label_motor3->setText(QApplication::translate("MainWindow", "MOTOR 3", nullptr));
        line_status_word_m3->setText(QString());
        label_target_velocity_m3->setText(QApplication::translate("MainWindow", "  Target Position", nullptr));
        label_control_word_m3->setText(QApplication::translate("MainWindow", "  Control Word  ", nullptr));
        label_actual_velocity_m3->setText(QApplication::translate("MainWindow", "  Actual Position ", nullptr));
        label_status_word_m3->setText(QApplication::translate("MainWindow", "  Status Word  ", nullptr));
        line_control_word_m3->setText(QString());
        line_target_velocity_m3->setText(QString());
        line_actual_velocity_m3->setText(QString());
        label_status->setText(QApplication::translate("MainWindow", "STATUS", nullptr));
        label_emergency_switch->setText(QApplication::translate("MainWindow", "  EMERGENCY SWITCH", nullptr));
        label_com_status->setText(QApplication::translate("MainWindow", "  COMMUNICATION STATUS   ", nullptr));
        line_emergency_switch->setText(QString());
        line_com_status->setText(QString());
        button_emergency->setText(QApplication::translate("MainWindow", "EMERGENCY BUTTON", nullptr));
        button_reset->setText(QApplication::translate("MainWindow", "RESET", nullptr));
        image_frame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
