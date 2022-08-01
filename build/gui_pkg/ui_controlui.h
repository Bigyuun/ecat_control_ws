/********************************************************************************
** Form generated from reading UI file 'controlui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLUI_H
#define UI_CONTROLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlUI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *top_horizontal_layout;
    QPushButton *b_init_ecat;
    QPushButton *b_reinit_ecat;
    QPushButton *b_enable_motor;
    QPushButton *b_disable_motor;
    QHBoxLayout *bottom_horizontal_layout;
    QVBoxLayout *left_sdo_button_layout;
    QPushButton *b_enable_cyclic_pos;
    QPushButton *b_enable_cylic_vel;
    QPushButton *b_enable_vel;
    QPushButton *b_enable_pos;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *b_enter_cyclic_pdo;
    QPushButton *b_emergency_mode;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *l_target_value;
    QPushButton *b_send;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *l_actual_vel;
    QLabel *ls_target_tor;
    QLabel *ls_actual_tor;
    QLabel *ls_actual_pos;
    QLabel *ls_tar_vel;
    QLabel *ls_actual_vel;
    QLabel *ls_tar_pos;
    QLabel *l_actual_pos;
    QLabel *l_actual_torque;
    QLabel *l_target_pos;
    QLabel *l_target_vel;
    QLabel *l_target_tor;
    QLabel *ls_target_tor_2;
    QLabel *l_target_tor_2;
    QLabel *ls_actual_tor_2;
    QLabel *l_actual_torque_2;

    void setupUi(QMainWindow *ControlUI)
    {
        if (ControlUI->objectName().isEmpty())
            ControlUI->setObjectName(QString::fromUtf8("ControlUI"));
        ControlUI->resize(720, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControlUI->sizePolicy().hasHeightForWidth());
        ControlUI->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ControlUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        top_horizontal_layout = new QHBoxLayout();
        top_horizontal_layout->setObjectName(QString::fromUtf8("top_horizontal_layout"));
        b_init_ecat = new QPushButton(centralwidget);
        b_init_ecat->setObjectName(QString::fromUtf8("b_init_ecat"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(b_init_ecat->sizePolicy().hasHeightForWidth());
        b_init_ecat->setSizePolicy(sizePolicy1);
        b_init_ecat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        top_horizontal_layout->addWidget(b_init_ecat);

        b_reinit_ecat = new QPushButton(centralwidget);
        b_reinit_ecat->setObjectName(QString::fromUtf8("b_reinit_ecat"));
        sizePolicy1.setHeightForWidth(b_reinit_ecat->sizePolicy().hasHeightForWidth());
        b_reinit_ecat->setSizePolicy(sizePolicy1);
        b_reinit_ecat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));

        top_horizontal_layout->addWidget(b_reinit_ecat);

        b_enable_motor = new QPushButton(centralwidget);
        b_enable_motor->setObjectName(QString::fromUtf8("b_enable_motor"));
        sizePolicy1.setHeightForWidth(b_enable_motor->sizePolicy().hasHeightForWidth());
        b_enable_motor->setSizePolicy(sizePolicy1);
        b_enable_motor->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        top_horizontal_layout->addWidget(b_enable_motor);

        b_disable_motor = new QPushButton(centralwidget);
        b_disable_motor->setObjectName(QString::fromUtf8("b_disable_motor"));
        sizePolicy1.setHeightForWidth(b_disable_motor->sizePolicy().hasHeightForWidth());
        b_disable_motor->setSizePolicy(sizePolicy1);
        b_disable_motor->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        top_horizontal_layout->addWidget(b_disable_motor);


        verticalLayout_2->addLayout(top_horizontal_layout);

        bottom_horizontal_layout = new QHBoxLayout();
        bottom_horizontal_layout->setObjectName(QString::fromUtf8("bottom_horizontal_layout"));
        left_sdo_button_layout = new QVBoxLayout();
        left_sdo_button_layout->setObjectName(QString::fromUtf8("left_sdo_button_layout"));
        b_enable_cyclic_pos = new QPushButton(centralwidget);
        b_enable_cyclic_pos->setObjectName(QString::fromUtf8("b_enable_cyclic_pos"));
        sizePolicy1.setHeightForWidth(b_enable_cyclic_pos->sizePolicy().hasHeightForWidth());
        b_enable_cyclic_pos->setSizePolicy(sizePolicy1);
        b_enable_cyclic_pos->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        left_sdo_button_layout->addWidget(b_enable_cyclic_pos);

        b_enable_cylic_vel = new QPushButton(centralwidget);
        b_enable_cylic_vel->setObjectName(QString::fromUtf8("b_enable_cylic_vel"));
        sizePolicy1.setHeightForWidth(b_enable_cylic_vel->sizePolicy().hasHeightForWidth());
        b_enable_cylic_vel->setSizePolicy(sizePolicy1);
        b_enable_cylic_vel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        left_sdo_button_layout->addWidget(b_enable_cylic_vel);

        b_enable_vel = new QPushButton(centralwidget);
        b_enable_vel->setObjectName(QString::fromUtf8("b_enable_vel"));
        sizePolicy1.setHeightForWidth(b_enable_vel->sizePolicy().hasHeightForWidth());
        b_enable_vel->setSizePolicy(sizePolicy1);
        b_enable_vel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        left_sdo_button_layout->addWidget(b_enable_vel);

        b_enable_pos = new QPushButton(centralwidget);
        b_enable_pos->setObjectName(QString::fromUtf8("b_enable_pos"));
        sizePolicy1.setHeightForWidth(b_enable_pos->sizePolicy().hasHeightForWidth());
        b_enable_pos->setSizePolicy(sizePolicy1);
        b_enable_pos->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        left_sdo_button_layout->addWidget(b_enable_pos);


        bottom_horizontal_layout->addLayout(left_sdo_button_layout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        b_enter_cyclic_pdo = new QPushButton(centralwidget);
        b_enter_cyclic_pdo->setObjectName(QString::fromUtf8("b_enter_cyclic_pdo"));
        sizePolicy1.setHeightForWidth(b_enter_cyclic_pdo->sizePolicy().hasHeightForWidth());
        b_enter_cyclic_pdo->setSizePolicy(sizePolicy1);
        b_enter_cyclic_pdo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));

        horizontalLayout_6->addWidget(b_enter_cyclic_pdo);

        b_emergency_mode = new QPushButton(centralwidget);
        b_emergency_mode->setObjectName(QString::fromUtf8("b_emergency_mode"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(b_emergency_mode->sizePolicy().hasHeightForWidth());
        b_emergency_mode->setSizePolicy(sizePolicy2);
        b_emergency_mode->setMinimumSize(QSize(0, 0));
        b_emergency_mode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0,0);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        horizontalLayout_6->addWidget(b_emergency_mode);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_target_value = new QLineEdit(centralwidget);
        l_target_value->setObjectName(QString::fromUtf8("l_target_value"));
        l_target_value->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);\n"
"background-color: rgb(255, 255, 255);\n"
"font: bold 75 12pt \"Noto Sans\";"));
        l_target_value->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(l_target_value);

        b_send = new QPushButton(centralwidget);
        b_send->setObjectName(QString::fromUtf8("b_send"));
        sizePolicy1.setHeightForWidth(b_send->sizePolicy().hasHeightForWidth());
        b_send->setSizePolicy(sizePolicy1);
        b_send->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(252, 119, 3);\n"
"font: bold 75 15pt \"Noto Sans\";"));

        horizontalLayout_4->addWidget(b_send);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color: rgb(19, 61, 128);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 16pt \"Noto Sans\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_actual_vel = new QLabel(centralwidget);
        l_actual_vel->setObjectName(QString::fromUtf8("l_actual_vel"));
        sizePolicy1.setHeightForWidth(l_actual_vel->sizePolicy().hasHeightForWidth());
        l_actual_vel->setSizePolicy(sizePolicy1);
        l_actual_vel->setMinimumSize(QSize(0, 0));
        l_actual_vel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_actual_vel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_actual_vel, 0, 3, 1, 1);

        ls_target_tor = new QLabel(centralwidget);
        ls_target_tor->setObjectName(QString::fromUtf8("ls_target_tor"));
        sizePolicy1.setHeightForWidth(ls_target_tor->sizePolicy().hasHeightForWidth());
        ls_target_tor->setSizePolicy(sizePolicy1);
        ls_target_tor->setMinimumSize(QSize(0, 0));
        ls_target_tor->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_target_tor->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_target_tor, 2, 0, 1, 1);

        ls_actual_tor = new QLabel(centralwidget);
        ls_actual_tor->setObjectName(QString::fromUtf8("ls_actual_tor"));
        sizePolicy1.setHeightForWidth(ls_actual_tor->sizePolicy().hasHeightForWidth());
        ls_actual_tor->setSizePolicy(sizePolicy1);
        ls_actual_tor->setMinimumSize(QSize(0, 0));
        ls_actual_tor->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_actual_tor->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_actual_tor, 2, 2, 1, 1);

        ls_actual_pos = new QLabel(centralwidget);
        ls_actual_pos->setObjectName(QString::fromUtf8("ls_actual_pos"));
        sizePolicy1.setHeightForWidth(ls_actual_pos->sizePolicy().hasHeightForWidth());
        ls_actual_pos->setSizePolicy(sizePolicy1);
        ls_actual_pos->setMinimumSize(QSize(0, 0));
        ls_actual_pos->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_actual_pos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_actual_pos, 1, 2, 1, 1);

        ls_tar_vel = new QLabel(centralwidget);
        ls_tar_vel->setObjectName(QString::fromUtf8("ls_tar_vel"));
        sizePolicy1.setHeightForWidth(ls_tar_vel->sizePolicy().hasHeightForWidth());
        ls_tar_vel->setSizePolicy(sizePolicy1);
        ls_tar_vel->setMinimumSize(QSize(0, 0));
        ls_tar_vel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_tar_vel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_tar_vel, 0, 0, 1, 1);

        ls_actual_vel = new QLabel(centralwidget);
        ls_actual_vel->setObjectName(QString::fromUtf8("ls_actual_vel"));
        sizePolicy1.setHeightForWidth(ls_actual_vel->sizePolicy().hasHeightForWidth());
        ls_actual_vel->setSizePolicy(sizePolicy1);
        ls_actual_vel->setMinimumSize(QSize(0, 0));
        ls_actual_vel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_actual_vel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_actual_vel, 0, 2, 1, 1);

        ls_tar_pos = new QLabel(centralwidget);
        ls_tar_pos->setObjectName(QString::fromUtf8("ls_tar_pos"));
        sizePolicy1.setHeightForWidth(ls_tar_pos->sizePolicy().hasHeightForWidth());
        ls_tar_pos->setSizePolicy(sizePolicy1);
        ls_tar_pos->setMinimumSize(QSize(0, 0));
        ls_tar_pos->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_tar_pos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_tar_pos, 1, 0, 1, 1);

        l_actual_pos = new QLabel(centralwidget);
        l_actual_pos->setObjectName(QString::fromUtf8("l_actual_pos"));
        sizePolicy1.setHeightForWidth(l_actual_pos->sizePolicy().hasHeightForWidth());
        l_actual_pos->setSizePolicy(sizePolicy1);
        l_actual_pos->setMinimumSize(QSize(0, 0));
        l_actual_pos->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_actual_pos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_actual_pos, 1, 3, 1, 1);

        l_actual_torque = new QLabel(centralwidget);
        l_actual_torque->setObjectName(QString::fromUtf8("l_actual_torque"));
        sizePolicy1.setHeightForWidth(l_actual_torque->sizePolicy().hasHeightForWidth());
        l_actual_torque->setSizePolicy(sizePolicy1);
        l_actual_torque->setMinimumSize(QSize(0, 0));
        l_actual_torque->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_actual_torque->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_actual_torque, 2, 3, 1, 1);

        l_target_pos = new QLabel(centralwidget);
        l_target_pos->setObjectName(QString::fromUtf8("l_target_pos"));
        sizePolicy1.setHeightForWidth(l_target_pos->sizePolicy().hasHeightForWidth());
        l_target_pos->setSizePolicy(sizePolicy1);
        l_target_pos->setMinimumSize(QSize(0, 0));
        l_target_pos->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_target_pos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_target_pos, 1, 1, 1, 1);

        l_target_vel = new QLabel(centralwidget);
        l_target_vel->setObjectName(QString::fromUtf8("l_target_vel"));
        sizePolicy1.setHeightForWidth(l_target_vel->sizePolicy().hasHeightForWidth());
        l_target_vel->setSizePolicy(sizePolicy1);
        l_target_vel->setMinimumSize(QSize(0, 0));
        l_target_vel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_target_vel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_target_vel, 0, 1, 1, 1);

        l_target_tor = new QLabel(centralwidget);
        l_target_tor->setObjectName(QString::fromUtf8("l_target_tor"));
        sizePolicy1.setHeightForWidth(l_target_tor->sizePolicy().hasHeightForWidth());
        l_target_tor->setSizePolicy(sizePolicy1);
        l_target_tor->setMinimumSize(QSize(0, 0));
        l_target_tor->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_target_tor->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_target_tor, 2, 1, 1, 1);

        ls_target_tor_2 = new QLabel(centralwidget);
        ls_target_tor_2->setObjectName(QString::fromUtf8("ls_target_tor_2"));
        sizePolicy1.setHeightForWidth(ls_target_tor_2->sizePolicy().hasHeightForWidth());
        ls_target_tor_2->setSizePolicy(sizePolicy1);
        ls_target_tor_2->setMinimumSize(QSize(0, 0));
        ls_target_tor_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_target_tor_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_target_tor_2, 3, 0, 1, 1);

        l_target_tor_2 = new QLabel(centralwidget);
        l_target_tor_2->setObjectName(QString::fromUtf8("l_target_tor_2"));
        sizePolicy1.setHeightForWidth(l_target_tor_2->sizePolicy().hasHeightForWidth());
        l_target_tor_2->setSizePolicy(sizePolicy1);
        l_target_tor_2->setMinimumSize(QSize(0, 0));
        l_target_tor_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_target_tor_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_target_tor_2, 3, 1, 1, 1);

        ls_actual_tor_2 = new QLabel(centralwidget);
        ls_actual_tor_2->setObjectName(QString::fromUtf8("ls_actual_tor_2"));
        sizePolicy1.setHeightForWidth(ls_actual_tor_2->sizePolicy().hasHeightForWidth());
        ls_actual_tor_2->setSizePolicy(sizePolicy1);
        ls_actual_tor_2->setMinimumSize(QSize(0, 0));
        ls_actual_tor_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        ls_actual_tor_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ls_actual_tor_2, 3, 2, 1, 1);

        l_actual_torque_2 = new QLabel(centralwidget);
        l_actual_torque_2->setObjectName(QString::fromUtf8("l_actual_torque_2"));
        sizePolicy1.setHeightForWidth(l_actual_torque_2->sizePolicy().hasHeightForWidth());
        l_actual_torque_2->setSizePolicy(sizePolicy1);
        l_actual_torque_2->setMinimumSize(QSize(0, 0));
        l_actual_torque_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(238, 238, 236);\n"
"selection-color: rgb(238, 238, 236);\n"
"background-color:  rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"font: bold 75 14pt \"Noto Sans\";"));
        l_actual_torque_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_actual_torque_2, 3, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 3);

        bottom_horizontal_layout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(bottom_horizontal_layout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 6);
        ControlUI->setCentralWidget(centralwidget);

        retranslateUi(ControlUI);

        QMetaObject::connectSlotsByName(ControlUI);
    } // setupUi

    void retranslateUi(QMainWindow *ControlUI)
    {
        ControlUI->setWindowTitle(QApplication::translate("ControlUI", "MainWindow", nullptr));
        b_init_ecat->setText(QApplication::translate("ControlUI", "Initialize \n"
" EtherCAT", nullptr));
        b_reinit_ecat->setText(QApplication::translate("ControlUI", "Reinitialize \n"
"EtherCAT", nullptr));
        b_enable_motor->setText(QApplication::translate("ControlUI", "Enable \n"
"Motors", nullptr));
        b_disable_motor->setText(QApplication::translate("ControlUI", "Disable\n"
" Motors", nullptr));
        b_enable_cyclic_pos->setText(QApplication::translate("ControlUI", "Enable Cyclic\n"
"Position Mode", nullptr));
        b_enable_cylic_vel->setText(QApplication::translate("ControlUI", "Enable Cyclic\n"
"Velocity Mode", nullptr));
        b_enable_vel->setText(QApplication::translate("ControlUI", "Enable \n"
"Velocity Mode", nullptr));
        b_enable_pos->setText(QApplication::translate("ControlUI", "Enable \n"
" Position Mode", nullptr));
        b_enter_cyclic_pdo->setText(QApplication::translate("ControlUI", "Enter Cyclic \n"
" Exchange PDO", nullptr));
        b_emergency_mode->setText(QApplication::translate("ControlUI", "Emergency Mode", nullptr));
        l_target_value->setText(QApplication::translate("ControlUI", "Enter target value (Velocity, Torque, Position)", nullptr));
        b_send->setText(QApplication::translate("ControlUI", "SEND", nullptr));
        label->setText(QApplication::translate("ControlUI", "STATUS BAR", nullptr));
        l_actual_vel->setText(QString());
        ls_target_tor->setText(QApplication::translate("ControlUI", "Target Torque", nullptr));
        ls_actual_tor->setText(QApplication::translate("ControlUI", "Actual Torque", nullptr));
        ls_actual_pos->setText(QApplication::translate("ControlUI", "Actual Position", nullptr));
        ls_tar_vel->setText(QApplication::translate("ControlUI", "Target Velocity ", nullptr));
        ls_actual_vel->setText(QApplication::translate("ControlUI", "Actual Velocity ", nullptr));
        ls_tar_pos->setText(QApplication::translate("ControlUI", "Target Position", nullptr));
        l_actual_pos->setText(QString());
        l_actual_torque->setText(QString());
        l_target_pos->setText(QString());
        l_target_vel->setText(QString());
        l_target_tor->setText(QString());
        ls_target_tor_2->setText(QApplication::translate("ControlUI", "COM Status", nullptr));
        l_target_tor_2->setText(QString());
        ls_actual_tor_2->setText(QApplication::translate("ControlUI", "Emergency Status", nullptr));
        l_actual_torque_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ControlUI: public Ui_ControlUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLUI_H
