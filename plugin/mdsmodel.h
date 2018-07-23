#ifndef MDSMODEL_H
#define MDSMODEL_H

#include <QObject>
#include <QVariantList>

class MDSModel : public QObject {
    Q_OBJECT

public:
    MDSModel(QObject* parent = nullptr);

    Q_INVOKABLE QVariantList getDesktopNames() const;
    Q_INVOKABLE QVariant getActiveDesktopNumber() const;

    Q_INVOKABLE void switchToDesktop(int desktopNumber);

signals:
    void desktopChanged();
};

#endif // MDSMODEL_H