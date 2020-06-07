#include "main_window.h"


// Constructor
MainWindow::MainWindow() {
    setupUi(this);
    restore_splitter_ratio();
    initialize_screen_name();
}


// Destructor
MainWindow::~MainWindow() = default;


// Restore default splitter ratio
void MainWindow::restore_splitter_ratio() {
	main_window_width = this->size().width();
	network_tree_width = main_window_width * 7/40;
	nick_list_width = main_window_width * 7/40;
	center_output_width = main_window_width * 26/40;

	splitter_sizes << network_tree_width
				   << center_output_width
				   << nick_list_width;
	splitter->setSizes(splitter_sizes);
}


// Initialize screen name
void MainWindow::initialize_screen_name() {
	QRandomGenerator random_generator;
	screen_name = "qIRC-" + QString::number(random_generator.generate() % 10000);
	edit_screen_name_button->setText(this->screen_name);
}
