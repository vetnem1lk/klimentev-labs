#ifndef KLIMENTEVLABS_TOOLS_H
#define KLIMENTEVLABS_TOOLS_H

#include <stdio.h>
#include <math.h>

/**
 * @brief Функция для ввода аргумента с плавающей точкой, имя аргумента задается строкой ""
 * @param argsName принимает имя аргумента
 * @return возвращает введенное значение с клавиатуры с плавающей точкой
 */
double inputDoubleArg(const char *argsName);

/**
 * @brief Функция для ввода аргумента целочисленного значения, имя аргумента задается строкой ""
 * @param argsName принимает имя аргумента
 * @return возвращает введенное целочисленное значение с клавиатуры
 */
int inputIntArg(const char *argsName);

#endif //KLIMENTEVLABS_TOOLS_H
