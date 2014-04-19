/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created: Thu 17. Apr 20:13:28 2014
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBoxAxis;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkInvX;
    QCheckBox *chkInvY;
    QCheckBox *chkInvZ;
    QCheckBox *chkInvC;
    QCheckBox *checkBoxUseMmManualCmds;
    QGroupBox *groupZRateLimit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutRateLimit;
    QCheckBox *chkLimitZRate;
    QDoubleSpinBox *doubleSpinZRateLimit;
    QSpacerItem *horizontalSpacer;
    QLabel *labelZRateLimit;
    QLabel *labelXYRate;
    QDoubleSpinBox *doubleSpinXYRate;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayoutExtras;
    QCheckBox *chkAggressivePreload;
    QCheckBox *checkBoxEnableDebugLog;
    QCheckBox *checkBoxFourAxis;
    QGroupBox *groupBox;
    QCheckBox *chkFilterFileCommands;
    QCheckBox *checkBoxReducePrecForLongLines;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *labelZJogRate;
    QLabel *labelWaitForResp;
    QSpinBox *spinResponseWaitSec;
    QDoubleSpinBox *doubleSpinZJogRate;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBoxCharSendDelay;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxGrblLineBufferSize;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->resize(502, 459);
        buttonBox = new QDialogButtonBox(Options);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 410, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBoxAxis = new QGroupBox(Options);
        groupBoxAxis->setObjectName(QString::fromUtf8("groupBoxAxis"));
        groupBoxAxis->setGeometry(QRect(20, 0, 451, 51));
        horizontalLayoutWidget = new QWidget(groupBoxAxis);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 431, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chkInvX = new QCheckBox(horizontalLayoutWidget);
        chkInvX->setObjectName(QString::fromUtf8("chkInvX"));

        horizontalLayout->addWidget(chkInvX);

        chkInvY = new QCheckBox(horizontalLayoutWidget);
        chkInvY->setObjectName(QString::fromUtf8("chkInvY"));

        horizontalLayout->addWidget(chkInvY);

        chkInvZ = new QCheckBox(horizontalLayoutWidget);
        chkInvZ->setObjectName(QString::fromUtf8("chkInvZ"));

        horizontalLayout->addWidget(chkInvZ);

        chkInvC = new QCheckBox(horizontalLayoutWidget);
        chkInvC->setObjectName(QString::fromUtf8("chkInvC"));

        horizontalLayout->addWidget(chkInvC);

        checkBoxUseMmManualCmds = new QCheckBox(Options);
        checkBoxUseMmManualCmds->setObjectName(QString::fromUtf8("checkBoxUseMmManualCmds"));
        checkBoxUseMmManualCmds->setGeometry(QRect(20, 130, 431, 17));
        groupZRateLimit = new QGroupBox(Options);
        groupZRateLimit->setObjectName(QString::fromUtf8("groupZRateLimit"));
        groupZRateLimit->setGeometry(QRect(10, 150, 471, 81));
        gridLayoutWidget = new QWidget(groupZRateLimit);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 451, 53));
        gridLayoutRateLimit = new QGridLayout(gridLayoutWidget);
        gridLayoutRateLimit->setObjectName(QString::fromUtf8("gridLayoutRateLimit"));
        gridLayoutRateLimit->setContentsMargins(0, 0, 0, 0);
        chkLimitZRate = new QCheckBox(gridLayoutWidget);
        chkLimitZRate->setObjectName(QString::fromUtf8("chkLimitZRate"));

        gridLayoutRateLimit->addWidget(chkLimitZRate, 0, 0, 1, 1);

        doubleSpinZRateLimit = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinZRateLimit->setObjectName(QString::fromUtf8("doubleSpinZRateLimit"));
        doubleSpinZRateLimit->setAccelerated(true);
        doubleSpinZRateLimit->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        doubleSpinZRateLimit->setDecimals(3);
        doubleSpinZRateLimit->setMinimum(0.1);
        doubleSpinZRateLimit->setMaximum(9999.99);
        doubleSpinZRateLimit->setSingleStep(1);
        doubleSpinZRateLimit->setValue(100);

        gridLayoutRateLimit->addWidget(doubleSpinZRateLimit, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutRateLimit->addItem(horizontalSpacer, 0, 1, 1, 1);

        labelZRateLimit = new QLabel(gridLayoutWidget);
        labelZRateLimit->setObjectName(QString::fromUtf8("labelZRateLimit"));

        gridLayoutRateLimit->addWidget(labelZRateLimit, 0, 2, 1, 1);

        labelXYRate = new QLabel(gridLayoutWidget);
        labelXYRate->setObjectName(QString::fromUtf8("labelXYRate"));

        gridLayoutRateLimit->addWidget(labelXYRate, 1, 2, 1, 1);

        doubleSpinXYRate = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinXYRate->setObjectName(QString::fromUtf8("doubleSpinXYRate"));
        doubleSpinXYRate->setDecimals(2);
        doubleSpinXYRate->setMinimum(0.1);
        doubleSpinXYRate->setMaximum(1e+06);
        doubleSpinXYRate->setValue(2000);

        gridLayoutRateLimit->addWidget(doubleSpinXYRate, 1, 3, 1, 1);

        verticalLayoutWidget_2 = new QWidget(Options);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 230, 451, 81));
        verticalLayoutExtras = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayoutExtras->setObjectName(QString::fromUtf8("verticalLayoutExtras"));
        verticalLayoutExtras->setContentsMargins(0, 0, 0, 0);
        chkAggressivePreload = new QCheckBox(verticalLayoutWidget_2);
        chkAggressivePreload->setObjectName(QString::fromUtf8("chkAggressivePreload"));

        verticalLayoutExtras->addWidget(chkAggressivePreload);

        checkBoxEnableDebugLog = new QCheckBox(verticalLayoutWidget_2);
        checkBoxEnableDebugLog->setObjectName(QString::fromUtf8("checkBoxEnableDebugLog"));

        verticalLayoutExtras->addWidget(checkBoxEnableDebugLog);

        checkBoxFourAxis = new QCheckBox(verticalLayoutWidget_2);
        checkBoxFourAxis->setObjectName(QString::fromUtf8("checkBoxFourAxis"));

        verticalLayoutExtras->addWidget(checkBoxFourAxis);

        groupBox = new QGroupBox(Options);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 320, 461, 61));
        chkFilterFileCommands = new QCheckBox(groupBox);
        chkFilterFileCommands->setObjectName(QString::fromUtf8("chkFilterFileCommands"));
        chkFilterFileCommands->setGeometry(QRect(30, 20, 431, 17));
        checkBoxReducePrecForLongLines = new QCheckBox(groupBox);
        checkBoxReducePrecForLongLines->setObjectName(QString::fromUtf8("checkBoxReducePrecForLongLines"));
        checkBoxReducePrecForLongLines->setGeometry(QRect(30, 40, 431, 17));
        gridLayoutWidget_2 = new QWidget(Options);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 60, 451, 61));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelZJogRate = new QLabel(gridLayoutWidget_2);
        labelZJogRate->setObjectName(QString::fromUtf8("labelZJogRate"));

        gridLayout->addWidget(labelZJogRate, 2, 0, 1, 1);

        labelWaitForResp = new QLabel(gridLayoutWidget_2);
        labelWaitForResp->setObjectName(QString::fromUtf8("labelWaitForResp"));

        gridLayout->addWidget(labelWaitForResp, 1, 0, 1, 1);

        spinResponseWaitSec = new QSpinBox(gridLayoutWidget_2);
        spinResponseWaitSec->setObjectName(QString::fromUtf8("spinResponseWaitSec"));
        spinResponseWaitSec->setMinimum(1);
        spinResponseWaitSec->setMaximum(1000);
        spinResponseWaitSec->setValue(60);

        gridLayout->addWidget(spinResponseWaitSec, 1, 1, 1, 1);

        doubleSpinZJogRate = new QDoubleSpinBox(gridLayoutWidget_2);
        doubleSpinZJogRate->setObjectName(QString::fromUtf8("doubleSpinZJogRate"));
        doubleSpinZJogRate->setAccelerated(true);
        doubleSpinZJogRate->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        doubleSpinZJogRate->setDecimals(3);
        doubleSpinZJogRate->setMinimum(0.1);
        doubleSpinZJogRate->setMaximum(9999.99);
        doubleSpinZJogRate->setSingleStep(1);
        doubleSpinZJogRate->setValue(260);

        gridLayout->addWidget(doubleSpinZJogRate, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);
        layoutWidget_2 = new QWidget(Options);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 420, 261, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        spinBoxCharSendDelay = new QSpinBox(layoutWidget_2);
        spinBoxCharSendDelay->setObjectName(QString::fromUtf8("spinBoxCharSendDelay"));
        spinBoxCharSendDelay->setMaximum(20);
        spinBoxCharSendDelay->setValue(10);

        horizontalLayout_4->addWidget(spinBoxCharSendDelay);

        layoutWidget = new QWidget(Options);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 390, 261, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        spinBoxGrblLineBufferSize = new QSpinBox(layoutWidget);
        spinBoxGrblLineBufferSize->setObjectName(QString::fromUtf8("spinBoxGrblLineBufferSize"));
        spinBoxGrblLineBufferSize->setValue(50);

        horizontalLayout_2->addWidget(spinBoxGrblLineBufferSize);

        groupZRateLimit->raise();
        buttonBox->raise();
        groupBoxAxis->raise();
        checkBoxUseMmManualCmds->raise();
        verticalLayoutWidget_2->raise();
        groupBox->raise();
        gridLayoutWidget_2->raise();
        layoutWidget_2->raise();
        layoutWidget->raise();

        retranslateUi(Options);
        QObject::connect(buttonBox, SIGNAL(accepted()), Options, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Options, SLOT(reject()));

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Options", 0, QApplication::UnicodeUTF8));
        groupBoxAxis->setTitle(QApplication::translate("Options", "Invert Axis", 0, QApplication::UnicodeUTF8));
        chkInvX->setText(QApplication::translate("Options", "X Axis", 0, QApplication::UnicodeUTF8));
        chkInvY->setText(QApplication::translate("Options", "Y Axis", 0, QApplication::UnicodeUTF8));
        chkInvZ->setText(QApplication::translate("Options", "Z Axis", 0, QApplication::UnicodeUTF8));
        chkInvC->setText(QApplication::translate("Options", "C Axis", 0, QApplication::UnicodeUTF8));
        checkBoxUseMmManualCmds->setText(QApplication::translate("Options", "Use millimeters when sending manual commands (v0.8c+ only)", 0, QApplication::UnicodeUTF8));
        groupZRateLimit->setTitle(QApplication::translate("Options", "Z Rate Limiting", 0, QApplication::UnicodeUTF8));
        chkLimitZRate->setText(QApplication::translate("Options", "Limit Z Rate", 0, QApplication::UnicodeUTF8));
        labelZRateLimit->setText(QApplication::translate("Options", "Z-Rate Limit (inches or mm/min)", 0, QApplication::UnicodeUTF8));
        labelXYRate->setText(QApplication::translate("Options", "XY Rate (inches or mm/min)", 0, QApplication::UnicodeUTF8));
        chkAggressivePreload->setText(QApplication::translate("Options", "Use aggressive preload strategy for Grbl", 0, QApplication::UnicodeUTF8));
        checkBoxEnableDebugLog->setText(QApplication::translate("Options", "Write debugging log to home folder (requires restart)", 0, QApplication::UnicodeUTF8));
        checkBoxFourAxis->setText(QApplication::translate("Options", "Enable 4-axis mode", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Options", "Command Filtering", 0, QApplication::UnicodeUTF8));
        chkFilterFileCommands->setText(QApplication::translate("Options", "Filter file commands before sending", 0, QApplication::UnicodeUTF8));
        checkBoxReducePrecForLongLines->setText(QApplication::translate("Options", "Selectively reduce precision for excessively long lines", 0, QApplication::UnicodeUTF8));
        labelZJogRate->setText(QApplication::translate("Options", "Z-Jog Rate (inches or mm/min)", 0, QApplication::UnicodeUTF8));
        labelWaitForResp->setText(QApplication::translate("Options", "Seconds to Wait for Response", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Options", "Character send delay ms", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Options", "Grbl Line Buffer Size", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
