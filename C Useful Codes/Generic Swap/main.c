/*
    * File: main.c
    * Description: This source file is written to test the generic the
      genericSwap function
      Testing is done for integers, floating point numbers, characters, and
      structs
    * Date modified: 11/9/2022
    * Author: Eng/ Ibrahim Saad
    * Version: 1.0
*/
#include"genericSwap.h"

typedef struct Point{
    int x,y;
}Point;
int main(){
    int x = 4, y = 5;
    char c1 = 'A', c2 = 'B';
    float f1 = 12.5, f2 = 0.5;
    Point point1 = {44, 56};
    Point point2 = {100, 75};
    printf("Swap intergers\n======================\n");
    printf("Before: x = %d, y = %d \n", x, y);
    genericSwap(&x, &y, sizeof(x));
    printf("After: x = %d, y = %d \n", x, y);
    printf("Swap characters\n======================\n");
    printf("Before: x = %c, y = %c \n", c1, c2);
    genericSwap(&c1, &c2, sizeof(c1));
    printf("After: x = %c, y = %c \n", c1, c2);
    printf("Swap two float\n======================\n");
    printf("Before: x = %f, y = %f \n", f1, f2);
    genericSwap(&f1, &f2, sizeof(f1));
    printf("After: x = %f, y = %f \n", f1, f2);
    printf("Swap structs\n======================\n");
    printf("Before: point1 [x = %d, y = %d], point2 [x = %d, y = %d] \n", point1.x, point1.y, point2.x, point2.y);
    genericSwap(&point1, &point2, sizeof(point1));
    printf("Before: point1 [x = %d, y = %d], point2 [x = %d, y = %d] \n", point1.x, point1.y, point2.x, point2.y);
    return 0;
}