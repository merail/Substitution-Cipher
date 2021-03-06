#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMainWindow>
#include <QString>
#include <string>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QMessageBox>
#include <QList>
#include <QStandardItemModel>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

void setEnglishAlphabetTable();

private slots:
    void on_loadSubstitutionTable_clicked();

    void on_generateSubstitutuionTable_clicked();

    void on_saveSubstitutionTable_clicked();

    void on_loadText_clicked();

    void on_codeText_clicked();

    void on_decodeText_clicked();

    void on_saveText_clicked();

    void on_englishAlphabetRadioButton_clicked();

    void on_russianAlphabetRadioButton_clicked();

private:
    Ui::MainWindow *ui;

    QList<int> codesOfSymbols;

    int generationConstant1;
    int generationConstant2;
    int codeOfCharacter;
    int codeOfEncryptedCharacter;
    string character;
    string encryptedCharacter;
    QString qCharacter;
    QString qEncryptedCharacter;
    QString qSubstitutionTable;
    string substitutionTable;
    QStandardItemModel *model;
    QModelIndex index;
    int charactersCount;

    bool substitutuinTableIsCreated = false;

    string text;
    string encryptedText;
    QString qText;
    QString qEncryptedText;

    QString fileName;
    QFile file;

    QMessageBox errorMessageBox;
};

#endif // MAINWINDOW_H
