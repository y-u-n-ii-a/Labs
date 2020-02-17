//
// Created by yuniia on 17.02.2020.
//

#include "iostream"
#include "Triangle.h"
#include "main_service.h"

using namespace std;

void greeting() {
    cout << "Выберите операцию: " << endl;
    cout << "\t1 - Увеличение/уменьшение размера угла на заданное количество процентов" << endl;
    cout << "\t2 - Определение вида треугольника по числу равных сторон" << endl;
    cout << "\t3 - Определение расстояния между центрами вписаной и описаной окружностей" << endl;
    cout << "\t4 - Определение значений углов" << endl;
}

void chooseOperation(Triangle& triangle, int operation) {

    switch (operation) {
        case 1:
            changeAndPrintAngleAB(triangle);
            break;
        case 2:
            printTypeOfTriangle(triangle);
            break;
        case 3:
            printDistanceBetweenCentres(triangle);
            break;
        case 4:
            printAngles(triangle);
            break;
        default:
            cout << "Выберите существующую операцию!" << endl;
            break;
    }

}

void changeAndPrintAngleAB(Triangle& triangle) {
    cout << "Введите кол-во процентов (0-1): ";
    float percent;
    cin >> percent;

    triangle.changeAngleAB(percent);

    cout << "\nТеперь угол A^B = " << triangle.getAngleAB() << '\n' << endl;
}

void printTypeOfTriangle(Triangle triangle) {
    cout << "\nТип треугольника: " << triangle.getTypeBySides() << '\n' << endl;
}

void printDistanceBetweenCentres(Triangle triangle) {
    cout << "\nРасстояние между центрами вписаной и описаной окружностей: " << triangle.getDistanceBetweenCentres()
         << '\n' << endl;
}

void printAngles(Triangle triangle) {
    cout << "\nУгол A^B = " << triangle.getAngleAB() << endl;
    cout << "Угол B^C = " << triangle.getAngleBC() << endl;
    cout << "Угол A^C = " << triangle.getAngleAC() << '\n' << endl;
}
