#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();



    void on_pb_chercher_client_clicked();


    void on_pb_modifier_clicked();

    void on_prenom_cursorPositionChanged(int arg1, int arg2);

    void on_pb_client_dumois_2_clicked();

    void on_pb_chercher_client_aff_clicked();

    void on_radio_nom_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_radio_prenom_clicked();

    void on_radio_id_clicked();

    void on_radio_nb_pts_clicked();

private:
    Ui::MainWindow *ui;
    client C;
};
#endif // MAINWINDOW_H
