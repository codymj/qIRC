#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_


#include <QtCore/QRandomGenerator>
#include <QtWidgets/QMainWindow>
#include "../qIRC_autogen/include/ui_main_window.h"


class MainWindow : public QMainWindow, public Ui::MainWindow {
    Q_OBJECT


private:
	void restore_splitter_ratio();
	void initialize_screen_name();


public:
    MainWindow();
    ~MainWindow() override;

	QString screen_name;

    // Splitter data
    int main_window_width = 0;
    int network_tree_width = 0;
    int nick_list_width = 0;
    int center_output_width = 0;
	QList<int> splitter_sizes;
};


#endif
