#include "NewTransactionDialog.h"
#include "ui_NewTransactionDialog.h"

NewTransactionDialog::NewTransactionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewTransactionDialog)
{
    ui->setupUi(this);
}

NewTransactionDialog::~NewTransactionDialog()
{
    delete ui;
}