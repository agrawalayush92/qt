#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    double val=1.0;
    
private:
    Ui::MainWindow *ui;
public slots:
    void setval();
};

#endif // MAINWINDOW_H
