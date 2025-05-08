/*
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label("<center>Qt в CLion работает!<br> Это окно доказывает данный факт !</center>");
    label.setMinimumSize(300, 200);
    label.show();

    return app.exec();
}
*/

#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTimer>  // Для таймера

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;                          // Главное окно
    QVBoxLayout layout(&window);             // Вертикальное расположение элементов

    QLabel label("Нажми кнопку!");           // Метка
    QPushButton button("Жми сюда!");         // Кнопка

    QObject::connect(&button, &QPushButton::clicked, [&]() {
        label.setText("Qt — это мощно! 💪");  // Меняем текст метки

        // Создаём таймер на 5 секунд
        QTimer::singleShot(5000, &window, [&window]() {
            window.close();  // Закрываем окно
        });
    });

    layout.addWidget(&label);                // Добавляем элементы в layout
    layout.addWidget(&button);

    window.resize(300, 150);
    window.setWindowTitle("Qt Таймер");      // Добавим заголовок окна
    window.show();

    return app.exec();
}
