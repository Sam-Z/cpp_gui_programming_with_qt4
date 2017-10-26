#include<QApplication>
#include<ui_gotocelldialog.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
   
    QWidget *window = new QWidget;

    Ui::Form *ui = new Ui::Form(window);

    window->show();

    return(app.exec());
}

