/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *firstGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *primaryColumnCombo;
    QLabel *label;
    QComboBox *primaryOrderCombo;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *secondaryColumnCombo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QComboBox *secondaryOrderCombo;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *tertiaryColumnCombo;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QComboBox *tertiarydaryOrderCombo;

    void setupUi(QDialog *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName(QString::fromUtf8("Sort"));
        Sort->resize(845, 753);
        gridLayout_4 = new QGridLayout(Sort);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        firstGroupBox = new QGroupBox(Sort);
        firstGroupBox->setObjectName(QString::fromUtf8("firstGroupBox"));
        gridLayout = new QGridLayout(firstGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(firstGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        primaryColumnCombo = new QComboBox(firstGroupBox);
        primaryColumnCombo->setObjectName(QString::fromUtf8("primaryColumnCombo"));

        gridLayout->addWidget(primaryColumnCombo, 0, 1, 1, 1);

        label = new QLabel(firstGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        primaryOrderCombo = new QComboBox(firstGroupBox);
        primaryOrderCombo->setObjectName(QString::fromUtf8("primaryOrderCombo"));

        gridLayout->addWidget(primaryOrderCombo, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_4->addWidget(firstGroupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        okButton = new QPushButton(Sort);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(Sort);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(Sort);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(Sort);
        secondaryGroupBox->setObjectName(QString::fromUtf8("secondaryGroupBox"));
        gridLayout_2 = new QGridLayout(secondaryGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(secondaryGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        secondaryColumnCombo = new QComboBox(secondaryGroupBox);
        secondaryColumnCombo->setObjectName(QString::fromUtf8("secondaryColumnCombo"));

        gridLayout_2->addWidget(secondaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_4 = new QLabel(secondaryGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        secondaryOrderCombo = new QComboBox(secondaryGroupBox);
        secondaryOrderCombo->setObjectName(QString::fromUtf8("secondaryOrderCombo"));

        gridLayout_2->addWidget(secondaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(Sort);
        tertiaryGroupBox->setObjectName(QString::fromUtf8("tertiaryGroupBox"));
        gridLayout_3 = new QGridLayout(tertiaryGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(tertiaryGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        tertiaryColumnCombo = new QComboBox(tertiaryGroupBox);
        tertiaryColumnCombo->setObjectName(QString::fromUtf8("tertiaryColumnCombo"));

        gridLayout_3->addWidget(tertiaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_6 = new QLabel(tertiaryGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        tertiarydaryOrderCombo = new QComboBox(tertiaryGroupBox);
        tertiarydaryOrderCombo->setObjectName(QString::fromUtf8("tertiarydaryOrderCombo"));

        gridLayout_3->addWidget(tertiarydaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(tertiaryGroupBox, 3, 0, 1, 1);

        QWidget::setTabOrder(primaryColumnCombo, primaryOrderCombo);
        QWidget::setTabOrder(primaryOrderCombo, secondaryColumnCombo);
        QWidget::setTabOrder(secondaryColumnCombo, secondaryOrderCombo);
        QWidget::setTabOrder(secondaryOrderCombo, tertiaryColumnCombo);
        QWidget::setTabOrder(tertiaryColumnCombo, tertiarydaryOrderCombo);
        QWidget::setTabOrder(tertiarydaryOrderCombo, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(Sort);
        QObject::connect(okButton, SIGNAL(clicked()), Sort, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Sort, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QDialog *Sort)
    {
        Sort->setWindowTitle(QApplication::translate("Sort", "Dialog", 0, QApplication::UnicodeUTF8));
        firstGroupBox->setTitle(QApplication::translate("Sort", "&Primary Key", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Sort", "Order:", 0, QApplication::UnicodeUTF8));
        primaryColumnCombo->clear();
        primaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("Sort", "None", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Sort", "Column:", 0, QApplication::UnicodeUTF8));
        primaryOrderCombo->clear();
        primaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("Sort", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Sort", "Descending", 0, QApplication::UnicodeUTF8)
        );
        okButton->setText(QApplication::translate("Sort", "Ok", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Sort", "Cancel", 0, QApplication::UnicodeUTF8));
        moreButton->setText(QApplication::translate("Sort", "&More", 0, QApplication::UnicodeUTF8));
        secondaryGroupBox->setTitle(QApplication::translate("Sort", "&Secondary Key", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Sort", "Column:", 0, QApplication::UnicodeUTF8));
        secondaryColumnCombo->clear();
        secondaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("Sort", "None", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Sort", "Order:", 0, QApplication::UnicodeUTF8));
        secondaryOrderCombo->clear();
        secondaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("Sort", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Sort", "Descending", 0, QApplication::UnicodeUTF8)
        );
        tertiaryGroupBox->setTitle(QApplication::translate("Sort", "&Tertiary Key", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Sort", "Column:", 0, QApplication::UnicodeUTF8));
        tertiaryColumnCombo->clear();
        tertiaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("Sort", "None", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("Sort", "Order:", 0, QApplication::UnicodeUTF8));
        tertiarydaryOrderCombo->clear();
        tertiarydaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("Sort", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Sort", "Descending", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
