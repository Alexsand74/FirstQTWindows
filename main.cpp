#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label("<center>Qt в CLion работает!<br> Это окно доказывает данный факт !</center>");
    label.setMinimumSize(300, 200);
    label.show();

    return app.exec();
}
