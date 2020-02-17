//
// Created by yuniia on 17.02.2020.
//

#include <string>

#ifndef LAB1_OOP_TRIANGLE_H
#define LAB1_OOP_TRIANGLE_H


class Triangle {
private:
    double a;
    double b;
    double angleAB;

    double getA();
    double getB();
    double getC();

    double getPerimeter();

    double getRadiusCircumscribedCircle();
    double getRadiusInscribedCircle();

public:
    Triangle();
    Triangle(double a, double b, double angleAB);
    ~Triangle() = default;

    double getAngleAB();
    double getAngleBC();
    double getAngleAC();

    void changeAngleAB(float);
    std::string getTypeBySides();
    double getDistanceBetweenCentres();
};


#endif //LAB1_OOP_TRIANGLE_H
