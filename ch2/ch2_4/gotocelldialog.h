#ifndef  __GOTOCELLDIALOG_H
#define __GOTOCELLDIALOG_H

#include<QtGui>
#include"ui_gotocelldialog.h"

class GoToCellDialog :public QDialog
{
    Q_OBJECT
    public:
        GoToCellDialog(QWidget *parent=0);


    private slots:
        void on_lineEdit_textChanged();
    
    private:
    Ui::Form *ui;
};

#endif
