/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *bottom_horizontal_layout;
    QVBoxLayout *left_sdo_button_layout;
    QPushButton *b_enable_cyclic_pos;
    QPushButton *b_enable_cylic_vel;
    QPushButton *b_enable_vel;
    QPushButton *b_enable_pos;
    QVBoxLayout *right_verticalLayout;
    QHBoxLayout *top_horizontal_layout;
    QPushButton *b_init_ecat;
    QPushButton *b_reinit_ecat;
    QPushButton *b_enable_drives;
    QPushButton *b_disable_drives;
    QHBoxLayout *up_horizontalLayout;
    QPushButton *b_enter_cyclic_pdo;
    QPushButton *b_stop_cyclic_pdo;
    QPushButton *b_emergency_mode;
    QHBoxLayout *send_horizontalLayout;
    QVBoxLayout *target_vertical_layout;
    QLabel *lb_enter_target_vals;
    QSpinBox *spn_target_val_1;
    QSpinBox *spn_target_val_2;
    QSpinBox *spn_target_val_3;
    QPushButton *b_send;
    QLabel *ls_status_bar;
    QGridLayout *status_bar_gridLayout;
    QLabel *lb_target_pos_m1;
    QLabel *label_motor1;
    QLabel *ls_op_mode;
    QLabel *lb_control_word_m3;
    QLabel *ls_tar_vel;
    QLabel *lb_control_word_m2;
    QLabel *lb_com_status;
    QLabel *lb_actual_vel_m2;
    QLabel *lb_actual_vel_m3;
    QLabel *lb_status_word_m1;
    QLabel *ls_tar_pos;
    QLabel *lb_actual_tor_m1;
    QLabel *lb_status_word_m3;
    QLabel *label_motor3;
    QLabel *lb_target_pos_m2;
    QLabel *lb_target_tor_m3;
    QLabel *lb_op_mode_m3;
    QLabel *lb_op_mode_m2;
    QLabel *lb_op_mode_m1;
    QLabel *ls_control_word;
    QLabel *lb_target_vel_m1;
    QLabel *ls_target_tor;
    QLabel *lb_target_pos_m3;
    QLabel *lb_actual_pos_m3;
    QLabel *lb_emergency_status;
    QLabel *ls_ecat_status_bar;
    QLabel *lb_actual_tor_m3;
    QLabel *lb_target_tor_m1;
    QLabel *lb_actual_tor_m2;
    QLabel *lb_actual_pos_m1;
    QLabel *lb_control_word_m1;
    QLabel *ls_emergency_status;
    QLabel *lb_status_word_m2;
    QLabel *lb_target_tor_m2;
    QLabel *lb_target_vel_m3;
    QLabel *lb_actual_pos_m2;
    QLabel *ls_com_status;
    QLabel *label_motor2;
    QLabel *label_motor_no;
    QLabel *lb_actual_vel_m1;
    QLabel *lb_target_vel_m2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1164, 637);
        MainWindow->setMaximumSize(QSize(1920, 1080));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bottom_horizontal_layout = new QHBoxLayout();
        bottom_horizontal_layout->setObjectName(QString::fromUtf8("bottom_horizontal_layout"));
        left_sdo_button_layout = new QVBoxLayout();
        left_sdo_button_layout->setObjectName(QString::fromUtf8("left_sdo_button_layout"));
        b_enable_cyclic_pos = new QPushButton(centralwidget);
        b_enable_cyclic_pos->setObjectName(QString::fromUtf8("b_enable_cyclic_pos"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b_enable_cyclic_pos->sizePolicy().hasHeightForWidth());
        b_enable_cyclic_pos->setSizePolicy(sizePolicy);
        b_enable_cyclic_pos->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        left_sdo_button_layout->addWidget(b_enable_cyclic_pos);

        b_enable_cylic_vel = new QPushButton(centralwidget);
        b_enable_cylic_vel->setObjectName(QString::fromUtf8("b_enable_cylic_vel"));
        sizePolicy.setHeightForWidth(b_enable_cylic_vel->sizePolicy().hasHeightForWidth());
        b_enable_cylic_vel->setSizePolicy(sizePolicy);
        b_enable_cylic_vel->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        left_sdo_button_layout->addWidget(b_enable_cylic_vel);

        b_enable_vel = new QPushButton(centralwidget);
        b_enable_vel->setObjectName(QString::fromUtf8("b_enable_vel"));
        sizePolicy.setHeightForWidth(b_enable_vel->sizePolicy().hasHeightForWidth());
        b_enable_vel->setSizePolicy(sizePolicy);
        b_enable_vel->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        left_sdo_button_layout->addWidget(b_enable_vel);

        b_enable_pos = new QPushButton(centralwidget);
        b_enable_pos->setObjectName(QString::fromUtf8("b_enable_pos"));
        sizePolicy.setHeightForWidth(b_enable_pos->sizePolicy().hasHeightForWidth());
        b_enable_pos->setSizePolicy(sizePolicy);
        b_enable_pos->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        left_sdo_button_layout->addWidget(b_enable_pos);


        bottom_horizontal_layout->addLayout(left_sdo_button_layout);

        right_verticalLayout = new QVBoxLayout();
        right_verticalLayout->setObjectName(QString::fromUtf8("right_verticalLayout"));
        top_horizontal_layout = new QHBoxLayout();
        top_horizontal_layout->setObjectName(QString::fromUtf8("top_horizontal_layout"));
        b_init_ecat = new QPushButton(centralwidget);
        b_init_ecat->setObjectName(QString::fromUtf8("b_init_ecat"));
        sizePolicy.setHeightForWidth(b_init_ecat->sizePolicy().hasHeightForWidth());
        b_init_ecat->setSizePolicy(sizePolicy);
        b_init_ecat->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"font: bold 75 16pt \"Noto Sans\";\n"
"}\n"
""));

        top_horizontal_layout->addWidget(b_init_ecat);

        b_reinit_ecat = new QPushButton(centralwidget);
        b_reinit_ecat->setObjectName(QString::fromUtf8("b_reinit_ecat"));
        sizePolicy.setHeightForWidth(b_reinit_ecat->sizePolicy().hasHeightForWidth());
        b_reinit_ecat->setSizePolicy(sizePolicy);
        b_reinit_ecat->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"font: bold 75 16pt \"Noto Sans\";\n"
"}\n"
""));

        top_horizontal_layout->addWidget(b_reinit_ecat);

        b_enable_drives = new QPushButton(centralwidget);
        b_enable_drives->setObjectName(QString::fromUtf8("b_enable_drives"));
        sizePolicy.setHeightForWidth(b_enable_drives->sizePolicy().hasHeightForWidth());
        b_enable_drives->setSizePolicy(sizePolicy);
        b_enable_drives->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"font: bold 75 16pt \"Noto Sans\";\n"
"}\n"
""));

        top_horizontal_layout->addWidget(b_enable_drives);

        b_disable_drives = new QPushButton(centralwidget);
        b_disable_drives->setObjectName(QString::fromUtf8("b_disable_drives"));
        sizePolicy.setHeightForWidth(b_disable_drives->sizePolicy().hasHeightForWidth());
        b_disable_drives->setSizePolicy(sizePolicy);
        b_disable_drives->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        top_horizontal_layout->addWidget(b_disable_drives);


        right_verticalLayout->addLayout(top_horizontal_layout);

        up_horizontalLayout = new QHBoxLayout();
        up_horizontalLayout->setObjectName(QString::fromUtf8("up_horizontalLayout"));
        up_horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        b_enter_cyclic_pdo = new QPushButton(centralwidget);
        b_enter_cyclic_pdo->setObjectName(QString::fromUtf8("b_enter_cyclic_pdo"));
        sizePolicy.setHeightForWidth(b_enter_cyclic_pdo->sizePolicy().hasHeightForWidth());
        b_enter_cyclic_pdo->setSizePolicy(sizePolicy);
        b_enter_cyclic_pdo->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"font: bold 75 16pt \"Noto Sans\";\n"
"}\n"
""));

        up_horizontalLayout->addWidget(b_enter_cyclic_pdo);

        b_stop_cyclic_pdo = new QPushButton(centralwidget);
        b_stop_cyclic_pdo->setObjectName(QString::fromUtf8("b_stop_cyclic_pdo"));
        sizePolicy.setHeightForWidth(b_stop_cyclic_pdo->sizePolicy().hasHeightForWidth());
        b_stop_cyclic_pdo->setSizePolicy(sizePolicy);
        b_stop_cyclic_pdo->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"font: bold 75 16pt \"Noto Sans\";\n"
"}\n"
""));

        up_horizontalLayout->addWidget(b_stop_cyclic_pdo);

        b_emergency_mode = new QPushButton(centralwidget);
        b_emergency_mode->setObjectName(QString::fromUtf8("b_emergency_mode"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(b_emergency_mode->sizePolicy().hasHeightForWidth());
        b_emergency_mode->setSizePolicy(sizePolicy1);
        b_emergency_mode->setMinimumSize(QSize(0, 0));
        b_emergency_mode->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"background-color: rgb(19, 61, 128);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 0, 0);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        up_horizontalLayout->addWidget(b_emergency_mode);


        right_verticalLayout->addLayout(up_horizontalLayout);

        send_horizontalLayout = new QHBoxLayout();
        send_horizontalLayout->setObjectName(QString::fromUtf8("send_horizontalLayout"));
        target_vertical_layout = new QVBoxLayout();
        target_vertical_layout->setObjectName(QString::fromUtf8("target_vertical_layout"));
        lb_enter_target_vals = new QLabel(centralwidget);
        lb_enter_target_vals->setObjectName(QString::fromUtf8("lb_enter_target_vals"));
        lb_enter_target_vals->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"background-color:  none;\n"
"font: bold 75 14pt \"Noto Sans\";"));

        target_vertical_layout->addWidget(lb_enter_target_vals);

        spn_target_val_1 = new QSpinBox(centralwidget);
        spn_target_val_1->setObjectName(QString::fromUtf8("spn_target_val_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spn_target_val_1->sizePolicy().hasHeightForWidth());
        spn_target_val_1->setSizePolicy(sizePolicy2);
        spn_target_val_1->setMinimum(-10000);
        spn_target_val_1->setMaximum(10000);
        spn_target_val_1->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        target_vertical_layout->addWidget(spn_target_val_1);

        spn_target_val_2 = new QSpinBox(centralwidget);
        spn_target_val_2->setObjectName(QString::fromUtf8("spn_target_val_2"));
        sizePolicy2.setHeightForWidth(spn_target_val_2->sizePolicy().hasHeightForWidth());
        spn_target_val_2->setSizePolicy(sizePolicy2);
        spn_target_val_2->setMinimum(-10000);
        spn_target_val_2->setMaximum(10000);
        spn_target_val_2->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        target_vertical_layout->addWidget(spn_target_val_2);

        spn_target_val_3 = new QSpinBox(centralwidget);
        spn_target_val_3->setObjectName(QString::fromUtf8("spn_target_val_3"));
        sizePolicy2.setHeightForWidth(spn_target_val_3->sizePolicy().hasHeightForWidth());
        spn_target_val_3->setSizePolicy(sizePolicy2);
        spn_target_val_3->setMinimum(-10000);
        spn_target_val_3->setMaximum(10000);
        spn_target_val_3->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        target_vertical_layout->addWidget(spn_target_val_3);


        send_horizontalLayout->addLayout(target_vertical_layout);

        b_send = new QPushButton(centralwidget);
        b_send->setObjectName(QString::fromUtf8("b_send"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(b_send->sizePolicy().hasHeightForWidth());
        b_send->setSizePolicy(sizePolicy3);
        b_send->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: rgb(5, 153, 44);\n"
"}\n"
"QPushButton { \n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";\n"
"}\n"
""));

        send_horizontalLayout->addWidget(b_send);


        right_verticalLayout->addLayout(send_horizontalLayout);

        ls_status_bar = new QLabel(centralwidget);
        ls_status_bar->setObjectName(QString::fromUtf8("ls_status_bar"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ls_status_bar->sizePolicy().hasHeightForWidth());
        ls_status_bar->setSizePolicy(sizePolicy4);
        ls_status_bar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        ls_status_bar->setAlignment(Qt::AlignCenter);

        right_verticalLayout->addWidget(ls_status_bar);

        status_bar_gridLayout = new QGridLayout();
        status_bar_gridLayout->setObjectName(QString::fromUtf8("status_bar_gridLayout"));
        lb_target_pos_m1 = new QLabel(centralwidget);
        lb_target_pos_m1->setObjectName(QString::fromUtf8("lb_target_pos_m1"));
        sizePolicy.setHeightForWidth(lb_target_pos_m1->sizePolicy().hasHeightForWidth());
        lb_target_pos_m1->setSizePolicy(sizePolicy);
        lb_target_pos_m1->setMinimumSize(QSize(0, 0));
        lb_target_pos_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_pos_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_pos_m1, 2, 1, 1, 1);

        label_motor1 = new QLabel(centralwidget);
        label_motor1->setObjectName(QString::fromUtf8("label_motor1"));
        label_motor1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        label_motor1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(label_motor1, 0, 1, 1, 2);

        ls_op_mode = new QLabel(centralwidget);
        ls_op_mode->setObjectName(QString::fromUtf8("ls_op_mode"));
        sizePolicy.setHeightForWidth(ls_op_mode->sizePolicy().hasHeightForWidth());
        ls_op_mode->setSizePolicy(sizePolicy);
        ls_op_mode->setMinimumSize(QSize(0, 0));
        ls_op_mode->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 5px;\n"
"padding-left: 5px;\n"
""));
        ls_op_mode->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_op_mode, 5, 0, 1, 1);

        lb_control_word_m3 = new QLabel(centralwidget);
        lb_control_word_m3->setObjectName(QString::fromUtf8("lb_control_word_m3"));
        sizePolicy.setHeightForWidth(lb_control_word_m3->sizePolicy().hasHeightForWidth());
        lb_control_word_m3->setSizePolicy(sizePolicy);
        lb_control_word_m3->setMinimumSize(QSize(0, 0));
        lb_control_word_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_control_word_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_control_word_m3, 4, 5, 1, 1);

        ls_tar_vel = new QLabel(centralwidget);
        ls_tar_vel->setObjectName(QString::fromUtf8("ls_tar_vel"));
        sizePolicy.setHeightForWidth(ls_tar_vel->sizePolicy().hasHeightForWidth());
        ls_tar_vel->setSizePolicy(sizePolicy);
        ls_tar_vel->setMinimumSize(QSize(0, 0));
        ls_tar_vel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 8px;\n"
"padding-left: 8px;\n"
""));
        ls_tar_vel->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_tar_vel, 1, 0, 1, 1);

        lb_control_word_m2 = new QLabel(centralwidget);
        lb_control_word_m2->setObjectName(QString::fromUtf8("lb_control_word_m2"));
        sizePolicy.setHeightForWidth(lb_control_word_m2->sizePolicy().hasHeightForWidth());
        lb_control_word_m2->setSizePolicy(sizePolicy);
        lb_control_word_m2->setMinimumSize(QSize(0, 0));
        lb_control_word_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_control_word_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_control_word_m2, 4, 3, 1, 1);

        lb_com_status = new QLabel(centralwidget);
        lb_com_status->setObjectName(QString::fromUtf8("lb_com_status"));
        sizePolicy.setHeightForWidth(lb_com_status->sizePolicy().hasHeightForWidth());
        lb_com_status->setSizePolicy(sizePolicy);
        lb_com_status->setMinimumSize(QSize(0, 0));
        lb_com_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_com_status->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_com_status, 7, 3, 1, 4);

        lb_actual_vel_m2 = new QLabel(centralwidget);
        lb_actual_vel_m2->setObjectName(QString::fromUtf8("lb_actual_vel_m2"));
        sizePolicy.setHeightForWidth(lb_actual_vel_m2->sizePolicy().hasHeightForWidth());
        lb_actual_vel_m2->setSizePolicy(sizePolicy);
        lb_actual_vel_m2->setMinimumSize(QSize(0, 0));
        lb_actual_vel_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_vel_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_vel_m2, 1, 4, 1, 1);

        lb_actual_vel_m3 = new QLabel(centralwidget);
        lb_actual_vel_m3->setObjectName(QString::fromUtf8("lb_actual_vel_m3"));
        sizePolicy.setHeightForWidth(lb_actual_vel_m3->sizePolicy().hasHeightForWidth());
        lb_actual_vel_m3->setSizePolicy(sizePolicy);
        lb_actual_vel_m3->setMinimumSize(QSize(0, 0));
        lb_actual_vel_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_vel_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_vel_m3, 1, 6, 1, 1);

        lb_status_word_m1 = new QLabel(centralwidget);
        lb_status_word_m1->setObjectName(QString::fromUtf8("lb_status_word_m1"));
        sizePolicy.setHeightForWidth(lb_status_word_m1->sizePolicy().hasHeightForWidth());
        lb_status_word_m1->setSizePolicy(sizePolicy);
        lb_status_word_m1->setMinimumSize(QSize(0, 0));
        lb_status_word_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_status_word_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_status_word_m1, 4, 2, 1, 1);

        ls_tar_pos = new QLabel(centralwidget);
        ls_tar_pos->setObjectName(QString::fromUtf8("ls_tar_pos"));
        sizePolicy.setHeightForWidth(ls_tar_pos->sizePolicy().hasHeightForWidth());
        ls_tar_pos->setSizePolicy(sizePolicy);
        ls_tar_pos->setMinimumSize(QSize(0, 0));
        ls_tar_pos->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 5px;\n"
"padding-left: 5px;\n"
""));
        ls_tar_pos->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_tar_pos, 2, 0, 1, 1);

        lb_actual_tor_m1 = new QLabel(centralwidget);
        lb_actual_tor_m1->setObjectName(QString::fromUtf8("lb_actual_tor_m1"));
        sizePolicy.setHeightForWidth(lb_actual_tor_m1->sizePolicy().hasHeightForWidth());
        lb_actual_tor_m1->setSizePolicy(sizePolicy);
        lb_actual_tor_m1->setMinimumSize(QSize(0, 0));
        lb_actual_tor_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_tor_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_tor_m1, 3, 2, 1, 1);

        lb_status_word_m3 = new QLabel(centralwidget);
        lb_status_word_m3->setObjectName(QString::fromUtf8("lb_status_word_m3"));
        sizePolicy.setHeightForWidth(lb_status_word_m3->sizePolicy().hasHeightForWidth());
        lb_status_word_m3->setSizePolicy(sizePolicy);
        lb_status_word_m3->setMinimumSize(QSize(0, 0));
        lb_status_word_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_status_word_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_status_word_m3, 4, 6, 1, 1);

        label_motor3 = new QLabel(centralwidget);
        label_motor3->setObjectName(QString::fromUtf8("label_motor3"));
        label_motor3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        label_motor3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(label_motor3, 0, 5, 1, 2);

        lb_target_pos_m2 = new QLabel(centralwidget);
        lb_target_pos_m2->setObjectName(QString::fromUtf8("lb_target_pos_m2"));
        sizePolicy.setHeightForWidth(lb_target_pos_m2->sizePolicy().hasHeightForWidth());
        lb_target_pos_m2->setSizePolicy(sizePolicy);
        lb_target_pos_m2->setMinimumSize(QSize(0, 0));
        lb_target_pos_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_pos_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_pos_m2, 2, 3, 1, 1);

        lb_target_tor_m3 = new QLabel(centralwidget);
        lb_target_tor_m3->setObjectName(QString::fromUtf8("lb_target_tor_m3"));
        sizePolicy.setHeightForWidth(lb_target_tor_m3->sizePolicy().hasHeightForWidth());
        lb_target_tor_m3->setSizePolicy(sizePolicy);
        lb_target_tor_m3->setMinimumSize(QSize(0, 0));
        lb_target_tor_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_tor_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_tor_m3, 3, 5, 1, 1);

        lb_op_mode_m3 = new QLabel(centralwidget);
        lb_op_mode_m3->setObjectName(QString::fromUtf8("lb_op_mode_m3"));
        sizePolicy.setHeightForWidth(lb_op_mode_m3->sizePolicy().hasHeightForWidth());
        lb_op_mode_m3->setSizePolicy(sizePolicy);
        lb_op_mode_m3->setMinimumSize(QSize(0, 0));
        lb_op_mode_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_op_mode_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_op_mode_m3, 5, 5, 1, 2);

        lb_op_mode_m2 = new QLabel(centralwidget);
        lb_op_mode_m2->setObjectName(QString::fromUtf8("lb_op_mode_m2"));
        sizePolicy.setHeightForWidth(lb_op_mode_m2->sizePolicy().hasHeightForWidth());
        lb_op_mode_m2->setSizePolicy(sizePolicy);
        lb_op_mode_m2->setMinimumSize(QSize(0, 0));
        lb_op_mode_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_op_mode_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_op_mode_m2, 5, 3, 1, 2);

        lb_op_mode_m1 = new QLabel(centralwidget);
        lb_op_mode_m1->setObjectName(QString::fromUtf8("lb_op_mode_m1"));
        sizePolicy.setHeightForWidth(lb_op_mode_m1->sizePolicy().hasHeightForWidth());
        lb_op_mode_m1->setSizePolicy(sizePolicy);
        lb_op_mode_m1->setMinimumSize(QSize(0, 0));
        lb_op_mode_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_op_mode_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_op_mode_m1, 5, 1, 1, 2);

        ls_control_word = new QLabel(centralwidget);
        ls_control_word->setObjectName(QString::fromUtf8("ls_control_word"));
        sizePolicy.setHeightForWidth(ls_control_word->sizePolicy().hasHeightForWidth());
        ls_control_word->setSizePolicy(sizePolicy);
        ls_control_word->setMinimumSize(QSize(0, 0));
        ls_control_word->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 5px;\n"
"padding-left: 5px;\n"
""));
        ls_control_word->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_control_word, 4, 0, 1, 1);

        lb_target_vel_m1 = new QLabel(centralwidget);
        lb_target_vel_m1->setObjectName(QString::fromUtf8("lb_target_vel_m1"));
        sizePolicy.setHeightForWidth(lb_target_vel_m1->sizePolicy().hasHeightForWidth());
        lb_target_vel_m1->setSizePolicy(sizePolicy);
        lb_target_vel_m1->setMinimumSize(QSize(0, 0));
        lb_target_vel_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_vel_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_vel_m1, 1, 1, 1, 1);

        ls_target_tor = new QLabel(centralwidget);
        ls_target_tor->setObjectName(QString::fromUtf8("ls_target_tor"));
        sizePolicy.setHeightForWidth(ls_target_tor->sizePolicy().hasHeightForWidth());
        ls_target_tor->setSizePolicy(sizePolicy);
        ls_target_tor->setMinimumSize(QSize(0, 0));
        ls_target_tor->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 5px;\n"
"padding-left: 5px;\n"
""));
        ls_target_tor->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_target_tor, 3, 0, 1, 1);

        lb_target_pos_m3 = new QLabel(centralwidget);
        lb_target_pos_m3->setObjectName(QString::fromUtf8("lb_target_pos_m3"));
        sizePolicy.setHeightForWidth(lb_target_pos_m3->sizePolicy().hasHeightForWidth());
        lb_target_pos_m3->setSizePolicy(sizePolicy);
        lb_target_pos_m3->setMinimumSize(QSize(0, 0));
        lb_target_pos_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_pos_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_pos_m3, 2, 5, 1, 1);

        lb_actual_pos_m3 = new QLabel(centralwidget);
        lb_actual_pos_m3->setObjectName(QString::fromUtf8("lb_actual_pos_m3"));
        sizePolicy.setHeightForWidth(lb_actual_pos_m3->sizePolicy().hasHeightForWidth());
        lb_actual_pos_m3->setSizePolicy(sizePolicy);
        lb_actual_pos_m3->setMinimumSize(QSize(0, 0));
        lb_actual_pos_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_pos_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_pos_m3, 2, 6, 1, 1);

        lb_emergency_status = new QLabel(centralwidget);
        lb_emergency_status->setObjectName(QString::fromUtf8("lb_emergency_status"));
        sizePolicy.setHeightForWidth(lb_emergency_status->sizePolicy().hasHeightForWidth());
        lb_emergency_status->setSizePolicy(sizePolicy);
        lb_emergency_status->setMinimumSize(QSize(0, 0));
        lb_emergency_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_emergency_status->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_emergency_status, 8, 3, 1, 4);

        ls_ecat_status_bar = new QLabel(centralwidget);
        ls_ecat_status_bar->setObjectName(QString::fromUtf8("ls_ecat_status_bar"));
        sizePolicy4.setHeightForWidth(ls_ecat_status_bar->sizePolicy().hasHeightForWidth());
        ls_ecat_status_bar->setSizePolicy(sizePolicy4);
        ls_ecat_status_bar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        ls_ecat_status_bar->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_ecat_status_bar, 6, 0, 1, 7);

        lb_actual_tor_m3 = new QLabel(centralwidget);
        lb_actual_tor_m3->setObjectName(QString::fromUtf8("lb_actual_tor_m3"));
        sizePolicy.setHeightForWidth(lb_actual_tor_m3->sizePolicy().hasHeightForWidth());
        lb_actual_tor_m3->setSizePolicy(sizePolicy);
        lb_actual_tor_m3->setMinimumSize(QSize(0, 0));
        lb_actual_tor_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_tor_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_tor_m3, 3, 6, 1, 1);

        lb_target_tor_m1 = new QLabel(centralwidget);
        lb_target_tor_m1->setObjectName(QString::fromUtf8("lb_target_tor_m1"));
        sizePolicy.setHeightForWidth(lb_target_tor_m1->sizePolicy().hasHeightForWidth());
        lb_target_tor_m1->setSizePolicy(sizePolicy);
        lb_target_tor_m1->setMinimumSize(QSize(0, 0));
        lb_target_tor_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_tor_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_tor_m1, 3, 1, 1, 1);

        lb_actual_tor_m2 = new QLabel(centralwidget);
        lb_actual_tor_m2->setObjectName(QString::fromUtf8("lb_actual_tor_m2"));
        sizePolicy.setHeightForWidth(lb_actual_tor_m2->sizePolicy().hasHeightForWidth());
        lb_actual_tor_m2->setSizePolicy(sizePolicy);
        lb_actual_tor_m2->setMinimumSize(QSize(0, 0));
        lb_actual_tor_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_tor_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_tor_m2, 3, 4, 1, 1);

        lb_actual_pos_m1 = new QLabel(centralwidget);
        lb_actual_pos_m1->setObjectName(QString::fromUtf8("lb_actual_pos_m1"));
        sizePolicy.setHeightForWidth(lb_actual_pos_m1->sizePolicy().hasHeightForWidth());
        lb_actual_pos_m1->setSizePolicy(sizePolicy);
        lb_actual_pos_m1->setMinimumSize(QSize(0, 0));
        lb_actual_pos_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_pos_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_pos_m1, 2, 2, 1, 1);

        lb_control_word_m1 = new QLabel(centralwidget);
        lb_control_word_m1->setObjectName(QString::fromUtf8("lb_control_word_m1"));
        sizePolicy.setHeightForWidth(lb_control_word_m1->sizePolicy().hasHeightForWidth());
        lb_control_word_m1->setSizePolicy(sizePolicy);
        lb_control_word_m1->setMinimumSize(QSize(0, 0));
        lb_control_word_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_control_word_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_control_word_m1, 4, 1, 1, 1);

        ls_emergency_status = new QLabel(centralwidget);
        ls_emergency_status->setObjectName(QString::fromUtf8("ls_emergency_status"));
        sizePolicy.setHeightForWidth(ls_emergency_status->sizePolicy().hasHeightForWidth());
        ls_emergency_status->setSizePolicy(sizePolicy);
        ls_emergency_status->setMinimumSize(QSize(0, 0));
        ls_emergency_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 5px;\n"
"padding-left: 5px;\n"
""));
        ls_emergency_status->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_emergency_status, 8, 0, 1, 3);

        lb_status_word_m2 = new QLabel(centralwidget);
        lb_status_word_m2->setObjectName(QString::fromUtf8("lb_status_word_m2"));
        sizePolicy.setHeightForWidth(lb_status_word_m2->sizePolicy().hasHeightForWidth());
        lb_status_word_m2->setSizePolicy(sizePolicy);
        lb_status_word_m2->setMinimumSize(QSize(0, 0));
        lb_status_word_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_status_word_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_status_word_m2, 4, 4, 1, 1);

        lb_target_tor_m2 = new QLabel(centralwidget);
        lb_target_tor_m2->setObjectName(QString::fromUtf8("lb_target_tor_m2"));
        sizePolicy.setHeightForWidth(lb_target_tor_m2->sizePolicy().hasHeightForWidth());
        lb_target_tor_m2->setSizePolicy(sizePolicy);
        lb_target_tor_m2->setMinimumSize(QSize(0, 0));
        lb_target_tor_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_tor_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_tor_m2, 3, 3, 1, 1);

        lb_target_vel_m3 = new QLabel(centralwidget);
        lb_target_vel_m3->setObjectName(QString::fromUtf8("lb_target_vel_m3"));
        sizePolicy.setHeightForWidth(lb_target_vel_m3->sizePolicy().hasHeightForWidth());
        lb_target_vel_m3->setSizePolicy(sizePolicy);
        lb_target_vel_m3->setMinimumSize(QSize(0, 0));
        lb_target_vel_m3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_vel_m3->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_vel_m3, 1, 5, 1, 1);

        lb_actual_pos_m2 = new QLabel(centralwidget);
        lb_actual_pos_m2->setObjectName(QString::fromUtf8("lb_actual_pos_m2"));
        sizePolicy.setHeightForWidth(lb_actual_pos_m2->sizePolicy().hasHeightForWidth());
        lb_actual_pos_m2->setSizePolicy(sizePolicy);
        lb_actual_pos_m2->setMinimumSize(QSize(0, 0));
        lb_actual_pos_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_pos_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_pos_m2, 2, 4, 1, 1);

        ls_com_status = new QLabel(centralwidget);
        ls_com_status->setObjectName(QString::fromUtf8("ls_com_status"));
        sizePolicy.setHeightForWidth(ls_com_status->sizePolicy().hasHeightForWidth());
        ls_com_status->setSizePolicy(sizePolicy);
        ls_com_status->setMinimumSize(QSize(0, 0));
        ls_com_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";\n"
"padding-left: 5px;\n"
"padding-left: 5px;\n"
""));
        ls_com_status->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(ls_com_status, 7, 0, 1, 3);

        label_motor2 = new QLabel(centralwidget);
        label_motor2->setObjectName(QString::fromUtf8("label_motor2"));
        label_motor2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        label_motor2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(label_motor2, 0, 3, 1, 2);

        label_motor_no = new QLabel(centralwidget);
        label_motor_no->setObjectName(QString::fromUtf8("label_motor_no"));
        label_motor_no->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        label_motor_no->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(label_motor_no, 0, 0, 1, 1);

        lb_actual_vel_m1 = new QLabel(centralwidget);
        lb_actual_vel_m1->setObjectName(QString::fromUtf8("lb_actual_vel_m1"));
        sizePolicy.setHeightForWidth(lb_actual_vel_m1->sizePolicy().hasHeightForWidth());
        lb_actual_vel_m1->setSizePolicy(sizePolicy);
        lb_actual_vel_m1->setMinimumSize(QSize(0, 0));
        lb_actual_vel_m1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_actual_vel_m1->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_actual_vel_m1, 1, 2, 1, 1);

        lb_target_vel_m2 = new QLabel(centralwidget);
        lb_target_vel_m2->setObjectName(QString::fromUtf8("lb_target_vel_m2"));
        sizePolicy.setHeightForWidth(lb_target_vel_m2->sizePolicy().hasHeightForWidth());
        lb_target_vel_m2->setSizePolicy(sizePolicy);
        lb_target_vel_m2->setMinimumSize(QSize(0, 0));
        lb_target_vel_m2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        lb_target_vel_m2->setAlignment(Qt::AlignCenter);

        status_bar_gridLayout->addWidget(lb_target_vel_m2, 1, 3, 1, 1);


        right_verticalLayout->addLayout(status_bar_gridLayout);

        right_verticalLayout->setStretch(0, 1);
        right_verticalLayout->setStretch(1, 1);
        right_verticalLayout->setStretch(2, 1);
        right_verticalLayout->setStretch(3, 1);
        right_verticalLayout->setStretch(4, 3);

        bottom_horizontal_layout->addLayout(right_verticalLayout);


        gridLayout->addLayout(bottom_horizontal_layout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        b_enable_cyclic_pos->setText(QApplication::translate("MainWindow", "Enable Cyclic\n"
"Position Mode", nullptr));
        b_enable_cylic_vel->setText(QApplication::translate("MainWindow", "Enable Cyclic\n"
"Velocity Mode", nullptr));
        b_enable_vel->setText(QApplication::translate("MainWindow", "Enable \n"
"Velocity Mode", nullptr));
        b_enable_pos->setText(QApplication::translate("MainWindow", "Enable \n"
" Position Mode", nullptr));
        b_init_ecat->setText(QApplication::translate("MainWindow", "Initialize \n"
" EtherCAT", nullptr));
        b_reinit_ecat->setText(QApplication::translate("MainWindow", "Restart \n"
"EtherCAT Master", nullptr));
        b_enable_drives->setText(QApplication::translate("MainWindow", "Enable \n"
"Drives", nullptr));
        b_disable_drives->setText(QApplication::translate("MainWindow", "Disable\n"
" Drives", nullptr));
        b_enter_cyclic_pdo->setText(QApplication::translate("MainWindow", "Enter Cyclic \n"
" Exchange PDO", nullptr));
        b_stop_cyclic_pdo->setText(QApplication::translate("MainWindow", "STOP Cyclic \n"
" Exchange PDO", nullptr));
        b_emergency_mode->setText(QApplication::translate("MainWindow", "Emergency Mode", nullptr));
        lb_enter_target_vals->setText(QApplication::translate("MainWindow", "Enter Target Value (Velocity, Torque,Position)", nullptr));
        b_send->setText(QApplication::translate("MainWindow", "SEND", nullptr));
        ls_status_bar->setText(QApplication::translate("MainWindow", "STATUS BAR", nullptr));
        lb_target_pos_m1->setText(QString());
        label_motor1->setText(QApplication::translate("MainWindow", "Motor 1", nullptr));
        ls_op_mode->setText(QApplication::translate("MainWindow", "Operational Mode", nullptr));
        lb_control_word_m3->setText(QString());
        ls_tar_vel->setText(QApplication::translate("MainWindow", "Target Velocity  / Actual Velocity ", nullptr));
        lb_control_word_m2->setText(QString());
        lb_com_status->setText(QString());
        lb_actual_vel_m2->setText(QString());
        lb_actual_vel_m3->setText(QString());
        lb_status_word_m1->setText(QString());
        ls_tar_pos->setText(QApplication::translate("MainWindow", "Target Position / Actual Position", nullptr));
        lb_actual_tor_m1->setText(QString());
        lb_status_word_m3->setText(QString());
        label_motor3->setText(QApplication::translate("MainWindow", "Motor 3", nullptr));
        lb_target_pos_m2->setText(QString());
        lb_target_tor_m3->setText(QString());
        lb_op_mode_m3->setText(QString());
        lb_op_mode_m2->setText(QString());
        lb_op_mode_m1->setText(QString());
        ls_control_word->setText(QApplication::translate("MainWindow", "Control Word / Status Word", nullptr));
        lb_target_vel_m1->setText(QString());
        ls_target_tor->setText(QApplication::translate("MainWindow", "Target Torque / Actual Torque", nullptr));
        lb_target_pos_m3->setText(QString());
        lb_actual_pos_m3->setText(QString());
        lb_emergency_status->setText(QString());
        ls_ecat_status_bar->setText(QApplication::translate("MainWindow", "EtherCAT State", nullptr));
        lb_actual_tor_m3->setText(QString());
        lb_target_tor_m1->setText(QString());
        lb_actual_tor_m2->setText(QString());
        lb_actual_pos_m1->setText(QString());
        lb_control_word_m1->setText(QString());
        ls_emergency_status->setText(QApplication::translate("MainWindow", "Safety State", nullptr));
        lb_status_word_m2->setText(QString());
        lb_target_tor_m2->setText(QString());
        lb_target_vel_m3->setText(QString());
        lb_actual_pos_m2->setText(QString());
        ls_com_status->setText(QApplication::translate("MainWindow", "COM Status", nullptr));
        label_motor2->setText(QApplication::translate("MainWindow", "Motor 2", nullptr));
        label_motor_no->setText(QApplication::translate("MainWindow", "MOTOR No", nullptr));
        lb_actual_vel_m1->setText(QString());
        lb_target_vel_m2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
