#ifndef CALCULATE_H
#define CALCULATE_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

//Проверка на добавление очков к нулю
TEST(calculate, num0){
    ASSERT_EQ(calculate(0, 8), 8);
    ASSERT_EQ(calculate(0, 2000000), 2000000);
    ASSERT_EQ(calculate(0, 1), 1);
}

//Проверка на добавление нуля очков
TEST(calculate, num1){
    ASSERT_EQ(calculate(10, 0), 10);
    ASSERT_EQ(calculate(38888888, 0), 38888888);
    ASSERT_EQ(calculate(0, 0), 0);
}

//Проверка функции на работу
TEST(calculate, num2){
    ASSERT_EQ(calculate(5, 234), 239);
    ASSERT_EQ(calculate(3, 999999), 1000002);
    ASSERT_EQ(calculate(2, 123), 125);
}

#endif // CALCULATE_H
