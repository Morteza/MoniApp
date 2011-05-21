/********************************************************************************
** Form generated from reading UI file 'SideBar.ui'
**
** Created: Sat May 21 04:28:32 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEBAR_H
#define UI_SIDEBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideBar
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *accountListWidget;
    QLabel *label_2;
    QListWidget *reportListWidget;
    QLabel *label_3;
    QFrame *line;

    void setupUi(QWidget *SideBar)
    {
        if (SideBar->objectName().isEmpty())
            SideBar->setObjectName(QString::fromUtf8("SideBar"));
        SideBar->resize(250, 442);
        SideBar->setMinimumSize(QSize(250, 0));
        SideBar->setMaximumSize(QSize(250, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(237, 237, 237, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        SideBar->setPalette(palette);
        verticalLayout = new QVBoxLayout(SideBar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(SideBar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        frame->setFont(font);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(-1);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        accountListWidget = new QListWidget(frame);
        new QListWidgetItem(accountListWidget);
        new QListWidgetItem(accountListWidget);
        accountListWidget->setObjectName(QString::fromUtf8("accountListWidget"));
        QPalette palette1;
        QBrush brush2(QColor(234, 234, 234, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        accountListWidget->setPalette(palette1);
        accountListWidget->setFocusPolicy(Qt::NoFocus);
        accountListWidget->setFrameShape(QFrame::NoFrame);
        accountListWidget->setFrameShadow(QFrame::Plain);
        accountListWidget->setLineWidth(0);
        accountListWidget->setUniformItemSizes(false);
        accountListWidget->setSelectionRectVisible(true);

        gridLayout->addWidget(accountListWidget, 1, 0, 1, 3);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        reportListWidget = new QListWidget(frame);
        reportListWidget->setObjectName(QString::fromUtf8("reportListWidget"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        reportListWidget->setPalette(palette2);
        reportListWidget->setFocusPolicy(Qt::NoFocus);
        reportListWidget->setFrameShape(QFrame::NoFrame);
        reportListWidget->setFrameShadow(QFrame::Plain);
        reportListWidget->setLineWidth(0);
        reportListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        reportListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        reportListWidget->setViewMode(QListView::IconMode);
        reportListWidget->setWordWrap(true);

        gridLayout->addWidget(reportListWidget, 3, 0, 1, 3);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 3);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 3);


        verticalLayout->addWidget(frame);


        retranslateUi(SideBar);

        QMetaObject::connectSlotsByName(SideBar);
    } // setupUi

    void retranslateUi(QWidget *SideBar)
    {
        SideBar->setWindowTitle(QApplication::translate("SideBar", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SideBar", "Accounts", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = accountListWidget->isSortingEnabled();
        accountListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = accountListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("SideBar", "Cash", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = accountListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("SideBar", "Credit", 0, QApplication::UnicodeUTF8));
        accountListWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("SideBar", "Reports", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SideBar", "Total: $0.00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SideBar: public Ui_SideBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBAR_H
