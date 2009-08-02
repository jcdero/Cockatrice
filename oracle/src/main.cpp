#include <QApplication>
#include "oracleimporter.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	OracleImporter importer;
	importer.downloadNextFile();
	
	return app.exec();
}
