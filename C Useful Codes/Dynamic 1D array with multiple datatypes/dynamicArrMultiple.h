#ifndef DYNAMICARRMULTIPLE_H
#define DYNAMICARRMULTIPLE_H
#include<stdio.h>
#include<stdlib.h>

struct DynArrMultiple;
enum Datatype;
enum Boolean;
typedef struct DynArrMultiple* DynArrMultiple;
typedef enum Datatype{
    DATA_INT,
    DATA_FLOAT,
    DATA_DOUBLE,
    DATA_CHAR,
    DATA_STR
}Datatype;
typedef enum Boolean{
    FALSE,
    TRUE
}Boolean;

DynArrMultiple createDynArrMultiple();
void addNewElement(DynArrMultiple arr, Datatype type, void* data);
void* getElement(DynArrMultiple arr, int index);
void printArr(DynArrMultiple arr);
Boolean searchItem(DynArrMultiple arr, Datatype type, void* data);
int sreachItemReturnIndx(DynArrMultiple arr,Datatype type, void* data);
void deleteDynamicArr(DynArrMultiple arr);

#endif