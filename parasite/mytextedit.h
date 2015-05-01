#ifndef MYTEXTEDIT
#define MYTEXTEDIT



class MyTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    void MyTextEdit::keyPressEvent(QKeyEvent *event)
    {
        if (event->key() == Qt::Key_Return)
        {
            login(); // or rather emit submitted() or something along this way
        }
        else
        {
            QTextEdit::keyPressEvent(event);
        }
    }
};

#endif // MYTEXTEDIT

