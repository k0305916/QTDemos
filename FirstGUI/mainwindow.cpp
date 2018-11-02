#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //It works.
    //ps: This way will be not care parameters.
    //OnTextChanged() works too.
    connect(ui->PortEdit, SIGNAL(textChanged(const QString &)),
            this, SLOT(onTextChanged(const QString&)));

    //It works too.
    //ps: This way will be not care parameters.
    //OnTextChanged() works too.
//    connect(ui->PortEdit, &QLineEdit::textChanged,
//            this, &MainWindow::onTextChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText(ui->PortEdit->text());
    msgBox.exec();
}

void MainWindow::onTextChanged(const QString& text)
{
    QMessageBox msgBox;
    msgBox.setText(text);
    msgBox.exec();
}
