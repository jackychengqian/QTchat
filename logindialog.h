#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = nullptr);
    ~loginDialog();
public slots:
    void slot_forget_pwd();
signals:
    void switchRegister();
    void switchReset();
private:
    Ui::loginDialog *ui;
};

#endif // LOGINDIALOG_H
