//
// Created by yuniia on 17.02.2020.
//

#include "Triangle.h"
#include <cmath>

// Constructors
Triangle::Triangle() {
    a = 0;
    b = 0;
    angleAB = 0;
}

Triangle::Triangle(double a, double b, double angleAB) {
    this->a = a;
    this->b = b;
    this->angleAB = fmod(angleAB, 360);
}

Triangle::Triangle(const Triangle& triangle) {
    this->a = triangle.a;
    this->b = triangle.b;
    this->angleAB = triangle.angleAB;
}

// Getters and setters
double Triangle::getA(){
    return a;
}

double Triangle::getB() {
    return b;
}

double Triangle::getC() {
    return sqrt(a * a + b * b - 2 * a * b * cos(angleAB * M_PI / 180));
}

void Triangle:: setA(double a) {
    this->a = a;
}

void Triangle:: setB(double b) {
    this->b = b;
}

void Triangle:: setAngleAB(double angleAB) {
    this->angleAB = fmod(angleAB, 360);
}

double Triangle::getAngleAB() {
    return angleAB;
}

double Triangle::getAngleAC() {
    double c = getC();
    return (acos((a * a + c * c - b * b) / (2 * a * c))) * 180 / M_PI;
}

double Triangle::getAngleBC() {
    double c = getC();
    return (acos((c * c + b * b - a * a) / (2 * b * c))) * 180 / M_PI;
}

double Triangle::getPerimeter() {
    return a + b + getC();
}

double Triangle::getRadiusCircumscribedCircle() {
    return getC() / (2 * sin(angleAB * M_PI / 180));
}

double Triangle::getRadiusInscribedCircle() {
    double p = getPerimeter() / 2;
    double c = getC();

    return sqrt((p - a) * (p - b) * (p - c) / p);
}

void Triangle::changeAngleAB(float percent) {
    this->angleAB += this->angleAB * percent;
}

std::string Triangle::getTypeBySides() {
    double c = getC();
    if (a == b && b == c)
        return "Равносторонний";
    else if (a == b || b == c || a == c)
        return "Равнобедренный";
    else
        return "Разносторонний";
}

double Triangle::getDistanceBetweenCentres() {
    double R = getRadiusCircumscribedCircle();
    double r = getRadiusInscribedCircle();

    return sqrt(R * R - 2 * R * r);
}