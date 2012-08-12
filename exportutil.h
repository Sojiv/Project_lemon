#ifndef EXPORTUTIL_H
#define EXPORTUTIL_H

#include <QtCore>
#include <QtGui>
#include <QObject>

#ifdef Q_OS_WIN32
#include <QAxObject>
#endif

class Contest;
class Contestant;

class ExportUtil : public QObject
{
    Q_OBJECT
public:
    explicit ExportUtil(QObject *parent = 0);
    static void exportResult(QWidget*, Contest*);

private:
    static QString getContestantHtmlCode(Contest*, Contestant*);
    static void exportHtml(QWidget*, Contest*, const QString&);
    static void exportCsv(QWidget*, Contest*, const QString&);
    static void exportXls(QWidget*, Contest*, const QString&);
    
signals:
    
public slots:
    
};

#endif // EXPORTUTIL_H
