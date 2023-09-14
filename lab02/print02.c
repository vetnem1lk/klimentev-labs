#include "print02.h"

void printConditionalOperatorTask() {
    int a, b, c;
    a = inputIntArg("Длину стороны A");
    b = inputIntArg("Длину стороны B");
    c = inputIntArg("Длину стороны C");

    // Проверка условия неравенства треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Определение типа треугольника
        if (a == b && b == c) {
            printf("Треугольник равносторонний.\n");
        } else if (a == b || a == c || b == c) {
            printf("Треугольник равнобедренный.\n");
        } else {
            printf("Треугольник разносторонний.\n");
        }
    } else {
        printf("Треугольник с такими сторонами невозможен.\n");
    }
}

void printSelectionOperatorTask() {
    int num;
    num = inputIntArg("целое число от 10 до 40");

    // Проверка на соответствие диапазону
    if (num < 10 || num > 40) {
        printf("Число не находится в диапазоне от 10 до 40.\n");
    } else {
        printf("Описание количества заданий: ");

        // Разбираем разряды числа
        int units = num % 10;
        int tens = num / 10;

        switch (tens) {
            case 1:
                switch (units) {
                    case 0:
                        printf("десять ");
                        break;
                    case 1:
                        printf("одиннадцать ");
                        break;
                    case 2:
                        printf("двенадцать ");
                        break;
                    case 3:
                        printf("тринадцать ");
                        break;
                    case 4:
                        printf("четырнадцать ");
                        break;
                    case 5:
                        printf("пятнадцать ");
                        break;
                    case 6:
                        printf("шестнадцать ");
                        break;
                    case 7:
                        printf("семнадцать ");
                        break;
                    case 8:
                        printf("восемнадцать ");
                        break;
                    case 9:
                        printf("девятнадцать ");
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                printf("двадцать ");
                break;
            case 3:
                printf("тридцать ");
                break;
            case 4:
                printf("сорок ");
                break;
            default:
                break;
        }

        // Обработка единиц
        if (tens != 1) {
            switch (units) {
                case 1:
                    printf("одно учебное задание\n");
                    break;
                case 2:
                    printf("два учебных задания\n");
                    break;
                case 3:
                    printf("три учебных задания\n");
                    break;
                case 4:
                    printf("четыре учебных задания\n");
                    break;
                case 5:
                    printf("пять учебных заданий\n");
                    break;
                case 6:
                    printf("шесть учебных заданий\n");
                    break;
                case 7:
                    printf("семь учебных заданий\n");
                    break;
                case 8:
                    printf("восемь учебных заданий\n");
                    break;
                case 9:
                    printf("девять учебных заданий\n");
                    break;
                default:
                    printf("учебных заданий\n");
                    break;
            }
        } else {
            printf("учебных заданий\n");
        }
    }
}
