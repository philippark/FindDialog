#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;


class FindDialog : public QDialog{
    Q_OBJECT;

    public:
        FindDialog(QWidget *parent = 0);

    signals:
        void findNext(const QString &str, Qt::CaseSensitivity cs);
        void findPrevious(const QString &str, Qt::CaseSensitivity cs);
};

#endif // FINDDIALOG_H
