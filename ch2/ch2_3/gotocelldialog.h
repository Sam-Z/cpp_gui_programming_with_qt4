#ifndef __GOTODIALOG_H
#define __GOTODIALOG_H

#include<QDialog>
#include<ui_gotocelldialog.h>
class GoToCellDialog :public QDialog, public Ui::Form
{
    Q_OBJECT
public:
    GoToCellDialog (QWidget *parent = 0);

private slots:
    void on_lineEdit_textChanged();

};

#endif
