#ifndef SELFTESTUTIL_H
#define SELFTESTUTIL_H

#include <QtCore>
#include <QtGui>
#include <QObject>

class Contest;

class SelfTestUtil : public QObject
{
    Q_OBJECT
public:
    explicit SelfTestUtil(QObject *parent = 0);
    static void clearPath(const QString&);
    static void makeSelfTest(QWidget*, Contest*);
    
signals:
    
public slots:
    
};

#endif // SELFTESTUTIL_H
