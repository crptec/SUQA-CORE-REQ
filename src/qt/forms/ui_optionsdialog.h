/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QVBoxLayout *verticalLayout_Main;
    QCheckBox *bitcoinAtStartup;
    QHBoxLayout *horizontalLayout_2_Main;
    QLabel *databaseCacheLabel;
    QSpinBox *databaseCache;
    QLabel *databaseCacheUnitLabel;
    QSpacerItem *horizontalSpacer_2_Main;
    QHBoxLayout *horizontalLayout_3_Main;
    QLabel *threadsScriptVerifLabel;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *horizontalSpacer_3_Main;
    QSpacerItem *verticalSpacer_Main;
    QWidget *tabWallet;
    QVBoxLayout *verticalLayout_Wallet;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *coinControlFeatures;
    QCheckBox *spendZeroConfChange;
    QSpacerItem *verticalSpacer_Wallet;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *allowIncoming;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_1_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QSpacerItem *horizontalSpacer_1_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_Window;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QSpacerItem *verticalSpacer_Window;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QHBoxLayout *horizontalLayout_3_Display;
    QLabel *thirdPartyTxUrlsLabel;
    QLineEdit *thirdPartyTxUrls;
    QSpacerItem *verticalSpacer_Display;
    QFrame *frame;
    QVBoxLayout *verticalLayout_Bottom;
    QHBoxLayout *horizontalLayout_Bottom;
    QLabel *overriddenByCommandLineInfoLabel;
    QSpacerItem *horizontalSpacer_Bottom;
    QLabel *overriddenByCommandLineLabel;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QStringLiteral("OptionsDialog"));
        OptionsDialog->resize(573, 400);
        OptionsDialog->setStyleSheet(QLatin1String("\n"
"QStatusBar {\n"
"background-color:#ffffff;\n"
"}\n"
"\n"
".QFrame {\n"
"background-color:transparent;\n"
"border:0px solid #fff;\n"
"}\n"
"\n"
"QMenuBar {\n"
"background-color:#fff;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"background-color:#fff;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"background-color:#f8f6f6;\n"
"}\n"
"\n"
"QMenu {\n"
"background-color:#f8f6f6;\n"
"}\n"
"\n"
"QMenu::item {\n"
"color:#333;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"background-color:#f2f0f0;\n"
"color:#333;\n"
"}\n"
"\n"
"QToolBar {\n"
"background-color:#fff;\n"
"border:0px solid #000;\n"
"padding:0;\n"
"margin:0;\n"
"}\n"
"\n"
"QToolBar > QToolButton {\n"
"background-color:#fff;\n"
"border:0px solid #333;\n"
"min-height:2.5em;\n"
"min-width: 8em;\n"
"padding: 0em 1em;\n"
"/*font-weight:bold;*/\n"
"color:#333;\n"
"}\n"
"\n"
"QToolBar > QToolButton:checked {\n"
"background-color:#183862;\n"
"color:#fff;\n"
"font-weight:bold;\n"
"}\n"
"\n"
"QMessageBox {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"/**************************"
                        "*****************************/\n"
"\n"
"QLabel { /* Base Text Size & Color */\n"
"font-size:12px;\n"
"color:#333333;\n"
"}\n"
"\n"
".QCheckBox { /* Checkbox Labels */\n"
"color:#333333;\n"
"background-color:transparent;\n"
"}\n"
"\n"
".QCheckBox:hover {\n"
"background-color:transparent;\n"
"}\n"
"\n"
".QValidatedLineEdit, .QLineEdit { /* Text Entry Fields */\n"
"border: 1px solid #82C3E6;\n"
"font-size:11px;\n"
"min-height:25px;\n"
"outline:0;\n"
"padding:3px;\n"
"background-color:#fcfcfc;\n"
"}\n"
"\n"
".QLineEdit:!focus {\n"
"font-size:12px;\n"
"}\n"
"\n"
".QValidatedLineEdit:disabled, .QLineEdit:disabled {\n"
"background-color:#f2f2f2;\n"
"}\n"
"\n"
"/*******************************************************/\n"
"\n"
"QPushButton { /* Global Button Style */\n"
"\n"
"background-color:#183862;\n"
"\n"
"border:1;\n"
"\n"
"border-radius:3px;\n"
"\n"
"color:#ffffff;\n"
"\n"
"font-size:12px;\n"
"\n"
"font-weight:bold;\n"
"\n"
"height: 26px;\n"
"\n"
"padding-left:25px;\n"
"\n"
"padding-right:25px;\n"
"\n"
"padding-t"
                        "op:5px;\n"
"\n"
"padding-bottom:5px;\n"
"\n"
"margin-right: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover { /* Global Button Style hover */\n"
"\n"
"background-color:#f57026;\n"
"\n"
"border:1;\n"
"\n"
"border-radius:3px;\n"
"\n"
"color:#ffffff;\n"
"\n"
"font-size:12px;\n"
"\n"
"font-weight:bold;\n"
"\n"
"height: 26px;\n"
"\n"
"padding-left:25px;\n"
"\n"
"padding-right:25px;\n"
"\n"
"padding-top:5px;\n"
"\n"
"padding-bottom:5px;\n"
"\n"
"margin-right: 10px;\n"
"\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"border:none;\n"
"outline:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border:1px solid #333;\n"
"}\n"
"\n"
"QComboBox { /* Dropdown Menus */\n"
"border:1px solid #82C3E6;\n"
"padding: 3px 5px 3px 5px;\n"
"background:#fcfcfc;\n"
"min-height:25px;\n"
"color:#818181;\n"
"}\n"
"\n"
"QComboBox:checked {\n"
"background:#f2f2f2;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"background: #183862;\n"
"color:#616161;\n"
"border:0px solid transparent;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"width:25px;\n"
"border:0px;\n"
""
                        "}\n"
"\n"
"QComboBox::down-arrow {\n"
"border-image: url(':/images/light/drkblue_downArrow') 0 0 0 0 stretch stretch;\n"
"}\n"
"\n"
"QComboBox QListView {\n"
"background:#fff;\n"
"border:1px solid #333;\n"
"padding-right:1px;\n"
"padding-left:1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item { margin:4px; }\n"
"\n"
"QComboBox::item {\n"
"color:#818181;\n"
"}\n"
"\n"
"QComboBox::item:alternate {\n"
"background:#fff;\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"border:0px solid transparent;\n"
"background:#f2f2f2;\n"
"}\n"
"\n"
"QComboBox::indicator {\n"
"background-color:transparent;\n"
"selection-background-color:transparent;\n"
"color:transparent;\n"
"selection-color:transparent;\n"
"}\n"
"\n"
"QAbstractSpinBox {\n"
"border:1px solid #82C3E6;\n"
"padding: 3px 5px 3px 5px;\n"
"background:#fcfcfc;\n"
"min-height:25px;\n"
"color:#818181;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-button {\n"
"subcontrol-origin: border;\n"
"subcontrol-position: top right;\n"
"width:21px;\n"
"background:#fcfcfc;\n"
"border-left:0px;"
                        "\n"
"border-right:1px solid #82C3E6;\n"
"border-top:1px solid #82C3E6;\n"
"border-bottom:0px;\n"
"padding-right:1px;\n"
"padding-left:5px;\n"
"padding-top:2px;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow {\n"
"image:url(':/images/light/drkblue_upArrow_small');\n"
"}\n"
"\n"
"QAbstractSpinBox::down-button {\n"
"subcontrol-origin: border;\n"
"subcontrol-position: bottom right;\n"
"width:21px;\n"
"background:#fcfcfc;\n"
"border-top:0px;\n"
"border-left:0px;\n"
"border-right:1px solid #82C3E6;\n"
"border-bottom:1px solid #82C3E6;\n"
"padding-right:1px;\n"
"padding-left:5px;\n"
"padding-bottom:2px;\n"
"}\n"
"\n"
"QAbstractSpinBox::down-arrow {\n"
"image:url(':/images/light/drkblue_downArrow_small');\n"
"}\n"
"\n"
"QCheckBox {\n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 16px;\n"
"height: 16px;\n"
"}\n"
"\n"
"\n"
"\n"
"/*******************************************************/\n"
"\n"
"QHeaderView { /* Table Header */\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QHeaderView::section { /* Table"
                        " Header Sections */\n"
"qproperty-alignment:center;\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 0.25, stop: 0 #1070B0, stop: 1 #183862);\n"
"color:#fff;\n"
"min-height:25px;\n"
"font-weight:bold;\n"
"font-size:14px;\n"
"outline:0;\n"
"border:0px solid #fff;\n"
"border-right:1px solid #fff;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"padding-top:2px;\n"
"padding-bottom:2px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"border-right: 0px solid #d7d7d7;\n"
"}\n"
"\n"
".QScrollArea {\n"
"background:transparent;\n"
"border:0px;\n"
"}\n"
"\n"
".QTableView { /* Table - has to be selected as a class otherwise it throws off QCalendarWidget */\n"
"background:transparent;\n"
"border:0px solid #fff;\n"
"}\n"
"\n"
"QTableView::item { /* Table Item */\n"
"background-color:#fcfcfc;\n"
"font-size:12px;\n"
"}\n"
"\n"
"QTableView::item:selected { /* Table Item Selected */\n"
"background-color:#f0f0f0;\n"
"color:#333;\n"
"}\n"
"\n"
"QScrollBar { /* Scroll Bar */\n"
"\n"
"}\n"
"\n"
"QScrollBar:vertical { /"
                        "* Vertical Scroll Bar Attributes */\n"
"border:0;\n"
"background:#ffffff;\n"
"width:18px;\n"
"margin: 18px 0px 18px 0px;\n"
"}\n"
"\n"
"QScrollBar:horizontal { /* Horizontal Scroll Bar Attributes */\n"
"border:0;\n"
"background:#ffffff;\n"
"height:18px;\n"
"margin: 0px 18px 0px 18px;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical { /* Scroll Bar Slider - vertical */\n"
"background:#e0e0e0;\n"
"min-height:10px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal { /* Scroll Bar Slider - horizontal */\n"
"background:#e0e0e0;\n"
"min-width:10px;\n"
"}\n"
"\n"
"QScrollBar::add-page, QScrollBar::sub-page { /* Scroll Bar Background */\n"
"background:#F8F6F6;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical, QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal { /* Define Arrow Button Dimensions */\n"
"background-color:#F8F6F6;\n"
"border: 1px solid #f2f0f0;\n"
"width:16px;\n"
"height:16px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed, QScrollBar::sub-line:vertical:pressed, QS"
                        "crollBar::add-line:horizontal:pressed, QScrollBar::sub-line:horizontal:pressed {\n"
"background-color:#e0e0e0;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical { /* Vertical - top button position */\n"
"subcontrol-position:top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical { /* Vertical - bottom button position */\n"
"subcontrol-position:bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal { /* Vertical - left button position */\n"
"subcontrol-position:left;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal { /* Vertical - right button position */\n"
"subcontrol-position:right;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar:up-arrow, QScrollBar:down-arrow, QScrollBar:left-arrow, QScrollBar:right-arrow { /* Arrows Icon */\n"
"width:10px;\n"
"height:10px;\n"
"}\n"
"\n"
"QScrollBar:up-arrow {\n"
"background-image: url(':/images/light/drkblue_upArrow_small');\n"
"}\n"
"\n"
"QScrollBar:down-arrow {\n"
"background-image:"
                        " url(':/images/light/drkblue_downArrow_small');\n"
"}\n"
"\n"
"QScrollBar:left-arrow {\n"
"background-image: url(':/images/light/drkblue_leftArrow_small');\n"
"}\n"
"\n"
"QScrollBar:right-arrow {\n"
"background-image: url(':/images/light/drkblue_rightArrow_small');\n"
"}\n"
"\n"
"\n"
"/*******************************************************/\n"
"\n"
"/* DIALOG BOXES */\n"
"\n"
"QDialog .QTabWidget {\n"
"border-bottom:1px solid #333;\n"
"}\n"
"\n"
"QDialog .QTabWidget::pane {\n"
"border: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab {\n"
"background-color:#f2f0f0;\n"
"color:#333;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"padding-top:5px;\n"
"padding-bottom:5px;\n"
"border-top: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab:first {\n"
"border-left: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab:last {\n"
"border-right: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab:selected, QDialog .QTabWidget QTabBar::tab:hover {\n"
"back"
                        "ground-color:#ffffff;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget {\n"
"background-color:#fff;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QAbstractSpinBox {\n"
"min-height:15px;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QAbstractSpinBox::down-button {\n"
"width:15px;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QAbstractSpinBox::up-button {\n"
"width:15px;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QComboBox {\n"
"min-height:15px;\n"
"}\n"
"\n"
"QDialog QWidget { /* Remove Annoying Focus Rectangle */\n"
"outline: 0;\n"
"}\n"
"\n"
"/*******************************************************/\n"
"/* FILE MENU */\n"
"\n"
"/* Dialog: Open URI */\n"
"QDialog#OpenURIDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QLabel#label { /* URI Label */\n"
"font-weight:bold;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton { /* ... Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 25"
                        "0, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"/* Dialog: Sign / Verify Message */\n"
"QDialog#SignVerifyMessageDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#addressBookButton_SM { /* Address Book Button */\n"
"background-color:transparent;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPlainTextEdit { /* Message Signing Text */\n"
"border:1px solid #82C3E6;\n"
"background-color:#fff;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageD"
                        "ialog QPushButton#pasteButton_SM { /* Paste Button */\n"
"/* qproperty-icon: url(\":/icons/light/drkblue_editpaste\"); */\n"
"background-color:transparent;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QLineEdit:!focus { /* Font Hack */\n"
"font-size:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#copySignatureButton_SM { /* Copy Button */\n"
"/* qproperty-icon: url(\":/icons/light/drkblue_editcopy\"); */\n"
"background-color:transparent;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM:hover {\n"
"background-color:qlineargradient(x1: 0, y1: "
                        "0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#addressBookButton_VM { /* Verify Message - Address Book Button */\n"
"background-color:transparent;\n"
"border:0;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_VM { /* Verify Message - Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_VM:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, sto"
                        "p: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_VM:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"/* Dialog: Send and Receive */\n"
"QWidget#AddressBookPage {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#newAddress { /* New Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#newAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#newAddress:pressed {\n"
"border:1px"
                        " solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress { /* Copy Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress { /* Delete Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px sol"
                        "id #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QTableView { /* Address Listing */\n"
"font-size:12px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QHeaderView::section { /* Min width for Windows fix */\n"
"min-width:260px;\n"
"}\n"
"\n"
"/* SETTINGS MENU */\n"
"\n"
"/* Encrypt Wallet and Change Passphrase Dialog */\n"
"QDialog#AskPassphraseDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#AskPassphraseDialog QLabel#passLabel1, QDialog#AskPassphraseDialog QLabel#passLabel2, QDialog#AskPassphraseDialog QLabel#passLabel3 {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
""
                        "min-width:170px;\n"
"min-height:33px; /* base width of 25px for QLineEdit, plus padding and border */\n"
"}\n"
"\n"
"/* Options Dialog */\n"
"QDialog#OptionsDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QValueComboBox, QDialog#OptionsDialog QSpinBox {\n"
"margin-top:5px;\n"
"margin-bottom:5px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QValidatedLineEdit, QDialog#OptionsDialog QValidatedLineEdit:disabled, QDialog#OptionsDialog QLineEdit, QDialog#OptionsDialog QLineEdit:disabled {\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"min-height:20px;\n"
"margin-top:0px;\n"
"margin-bottom:0px;\n"
"padding-top:1px;\n"
"padding-bottom:1px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog > QLabel {\n"
"qproperty-alignment: 'AlignVCenter';\n"
"min-height:20px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QWidget#tabDisplay QValueComboBox {\n"
"margin-top:0px;\n"
"margin-bottom:0px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QLabel#label_3 { /* Translations Missing? Label */\n"
"qproperty-alignment: 'AlignVCenter |"
                        " AlignCenter';\n"
"color:#818181;\n"
"padding-bottom:8px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QCheckBox {\n"
"min-height:20px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QCheckBox#displayAddresses {\n"
"min-height:33px;\n"
"\n"
"}\n"
"\n"
"/* TOOLS MENU */\n"
"\n"
"QDialog#RPCConsole { /* RPC Console Dialog Box */\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#RPCConsole QWidget#tab_info QLabel#label_11, QDialog#RPCConsole QWidget#tab_info QLabel#label_10 { /* Margin between Network and Block Chain headers */\n"
"qproperty-alignment: 'AlignBottom';\n"
"min-height:25px;\n"
"min-width:180px;\n"
"}\n"
"\n"
"QDialog#RPCConsole QWidget#tab_peers  QLabel#peerHeading { /* Peers Info Header */\n"
"color:#183862;\n"
"}\n"
"\n"
"QDialog#RPCConsole QPushButton#openDebugLogfileButton {\n"
"max-width:60px;\n"
"}\n"
"\n"
"QDialog#RPCConsole QTextEdit#messagesWidget { /* Console Messages Window */\n"
"border:0;\n"
"}\n"
"\n"
"QDialog#RPCConsole QLineEdit#lineEdit { /* Console Input */\n"
"margin-right:5px;\n"
"}\n"
"\n"
"QD"
                        "ialog#RPCConsole QPushButton#clearButton { /* Console Clear Button */\n"
"background-color:transparent;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#RPCConsole .QGroupBox #line { /* Network In Line */\n"
"background-color:#00ff00;\n"
"}\n"
"\n"
"QDialog#RPCConsole .QGroupBox #line_2 { /* Network Out Line */\n"
"background:#ff0000;\n"
"}\n"
"\n"
"/* HELP MENU */\n"
"\n"
"/* Command Line Options Dialog */\n"
"QDialog#HelpMessageDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#HelpMessageDialog QScrollArea * {\n"
"background-color:#ffffff;\n"
"}\n"
"\n"
"QDialog#HelpMessageDialog QScrollBar:vertical, QDialog#HelpMessageDialog QScrollBar:horizontal {\n"
"border:0;\n"
"}\n"
"\n"
"/* About Proton Dialog */\n"
"QDialog#AboutDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#AboutDialog QLabel#label, QDialog#AboutDialog QLabel#copyrightLabel, QDialog#AboutDialog QLabel#label_2 { /* About Proton Contents */\n"
"margin-left:10px;\n"
"}\n"
"\n"
"QDialog#AboutDialog QLabel#"
                        "label_2 { /* Margin for About Proton text */\n"
"margin-right:10px;\n"
"}\n"
"\n"
"/* Edit Address Dialog */\n"
"QDialog#EditAddressDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#EditAddressDialog QLabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-height:27px;\n"
"font-weight:normal;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"/* OVERVIEW SCREEN */\n"
"\n"
"QWidget .QFrame#frame { /* Wallet Balance */\n"
"min-width:490px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame > .QLabel {\n"
"min-width:190px;\n"
"font-weight:normal;\n"
"min-height:30px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#label_5 { /* Wallet Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:transparent;\n"
"color:#f4f4f5;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWalletStatus { /* Wallet Sync Status */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"margin-left:3px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel"
                        "#labelSpendable { /* Spendable Header */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:18px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchonly { /* Watch-only Header */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelBalanceText { /* Available Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#183862;\n"
"color:#ffffff;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"font-size:14px;\n"
"font-weight: bold;\n"
"min-height:35px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelBalance { /* Available Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:16px;\n"
"color:#183862;\n"
"margin-left:0px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchAvailable { /* Watch-only Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-siz"
                        "e:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelPendingText { /* Pending Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"font-size:14px;\n"
"font-Weight:bold;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelUnconfirmed { /* Pending Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchPending { /* Watch-only Pending Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelImmatureText { /* Immature Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame"
                        "#frame .QLabel#labelImmature { /* Immature Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchImmature { /* Watch-only Immature Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelTotalText { /* Total Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelTotal { /* Total Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchTotal { /* Watch-only Total Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16p"
                        "x;\n"
"}\n"
"\n"
"/* PRIVATESEND WIDGET */\n"
"\n"
"QWidget .QFrame#framePrivateSend { /* PrivateSend Widget */\n"
"background-color:transparent;\n"
"max-width: 451px;\n"
"min-width: 451px;\n"
"max-height: 350px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QWidget#layoutWidgetPrivateSendHeader { /* PrivateSend Header */\n"
"max-width: 421px;\n"
"min-width: 421px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QLabel#labelPrivateSendHeader { /* PrivateSend Header */\n"
"qproperty-alignment: 'AlignVCenter | AlignCenter';\n"
"max-width: 421px;\n"
"min-width: 421px;\n"
"background-color:#183862;\n"
"color:#fff;\n"
"margin-right: 5px;\n"
"padding-right: 5px;\n"
"font-weight:bold;\n"
"font-size:14px;\n"
"min-height:35px;\n"
"max-height:35px;\n"
"}\n"
"/******************************************************************/\n"
"QWidget .QFrame#framePrivateSend .QLabel#labelPrivateSendSyncStatus { /* PrivateSend Sync Status */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"margin-left:2px;\n"
"padding-rig"
                        "ht:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget {\n"
"max-width: 451px;\n"
"max-height: 175px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget > .QLabel {\n"
"min-width:175px;\n"
"font-weight:normal;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelPrivateSendEnabledText { /* PrivateSend Enabled Status Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelPrivateSendEnabled { /* PrivateSend Enabled Status */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelCompletitionText { /* PrivateSend Completion Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-ri"
                        "ght:5px;\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QProgressBar#privateSendProgress { /* PrivateSend Completion */\n"
"border: 1px solid #818181;\n"
"border-radius: 1px;\n"
"margin-right:43px;\n"
"text-align: right;\n"
"color:#818181;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QProgressBar#privateSendProgress::chunk {\n"
"background-color: #183862;\n"
"width:1px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAnonymizedText { /* PrivateSend Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAnonymized { /* PrivateSend Balance */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAmountAndRoundsText { /* PrivateSend Amount and Rounds Label */\n"
"qp"
                        "roperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAmountRounds { /* PrivateSend Amount and Rounds */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelSubmittedDenomText { /* PrivateSend Submitted Denom Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelSubmittedDenom { /* PrivateSend Submitted Denom */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QWidget#layoutWidgetLastMessageAndButtons {\n"
"max-width: 451px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QLabel#labelPrivateSendLastMessage { /* PrivateSend Status Notifications */\n"
"qproperty-alignment: 'AlignVCenter | AlignCe"
                        "nter';\n"
"min-width: 288px;\n"
"min-height: 43px;\n"
"font-size:11px;\n"
"color:#818181;\n"
"}\n"
"\n"
"/* PRIVATESEND BUTTONS */\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton { /* PrivateSend Buttons - General Attributes */\n"
"border:0px solid #ffffff;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend QPushButton:focus {\n"
"border:none;\n"
"outline:none;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#togglePrivateSend { /* Start PrivateSend Mixing */\n"
"min-height: 40px;\n"
"font-size:15px;\n"
"font-weight:normal;\n"
"color:#ffffff;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"padding-top:5px;\n"
"padding-bottom:6px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#togglePrivateSend:hover {\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto { /* Try Mix Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
""
                        "border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset { /* Reset Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, sto"
                        "p: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo { /* Info Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"/* R"
                        "ECENT TRANSACTIONS */\n"
"\n"
"QWidget .QFrame#frame_2 { /* Transactions Widget */\n"
"min-width:410px;\n"
"margin-right:20px;\n"
"margin-left:0;\n"
"margin-top:15px;\n"
"background-repeat:none;\n"
"}\n"
"\n"
"QWidget .QFrame#frame_2 .QLabel#label_4 { /* Recent Transactions Label */\n"
"min-width:180px;\n"
"color:#999;\n"
"margin-left:0px;\n"
"margin-top:30px;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"font-weight:normal;\n"
"font-size:18px;\n"
"font-weight:bold;\n"
"min-height:24px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame_2 .QLabel#labelTransactionsStatus { /* Recent Transactions Sync Status */\n"
"qproperty-alignment: 'AlignBottom | AlignRight';\n"
"min-width:93px;\n"
"margin-top:83px;\n"
"margin-left:16px;\n"
"margin-right:5px;\n"
"min-height:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame_2 QListView { /* SUQA Transaction List */\n"
"font-weight:normal;\n"
"font-size:14px;\n"
"max-width:500px;\n"
"margin-top:12px;\n"
"margin-left:0px; /* CSS Voodoo - set to -66px to hide default transaction icons */\n"
"}\n"
""
                        "\n"
"/* SEND DIALOG */\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl { /* Coin Control Section */\n"
"\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl > .QLabel { /* Default Font Color and  Size */\n"
"font-weight:normal;\n"
"color: #999;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QPushButton#pushButtonCoinControl { /* Coin Control Inputs Button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QLabel#labelCoinControlFeatures { /* Coin Control Header */\n"
"color:#999;\n"
"font-weight:normal;\n"
"font-size:14px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QWidget#widgetCoinControl { /* Coin Control Inputs */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QWidget#widgetCoinControl > .QLabel { /* Coin Control Inputs Labels */\n"
"padding:2px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QCheckBox#checkBoxCoinControlChang"
                        "e { /* Custom Change Label */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QValidatedLineEdit#lineEditCoinControlChange { /* Custom Change Address */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QLabel#labelCoinControlChangeLabel { /* Custom Change Address Validation Label */\n"
"font-weight:normal;\n"
"qproperty-margin:-6;\n"
"margin-right:112px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QScrollArea#scrollArea .QWidget#scrollAreaWidgetContents { /* Send To Widget */\n"
"background:transparent;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#sendButton { /* Send Button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
""
                        "}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#addButton { /* Add Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#addButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#add"
                        "Button:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QCheckBox#checkUsePrivateSend { /* PrivateSend Checkbox */\n"
"color:#616161;\n"
"font-weight:bold;\n"
"background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5, stop:0 rgba(248, 246, 246, 128), stop: 1 rgba(0, 0, 0, 0));\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:18px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QCheckBox#checkUseInstantSend { /* InstantSend Checkbox */\n"
"color:#616161;\n"
"font-weight:bold;\n"
"background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5, stop:0 rgba(248, 246, 246, 128), stop: 1 rgba(0, 0, 0, 0));\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:18px;\n"
"margin-left:10px;\n"
"margin-right:20px;\n"
"}\n"
"\n"
"/* This QLabel uses name = \"label\" which conflicts with Address Book -> New Address */\n"
"/* To maximize backwards compatibility this formatting has been removed */\n"
"\n"
"QDialog#SendCoinsDialog QLabel#label {\n"
"/*ma"
                        "rgin-left:20px;\n"
"margin-right:-2px;\n"
"padding-right:-2px;\n"
"color:#616161;\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:20px;*/\n"
"min-height:27px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog QLabel#labelBalance {\n"
"margin-left:0px;\n"
"padding-left:0px;\n"
"color:#333333;\n"
"/* font-weight:bold;\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:20px; */\n"
"min-height:27px;\n"
"}\n"
"\n"
"#checkboxSubtractFeeFromAmount {\n"
"padding-left:10px;\n"
"}\n"
"\n"
"\n"
"/* SEND COINS ENTRY */\n"
"\n"
"QStackedWidget#SendCoinsEntry .QFrame#SendCoins > .QLabel { /* Send Coin Entry Labels */\n"
"background-color:#F8F6F6;\n"
"min-width:102px;\n"
"font-weight:normal;\n"
"/*font-size:11px;*/\n"
"color:#333;\n"
"min-height:25px;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QFrame#SendCoins .QLabel#amountLabel {\n"
"color: #fff;\n"
"background-color:#999;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry"
                        " .QValidatedLineEdit#payTo { /* Pay To Input Field */\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton { /* General Settings for Pay To Icons */\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"border: 0;\n"
"outline: 0;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#addressBookButton { /* Address Book Button */\n"
"padding-left:10px;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#addressBookButton {\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#pasteButton {\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#deleteButton {\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QLineEdit#addAsLabel { /* Pay To Input Field */\n"
"}\n"
"\n"
"/* COIN CONTROL POPUP */\n"
"\n"
"QDialog#CoinControlDialog { /* Coin Control Dialog Window */\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlQuantityText { /* Coin Control Quantity Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labe"
                        "lCoinControlQuantity { /* Coin Control Quantity */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlBytesText { /* Coin Control Bytes Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlBytes { /* Coin Control Bytes */\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAmountText { /* Coin Control Amount Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAmount { /* Coin Control Amount */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlPriorityText { /* Coin Control Priority Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlPriority { /* Coin Control Priority */\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlFeeText { /* Coin Control Fee Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinCo"
                        "ntrolFee { /* Coin Control Fee */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlLowOutputText { /* Coin Control Low Output Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlLowOutput { /* Coin Control Low Output */\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAfterFeeText { /* Coin Control After Fee Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAfterFee { /* Coin Control After Fee */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlChangeText { /* Coin Control Change Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlChange { /* Coin Control Change */\n"
"\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QPushButton#pushButtonSelectAll { /* (un)select all button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
""
                        "QDialog#CoinControlDialog .QFrame#frame .QPushButton#pushButtonToggleLock { /* Toggle lock state button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QDialogButtonBox#buttonBox QPushButton { /* Coin Control 'OK' button */\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QRadioButton#radioTreeMode { /* Coin Control Tree Mode Selector */\n"
"color:#818181;\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QRadioButton#radioListMode { /* Coin Control List Mode Selector */\n"
"color:#818181;\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog QHeaderView::section:first { /* Bug Fix: the number \"1\" displays in this table for some reason... */\n"
"color:transparent;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget { /* Coin Control Widget Container */\n"
"outline:0;\n"
"background-color:#ffffff;\n"
"border:0px solid #818181;\n"
"}\n"
"\n"
"QDialog#CoinCo"
                        "ntrolDialog .CoinControlTreeWidget#treeWidget::item {\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::item:selected { /* Coin Control Item (selected) */\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::item:checked { /* Coin Control Item (checked) */\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::branch:selected { /* Coin Control Branch Icon */\n"
"background-image: url(':/images/light/drkblue_qtreeview_selected');\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::branch:checked { /* Coin Control Branch Icon */\n"
"background-image: url(':/images/light/drkblue_qtreeview_selected');\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
""
                        "QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::seperator {\n"
"\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::indicator { /* Coin Control Widget Checkbox */\n"
"\n"
"}\n"
"\n"
"/* RECEIVE COINS */\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#label_2 { /* Label Label */\n"
"background-color:#F8F6F6;\n"
"border: 1px solid #fff;\n"
"min-width:102px;\n"
"color:#333;\n"
"/*font-weight:bold;\n"
"font-size:11px;*/\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#label { /* Amount Label */\n"
"background-color:#999;\n"
"border: 1px solid #fff;\n"
"min-width:102px;\n"
"color:#ffffff;\n"
"/*font-weight:bold;\n"
"font-size:11px;*/\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#label_3 { /* Message Label */\n"
"background-color:#F8F6F6;\n"
"border: 1px solid #fff;\n"
"min-width:102px;\n"
"color:#333;\n"
"/*font-weight:bold;\n"
"font-size:11px;*/\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWi"
                        "dget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton { /* Show Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebe"
                        "beb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton { /* Remove Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton:hover {\n"
"background-color:qlineargradient(x1"
                        ": 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame .QLabel#label_6 { /* Requested Payments History Label */\n"
"color:#999;\n"
"font-weight:normal;\n"
"font-size:14px;\n"
"}\n"
"\n"
"/* RECEIVE COINS DIALOG */\n"
"\n"
"QDialog#ReceiveRequestDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#ReceiveRequestDialog QTextEdit { /* Contents of Receive Coin Dialog */\n"
"border:1px solid #d7d7d7;\n"
"}\n"
"\n"
"/* TRANSACTIONS PAGE */\n"
"\n"
"TransactionView QLineEdit { /* Filters */\n"
"margin-bottom:2px;\n"
"margin-right:1px;\n"
"min-width:111px;\n"
"text-align:center;\n"
"}\n"
"\n"
"TransactionView QLineEdit#addressWidget { /* Address Filter */\n"
"margin-bottom:2px;\n"
"margin-right:1px;\n"
"min-width:405px;\n"
"text-align:"
                        "center;\n"
"}\n"
"\n"
"TransactionView QLineEdit#amountWidget { /* Amount Filter */\n"
"margin-bottom:2px;\n"
"margin-right:1px;\n"
"max-width:100px;\n"
"text-align:center;\n"
"}\n"
"\n"
"TransactionView QComboBox {\n"
"margin-bottom:1px;\n"
"margin-right:1px;\n"
"}\n"
"\n"
"QLabel#transactionSumLabel { /* Example of setObjectName for widgets without name */\n"
"color:#333333;\n"
"font-weight:bold;\n"
"}\n"
" \n"
"QLabel#transactionSum { /* Example of setObjectName for widgets without name */\n"
"color:#333333;\n"
"}\n"
"\n"
"/* TRANSACTION DETAIL DIALOG */\n"
"\n"
"QDialog#TransactionDescDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#TransactionDescDialog QTextEdit { /* Contents of Receive Coin Dialog */\n"
"border:1px solid #d7d7d7;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabMain = new QWidget();
        tabMain->setObjectName(QStringLiteral("tabMain"));
        verticalLayout_Main = new QVBoxLayout(tabMain);
        verticalLayout_Main->setObjectName(QStringLiteral("verticalLayout_Main"));
        bitcoinAtStartup = new QCheckBox(tabMain);
        bitcoinAtStartup->setObjectName(QStringLiteral("bitcoinAtStartup"));

        verticalLayout_Main->addWidget(bitcoinAtStartup);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QStringLiteral("horizontalLayout_2_Main"));
        databaseCacheLabel = new QLabel(tabMain);
        databaseCacheLabel->setObjectName(QStringLiteral("databaseCacheLabel"));
        databaseCacheLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheLabel);

        databaseCache = new QSpinBox(tabMain);
        databaseCache->setObjectName(QStringLiteral("databaseCache"));

        horizontalLayout_2_Main->addWidget(databaseCache);

        databaseCacheUnitLabel = new QLabel(tabMain);
        databaseCacheUnitLabel->setObjectName(QStringLiteral("databaseCacheUnitLabel"));
        databaseCacheUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheUnitLabel);

        horizontalSpacer_2_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(horizontalSpacer_2_Main);


        verticalLayout_Main->addLayout(horizontalLayout_2_Main);

        horizontalLayout_3_Main = new QHBoxLayout();
        horizontalLayout_3_Main->setObjectName(QStringLiteral("horizontalLayout_3_Main"));
        threadsScriptVerifLabel = new QLabel(tabMain);
        threadsScriptVerifLabel->setObjectName(QStringLiteral("threadsScriptVerifLabel"));
        threadsScriptVerifLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Main->addWidget(threadsScriptVerifLabel);

        threadsScriptVerif = new QSpinBox(tabMain);
        threadsScriptVerif->setObjectName(QStringLiteral("threadsScriptVerif"));

        horizontalLayout_3_Main->addWidget(threadsScriptVerif);

        horizontalSpacer_3_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main->addItem(horizontalSpacer_3_Main);


        verticalLayout_Main->addLayout(horizontalLayout_3_Main);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer_Main);

        tabWidget->addTab(tabMain, QString());
        tabWallet = new QWidget();
        tabWallet->setObjectName(QStringLiteral("tabWallet"));
        verticalLayout_Wallet = new QVBoxLayout(tabWallet);
        verticalLayout_Wallet->setObjectName(QStringLiteral("verticalLayout_Wallet"));
        groupBox = new QGroupBox(tabWallet);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        coinControlFeatures = new QCheckBox(groupBox);
        coinControlFeatures->setObjectName(QStringLiteral("coinControlFeatures"));

        verticalLayout_2->addWidget(coinControlFeatures);

        spendZeroConfChange = new QCheckBox(groupBox);
        spendZeroConfChange->setObjectName(QStringLiteral("spendZeroConfChange"));

        verticalLayout_2->addWidget(spendZeroConfChange);


        verticalLayout_Wallet->addWidget(groupBox);

        verticalSpacer_Wallet = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Wallet->addItem(verticalSpacer_Wallet);

        tabWidget->addTab(tabWallet, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QStringLiteral("tabNetwork"));
        verticalLayout_Network = new QVBoxLayout(tabNetwork);
        verticalLayout_Network->setObjectName(QStringLiteral("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(tabNetwork);
        mapPortUpnp->setObjectName(QStringLiteral("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        allowIncoming = new QCheckBox(tabNetwork);
        allowIncoming->setObjectName(QStringLiteral("allowIncoming"));

        verticalLayout_Network->addWidget(allowIncoming);

        connectSocks = new QCheckBox(tabNetwork);
        connectSocks->setObjectName(QStringLiteral("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_1_Network = new QHBoxLayout();
        horizontalLayout_1_Network->setObjectName(QStringLiteral("horizontalLayout_1_Network"));
        proxyIpLabel = new QLabel(tabNetwork);
        proxyIpLabel->setObjectName(QStringLiteral("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(tabNetwork);
        proxyIp->setObjectName(QStringLiteral("proxyIp"));
        proxyIp->setMinimumSize(QSize(140, 24));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_1_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(tabNetwork);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(tabNetwork);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMinimumSize(QSize(55, 24));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_1_Network->addWidget(proxyPort);

        horizontalSpacer_1_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Network->addItem(horizontalSpacer_1_Network);


        verticalLayout_Network->addLayout(horizontalLayout_1_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        tabWidget->addTab(tabNetwork, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QStringLiteral("tabWindow"));
        verticalLayout_Window = new QVBoxLayout(tabWindow);
        verticalLayout_Window->setObjectName(QStringLiteral("verticalLayout_Window"));
        minimizeToTray = new QCheckBox(tabWindow);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));

        verticalLayout_Window->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(tabWindow);
        minimizeOnClose->setObjectName(QStringLiteral("minimizeOnClose"));

        verticalLayout_Window->addWidget(minimizeOnClose);

        verticalSpacer_Window = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Window->addItem(verticalSpacer_Window);

        tabWidget->addTab(tabWindow, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QStringLiteral("tabDisplay"));
        verticalLayout_Display = new QVBoxLayout(tabDisplay);
        verticalLayout_Display->setObjectName(QStringLiteral("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QStringLiteral("horizontalLayout_1_Display"));
        langLabel = new QLabel(tabDisplay);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(tabDisplay);
        lang->setObjectName(QStringLiteral("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QStringLiteral("horizontalLayout_2_Display"));
        unitLabel = new QLabel(tabDisplay);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(tabDisplay);
        unit->setObjectName(QStringLiteral("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        horizontalLayout_3_Display = new QHBoxLayout();
        horizontalLayout_3_Display->setObjectName(QStringLiteral("horizontalLayout_3_Display"));
        thirdPartyTxUrlsLabel = new QLabel(tabDisplay);
        thirdPartyTxUrlsLabel->setObjectName(QStringLiteral("thirdPartyTxUrlsLabel"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrlsLabel);

        thirdPartyTxUrls = new QLineEdit(tabDisplay);
        thirdPartyTxUrls->setObjectName(QStringLiteral("thirdPartyTxUrls"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrls);


        verticalLayout_Display->addLayout(horizontalLayout_3_Display);

        verticalSpacer_Display = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer_Display);

        tabWidget->addTab(tabDisplay, QString());

        verticalLayout->addWidget(tabWidget);

        frame = new QFrame(OptionsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        verticalLayout_Bottom = new QVBoxLayout(frame);
        verticalLayout_Bottom->setObjectName(QStringLiteral("verticalLayout_Bottom"));
        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName(QStringLiteral("horizontalLayout_Bottom"));
        overriddenByCommandLineInfoLabel = new QLabel(frame);
        overriddenByCommandLineInfoLabel->setObjectName(QStringLiteral("overriddenByCommandLineInfoLabel"));
        overriddenByCommandLineInfoLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Bottom->addWidget(overriddenByCommandLineInfoLabel);

        horizontalSpacer_Bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Bottom->addItem(horizontalSpacer_Bottom);


        verticalLayout_Bottom->addLayout(horizontalLayout_Bottom);

        overriddenByCommandLineLabel = new QLabel(frame);
        overriddenByCommandLineLabel->setObjectName(QStringLiteral("overriddenByCommandLineLabel"));
        overriddenByCommandLineLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineLabel->setWordWrap(true);

        verticalLayout_Bottom->addWidget(overriddenByCommandLineLabel);


        verticalLayout->addWidget(frame);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        resetButton = new QPushButton(OptionsDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(resetButton);

        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        QFont font;
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        databaseCacheLabel->setBuddy(databaseCache);
        threadsScriptVerifLabel->setBuddy(threadsScriptVerif);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
        thirdPartyTxUrlsLabel->setBuddy(thirdPartyTxUrls);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsDialog);

        tabWidget->setCurrentIndex(4);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", 0));
#ifndef QT_NO_TOOLTIP
        bitcoinAtStartup->setToolTip(QApplication::translate("OptionsDialog", "Automatically start SUQA Core after logging in to the system.", 0));
#endif // QT_NO_TOOLTIP
        bitcoinAtStartup->setText(QApplication::translate("OptionsDialog", "&Start SUQA Core on system login", 0));
        databaseCacheLabel->setText(QApplication::translate("OptionsDialog", "Size of &database cache", 0));
        databaseCacheUnitLabel->setText(QApplication::translate("OptionsDialog", "MB", 0));
        threadsScriptVerifLabel->setText(QApplication::translate("OptionsDialog", "Number of script &verification threads", 0));
#ifndef QT_NO_TOOLTIP
        threadsScriptVerif->setToolTip(QApplication::translate("OptionsDialog", "(0 = auto, <0 = leave that many cores free)", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QApplication::translate("OptionsDialog", "&Main", 0));
        groupBox->setTitle(QApplication::translate("OptionsDialog", "Expert", 0));
#ifndef QT_NO_TOOLTIP
        coinControlFeatures->setToolTip(QApplication::translate("OptionsDialog", "Whether to show coin control features or not.", 0));
#endif // QT_NO_TOOLTIP
        coinControlFeatures->setText(QApplication::translate("OptionsDialog", "Enable coin &control features", 0));
#ifndef QT_NO_TOOLTIP
        spendZeroConfChange->setToolTip(QApplication::translate("OptionsDialog", "If you disable the spending of unconfirmed change, the change from a transaction cannot be used until that transaction has at least one confirmation. This also affects how your balance is computed.", 0));
#endif // QT_NO_TOOLTIP
        spendZeroConfChange->setText(QApplication::translate("OptionsDialog", "&Spend unconfirmed change", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWallet), QApplication::translate("OptionsDialog", "W&allet", 0));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the SUQA client port on the router. This only works when your router supports UPnP and it is enabled.", 0));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("OptionsDialog", "Map port using &UPnP", 0));
#ifndef QT_NO_TOOLTIP
        allowIncoming->setToolTip(QApplication::translate("OptionsDialog", "Accept connections from outside", 0));
#endif // QT_NO_TOOLTIP
        allowIncoming->setText(QApplication::translate("OptionsDialog", "Allow incoming connections", 0));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("OptionsDialog", "Connect to the SUQA network through a SOCKS5 proxy.", 0));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("OptionsDialog", "&Connect through SOCKS5 proxy (default proxy):", 0));
        proxyIpLabel->setText(QApplication::translate("OptionsDialog", "Proxy &IP:", 0));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", 0));
#endif // QT_NO_TOOLTIP
        proxyPortLabel->setText(QApplication::translate("OptionsDialog", "&Port:", 0));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QApplication::translate("OptionsDialog", "&Network", 0));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", 0));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", 0));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Exit in the menu.", 0));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("OptionsDialog", "M&inimize on close", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWindow), QApplication::translate("OptionsDialog", "&Window", 0));
        langLabel->setText(QApplication::translate("OptionsDialog", "User Interface &language:", 0));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting SUQA Core.", 0));
#endif // QT_NO_TOOLTIP
        unitLabel->setText(QApplication::translate("OptionsDialog", "&Unit to show amounts in:", 0));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending coins.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        thirdPartyTxUrlsLabel->setToolTip(QApplication::translate("OptionsDialog", "Third party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items. %s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", 0));
#endif // QT_NO_TOOLTIP
        thirdPartyTxUrlsLabel->setText(QApplication::translate("OptionsDialog", "Third party transaction URLs", 0));
#ifndef QT_NO_TOOLTIP
        thirdPartyTxUrls->setToolTip(QApplication::translate("OptionsDialog", "Third party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items. %s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabDisplay), QApplication::translate("OptionsDialog", "&Display", 0));
        overriddenByCommandLineInfoLabel->setText(QApplication::translate("OptionsDialog", "Active command-line options that override above options:", 0));
        overriddenByCommandLineLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("OptionsDialog", "Reset all client options to default.", 0));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("OptionsDialog", "&Reset Options", 0));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("OptionsDialog", "&OK", 0));
        cancelButton->setText(QApplication::translate("OptionsDialog", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
