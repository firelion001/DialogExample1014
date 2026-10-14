#ifndef BYTERCONVERTER_H
#define BYTERCONVERTER_H

#include <QDialog>
class QLineEdit;
class ByterConverter : public QDialog
{
    Q_OBJECT

public:
    explicit ByterConverter(QWidget *parent = nullptr);
    ~ByterConverter() override;

private:
    QLineEdit* decEdit;
    QLineEdit* hexEdit;
    QLineEdit* binEdit;

private slots:
    void decChanged(const QString&);
    void hexChanged(const QString&);
    void binChanged(const QString&);
};
#endif // BYTERCONVERTER_H
