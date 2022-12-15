#include"dynamicArrMultiple.h"

int main(){
    DynArrMultiple arr = createDynArrMultiple();
    int x = 125;
    addNewElement(arr, DATA_INT, &x);
    addNewElement(arr, DATA_INT, &x);
    float y = 99.102345;
    addNewElement(arr, DATA_FLOAT, &y);
    printf("X (int) is: %d\n", *((int*) getElement(arr, 0)));
    printf("X (int) is: %d\n", *((int*) getElement(arr, 1)));
    printf("Y (float) is: %f\n", *((float*) getElement(arr, 2)));
    char c = 'c';
    addNewElement(arr, DATA_CHAR, &c);
    printf("C (char) is: %c\n", *((char*) getElement(arr, 3)));
    char* str = "String From Dynamic Array";
    addNewElement(arr, DATA_STR, &str);
    printf("str (str) is: %s\n", *((char**) getElement(arr, 4)));
    double d = 1223.543;
    addNewElement(arr, DATA_DOUBLE, &d);
    printf("d (double) is: %lf\n", *((double*) getElement(arr, 5)));

    deleteDynamicArr(arr);
    return 0;
}