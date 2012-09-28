#include <QtGui>
#include <iostream>

int main(int argc, char** argv)
{
    if(argc == 2) {
        QApplication app(argc, argv);
        int size = QCoreApplication::arguments().at(1).toInt();
        QTableWidget* table = new QTableWidget(size, 1);
        QTime start = QTime::currentTime();
        for(int i = 0; i < size; ++i) {
            table->setItem(i, 0, new QTableWidgetItem("X")); }
        std::cout << start.msecsTo(QTime::currentTime()) << std::endl; }
    else {
        std::cout << "Please pass a number." << std::endl; }

    return 0;
}

