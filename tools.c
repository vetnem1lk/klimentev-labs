#include "tools.h"

double inputDoubleArg(const char *argsName) {
    double arg;

    printf("Введите %s:\n", argsName);
    scanf("%lf", &arg);

    return arg;
}

int inputIntArg(const char *argsName) {
    int arg;

    printf("Введите %s:\n", argsName);
    scanf("%d", &arg);

    return arg;
}
