#include <QApplication>
#include <QPushButton>
#include <QDeclarativeView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

	QDeclarativeView view;
	view.setSource(QUrl::fromLocalFile("qmlvs.qml"));
	view.show();

    return app.exec();
}
