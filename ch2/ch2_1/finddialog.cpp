#include"finddialog.h"
#include<QtGui>

FindDialog:: FindDialog(QWidget *parent)
{
   label            = new QLabel(tr("Find &what"));
   lineEdit         = new QLineEdit;
   caseCheckBox     = new QCheckBox(tr("Match &case"));
   backwardCheckBox = new QCheckBox(tr("Search &backward"));
   findButton       = new QPushButton(tr("&Find"));
   closeButton      = new QPushButton(tr("&Close"));

   QHBoxLayout *topLeftLayout = new QHBoxLayout;
   topLeftLayout->addWidget(label);
   topLeftLayout->addWidget(lineEdit);

   QVBoxLayout *leftLayout = new QVBoxLayout;
   leftLayout->addLayout(topLeftLayout);
   leftLayout->addWidget(caseCheckBox);
   leftLayout->addWidget(backwardCheckBox);
   
   QVBoxLayout *rightLayout = new QVBoxLayout;
   rightLayout->addWidget(findButton);
   rightLayout->addWidget(closeButton);
   rightLayout->addStretch();

   QHBoxLayout *mainLayout = new QHBoxLayout;
   mainLayout->addLayout(leftLayout);
   mainLayout->addLayout(rightLayout);
   setLayout(mainLayout);

   setWindowTitle("Find");
   setFixedHeight(sizeHint().height());
}
void FindDialog::findClicked()
{


}

void FindDialog::enableFindButton(const QString &str)
{


}
