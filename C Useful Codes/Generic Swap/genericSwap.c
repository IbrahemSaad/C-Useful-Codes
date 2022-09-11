/*
    * File: genericSwap.c
    * Description: This source file contains the definition of the 
      genericSwap function.
      The function takes two operands (op1, op2) whatever the types
      of them which may be int, float, double, char, or even structs,
      unions beacuase it depends on making copies from the block of memory
      allocated for op1 or op2 directly.
    * Date modified: 11/9/2022
    * Author: Eng/ Ibrahim Saad
    * Version: 1.0
*/
#include"genericSwap.h"

void genericSwap(void* op1, void* op2, size_t size){
    void* temp = malloc(size);
    memcpy(temp, op1, size);
    memcpy(op1, op2, size);
    memcpy(op2, temp, size);
    free(temp);
}