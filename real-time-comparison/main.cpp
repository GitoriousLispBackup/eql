#include <QtGui>
#include <iostream>

int main(int argc, char** argv)
{
    if(argc == 2) {
        QApplication app(argc, argv);
        int repeat = QCoreApplication::arguments().at(1).toInt();
        QTableWidget* table = new QTableWidget(1000, 1);
        QTime start = QTime::currentTime();
        for(int n = 0; n < repeat; ++n) {
            for(int i = 0; i < 1000; ++i) {
                table->setItem(i, 0, new QTableWidgetItem("X")); }
            table->clear(); }
        std::cout << start.msecsTo(QTime::currentTime()) << std::endl; }
    else {
        std::cout << "Please pass a number." << std::endl; }

    return 0;
}

