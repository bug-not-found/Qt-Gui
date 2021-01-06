#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(OnClickADDBtn()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(OnClickClearBtn()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddText(QString text)
{
    ui->label->Add(text);
}
void MainWindow::OnClickADDBtn()
{
    ui->label->Add(ui->lineEdit->text());
}
void MainWindow::OnClickClearBtn()
{
    ui->label->Clear();
}
