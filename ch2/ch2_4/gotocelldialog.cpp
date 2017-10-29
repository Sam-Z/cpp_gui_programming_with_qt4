#include<QtGui>
#include<gotocelldialog.h>
#if 1 
GoToCellDialog::GoToCellDialog(QWidget *parent):QDialog(parent)
{
    ui = new Ui::Form;
    ui->setupUi(this);
}

void GoToCellDialog:: on_lineEdit_textChanged()
{
    ui->okButton->setEnabled(ui->lineEdit->hasAcceptableInput());
}
#endif

