#include <QMessageBox>
#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_payButton_toggled(bool checked)
{
    if (checked == true)
        ui->empList->setEnabled(false);
}

void LoginWindow::on_empButton_toggled(bool checked)
{
    if (checked == true)
        ui->empList->setEnabled(true);
}

void LoginWindow::on_loginButton_pressed()
{
    // TODO: how do I get rid of this?
}

void LoginWindow::on_quitButton_clicked()
{
    // TODO: quit here
}

void LoginWindow::on_loginButton_clicked()
{
    if (ui->empButton->isChecked() == true && ui->empList->currentRow() < 0)
    {
        QMessageBox::warning(this, tr("cuNICS Login"), tr("Please select an employee number."));
        return;
    }
}
