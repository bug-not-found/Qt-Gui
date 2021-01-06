#include "marqueelabel.h"

MarqueeLabel::MarqueeLabel(QWidget *parent) :
    QLabel(parent)
{
    m_display_text = " ";
    startTimer(100);
}


void MarqueeLabel::Add(QString text)
{
    QString pad(8, ' ');
    m_display_text+=text+pad;
}

void MarqueeLabel::Clear()
{
    m_display_text.clear();
}
void MarqueeLabel::timerEvent(QTimerEvent *event)
{
        if(!m_display_text.isEmpty())
        {
                m_text_pos = ++m_text_pos % m_display_text.length();
                setText(m_display_text.mid(m_text_pos).append(m_display_text.left(m_text_pos)));
        }
        else
        {
               setText("");
         }
}
