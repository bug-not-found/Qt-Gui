#ifndef MARQUEELABEL_H
#define MARQUEELABEL_H

#include <QLabel>
#include<QString>
#include<QTimerEvent>
#include<QPainter>
#include<QFont>

class MarqueeLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MarqueeLabel(QWidget *parent = 0);

    void Add(QString text);
    void Clear();

protected:
    void timerEvent(QTimerEvent *event) ;
private:
    QString m_display_text;
    int m_text_pos;

};

#endif // MARQUEELABEL_H
