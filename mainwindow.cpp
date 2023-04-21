#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QDate>

QString decodeString(const QString& str)
{
    QStringList numbersStr = str.split(" ");
    QVector<int> numbers;
    for (const QString& numberStr : numbersStr) {
        bool ok;
        int number = numberStr.toInt(&ok);
        if (ok) {
            numbers.append(number);
        }
    }

    if (numbers.size() < 2) {
        return "";
    }
    int key = numbers[0];

    QString decodedStr;
    for (int i = 1; i < numbers.size(); i++) {
        int decodedNum = numbers[i] - key;
        decodedStr += QChar(decodedNum);
    }

    return decodedStr;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_browseButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Sélectionner un fichier texte", ".", "Fichiers texte (*.txt)");
        if (!fileName.isNull()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString fileContent = in.readAll();
            ui->filePathLabel->setText(fileName);
            ui->codeText->setPlainText(fileContent);
            file.close();
        } else {
            ui->filePathLabel->setText(fileName + "\nImpossible d'ouvrir le fichier");
        }
    }
}

void MainWindow::on_decodeButton_clicked()
{
    QString encodedText = ui->codeText->toPlainText();
    QString decodedText = decodeString(encodedText);
    ui->decodedText->setPlainText(decodedText);
}
