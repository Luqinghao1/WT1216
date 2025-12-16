#include "modelwidget3.h"
#include "ui_modelwidget3.h"

ModelWidget3::ModelWidget3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModelWidget3)
{
    ui->setupUi(this);
}

ModelWidget3::~ModelWidget3()
{
    delete ui;
}

ModelCurveData ModelWidget3::calculateTheoreticalCurve(const QMap<QString, double>& params,
                                                       const QVector<double>& providedTime)
{
    return std::make_tuple(QVector<double>(), QVector<double>(), QVector<double>());
}
