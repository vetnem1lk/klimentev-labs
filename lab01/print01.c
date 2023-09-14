#include "print01.h"

void printVerySimpleTask() {
    double a, b, c, p, L;

    a = inputDoubleArg("длину стороны A");
    b = inputDoubleArg("длину стороны B");
    c = inputDoubleArg("длину стороны C");
    bool canExistTriangle = a + b > c && a + c > b && b + c > a;

    while (!canExistTriangle) {
        printf("Треугольник с такими сторонами нельзя построить.\n");
        a = inputDoubleArg("длину стороны A");
        b = inputDoubleArg("длину стороны B");
        c = inputDoubleArg("длину стороны C");
        canExistTriangle = a + b > c && a + c > b && b + c > a;
    }

    // Вычисляем полупериметр
    p = (a + b + c) / 2;

    // Вычисляем длину биссектрисы
    L = 2 * sqrt(a * b * p * (p - c)) / (a + b);

    printf("Длина биссектрисы L: %lf\n", L);

}

void printSimpleTask() {
    double X, Y, A, B;
    X = inputDoubleArg("количество килограмм шоколадных конфет (X)");
    A = inputDoubleArg("стоимость шоколадных конфет (A)");
    Y = inputDoubleArg("количество килограмм ирисок (Y)");
    B = inputDoubleArg("стоимость ирисок (B)");

    // Вычисляем стоимость 1 кг шоколадных конфет
    double costPerKgChocolates = A / X;

    // Вычисляем стоимость 1 кг ирисок
    double costPerKgCandies = B / Y;

    // Вычисляем во сколько раз шоколадные конфеты дороже ирисок
    double ratio = costPerKgChocolates / costPerKgCandies;

    // Выводим результаты
    printf("Стоимость 1 кг шоколадных конфет: %.2lf рублей\n", costPerKgChocolates);
    printf("Стоимость 1 кг ирисок: %.2lf рублей\n", costPerKgCandies);

    if (costPerKgChocolates < costPerKgCandies) {
        printf("Шоколадные конфеты дешевле ирисок в %.2lf раз(а)\n", 1 / ratio);
    } else if (costPerKgChocolates > costPerKgCandies) {
        printf("Ириски дешевле шоколадных конфет в %.2lf раз(а)\n", ratio);
    } else {
        printf("Шоколадные конфеты и ириски стоят одинаково.\n");
    }
}
