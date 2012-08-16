#include <QtGui>
#include <iostream>

int main(int argc, char** argv)
{
    if(argc == 2) {
        QApplication app(argc, argv);
        int size = QCoreApplication::arguments().at(1).toInt();
        QTime start = QTime::currentTime();
        QTableWidget* table = new QTableWidget(size, 1);
        for(int i = 0; i < size; ++i) {
            table->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1))); }
        std::cout << start.msecsTo(QTime::currentTime()) << std::endl; }
    else {
        std::cout << "Please pass a number." << std::endl; }

    return 0;
}

