#include "logindialog.h"
#include "ui_logindialog.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
    connect(ui->reg_btn, &QPushButton::clicked, this, &loginDialog::switchRegister);

    ui->forget_label->SetState("normal","hover","","selected","selected_hover","");

    connect(ui->forget_label, &ClickedLabel::clicked, this, &loginDialog::slot_forget_pwd);

}

void loginDialog::slot_forget_pwd()
{
    qDebug()<<"slot forget pwd";
    emit switchReset();
}

loginDialog::~loginDialog()
{
    delete ui;
}
