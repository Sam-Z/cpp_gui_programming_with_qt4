#include<QApplication>
#include<ui_gotocelldialog.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
   
    QWidget *window = new QWidget;

    Ui::Form ui;

    ui.setupUi(window); 
    
    window->show();

    return(app.exec());
}

