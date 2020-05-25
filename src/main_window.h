#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_


#include <QtWidgets/QMainWindow>
#include "../qIRC_autogen/include/ui_main_window.h"


class MainWindow : public QMainWindow, public Ui::MainWindow {
    Q_OBJECT


public:
    MainWindow();
    ~MainWindow() override;

    int main_window_width{};
    int network_tree_width{};
    int nick_list_width{};
    int center_output_width{};
	QList<int> splitter_sizes;
private:
	void restore_splitter_ratio();
};


#endif
