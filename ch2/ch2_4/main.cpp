#include<QApplication>
#include"gotocelldialog.h"
#include<QDialog>



class GoToCellDialog;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    
    GoToCellDialog *w = new GoToCellDialog;
    w->show();
    return(app.exec());
}

