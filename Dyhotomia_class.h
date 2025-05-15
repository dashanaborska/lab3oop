#ifndef ROOTFINDING_CLASS_H
#define ROOTFINDING_CLASS_H

class Dyhotomia_class {
public:
    Dyhotomia_class(void);  //конструктор
    ~Dyhotomia_class(void); //деструктор
    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    int count(double& x);

private: // використовуються всередин6і класу
    double a;
    double b;
    double eps;
    double f(double x);
};

class Newton_class {
public:
    Newton_class(void);
    ~Newton_class(void);
    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    int count_newton(double& x);

private:
    double a;
    double b;
    double eps;
    double f(double x);
    double df(double x);
};

#endif#pragma once
