#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QGraphicsItem;
class VEWorkplace;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void checkSelection();
    void checkActionStates();
    void selectItem(QGraphicsItem *item);
    void selectNewItem(QGraphicsItem *item);
    void slotOpen();
    void slotSave();

private:
    Ui::MainWindow *ui;
    VEWorkplace *workplaceScene;
    QString path;
};

#endif // MAINWINDOW_H
