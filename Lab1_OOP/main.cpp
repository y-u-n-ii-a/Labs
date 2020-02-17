#include <iostream>
#include "Triangle.h"
#include "main_service.h"

using namespace std;

int main() {
    int operation = 0;
    Triangle triangle = Triangle(3, 5, 60);

    while (true) {
        greeting();

        cin >> operation;
        chooseOperation(triangle, operation);
    }
}