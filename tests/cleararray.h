#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

TEST(cleararray, num0) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = 1;
        }
    }
    cleararray(field);
    int flag = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) flag = 1;
        }
    }
    if(flag == 1)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}


#endif // FIBONACHI_H
