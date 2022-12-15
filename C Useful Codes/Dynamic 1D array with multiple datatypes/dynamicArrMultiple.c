#include"dynamicArrMultiple.h"

union types
{
    int iData;
    float fData;
    double dData;
    char cData;
    char* strData;
};
typedef struct arrayData{
    union types typeData;
    Datatype dtype;
}arrayData;
struct DynArrMultiple
{
    arrayData* dataArr;
    int length;
};
DynArrMultiple createDynArrMultiple(){
    DynArrMultiple arr = malloc(sizeof(DynArrMultiple));
    arr->dataArr = NULL;
    arr->length = 0;
    return arr;
}
void addNewElement(DynArrMultiple arr, Datatype type, void* data){
    arr->length++;
    if(arr->dataArr == NULL)
        arr->dataArr = malloc(sizeof(arrayData));
    else
        arr->dataArr = realloc(arr->dataArr, arr->length * sizeof(arrayData));
    int index = arr->length - 1;
    switch (type)
    {
        case DATA_INT:
            arr->dataArr[index].dtype = type;
            arr->dataArr[index].typeData.iData = *((int*) data);
            break;
        case DATA_FLOAT:
            arr->dataArr[index].dtype = type;
            arr->dataArr[index].typeData.fData = *((float*) data);
            break;
        case DATA_DOUBLE:
            arr->dataArr[index].dtype = type;
            arr->dataArr[index].typeData.dData = *((double*) data);
            break;
        case DATA_CHAR:
            arr->dataArr[index].dtype = type;
            arr->dataArr[index].typeData.cData = *((char*) data);
            break;
        case DATA_STR:
            arr->dataArr[index].dtype = type;
            arr->dataArr[index].typeData.strData = *((char**) data);
            break;
        default:
            arr->dataArr[index].dtype = DATA_INT;
            arr->dataArr->typeData.iData = *((int*) data);
    }
}
void* getElement(DynArrMultiple arr, int index){
    if(arr->dataArr != NULL){
        void* data;
        switch (arr->dataArr->dtype)
        {
            case DATA_INT:
                data = malloc(sizeof(int));
                *((int*) data) = arr->dataArr[index].typeData.iData;
                return data;
            case DATA_FLOAT:
                data = malloc(sizeof(float));
                *((float*) data) = arr->dataArr[index].typeData.fData;
                return data;
            case DATA_DOUBLE:
                data = malloc(sizeof(double));
                *((double*) data) = arr->dataArr[index].typeData.dData;
                return data;
            case DATA_CHAR:
                data = malloc(sizeof(char));
                *((char*) data) = arr->dataArr[index].typeData.cData;
                return data;
            case DATA_STR:
                data = malloc(sizeof(char*));
                *((char**) data) = arr->dataArr[index].typeData.strData;
                return data;
            default:
                data = malloc(sizeof(int));
                *((int*) data) = arr->dataArr[index].typeData.iData;
                return data;
        }
    }
}
void printArr(DynArrMultiple arr){
    if(arr->dataArr != NULL){
        int i;
        for(i = 0; i < arr->length; i++){
        }
    }
}
Boolean searchItem(DynArrMultiple arr, Datatype type, void* data){
    if (arr->dataArr != NULL){
        int i;
        for(i = 0; i < arr->length; i++){
            if(arr->dataArr[i].dtype == type){
                switch(arr->dataArr[i].dtype){
                    case DATA_INT:
                        if(arr->dataArr[i].typeData.iData == *((int*) data))
                            return TRUE;
                    case DATA_FLOAT:
                        if(arr->dataArr[i].typeData.fData == *((float*) data))
                            return TRUE;
                    case DATA_DOUBLE:
                        if(arr->dataArr[i].typeData.dData == *((double*) data))
                            return TRUE;
                    case DATA_CHAR:
                        if(arr->dataArr[i].typeData.cData == *((char*) data))
                            return TRUE;
                    default:
                        if(arr->dataArr[i].typeData.iData == *((int*) data))
                            return TRUE;
                }
            }
        }
        return FALSE;
    }
    return FALSE;
}
int sreachItemReturnIndx(DynArrMultiple arr,Datatype type, void* data){}
void deleteDynamicArr(DynArrMultiple arr){
    free(arr->dataArr);
    free(arr);
    arr = NULL;
}