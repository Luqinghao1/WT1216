#ifndef MODELWIDGET3_H
#define MODELWIDGET3_H

#include <QWidget>
#include <QMap>
#include <QVector>
#include <tuple>

typedef std::tuple<QVector<double>, QVector<double>, QVector<double>> ModelCurveData;

namespace Ui {
class ModelWidget3;
}

class ModelWidget3 : public QWidget
{
    Q_OBJECT

public:
    explicit ModelWidget3(QWidget *parent = nullptr);
    ~ModelWidget3();

    ModelCurveData calculateTheoreticalCurve(const QMap<QString, double>& params,
                                             const QVector<double>& providedTime = QVector<double>());

private:
    Ui::ModelWidget3 *ui;
};

#endif // MODELWIDGET3_H
