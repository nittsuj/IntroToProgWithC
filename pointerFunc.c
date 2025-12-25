#include <stdio.h>
int add(int x, int y) {
    return x + y;
}

int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divd(int a, int b) {
    if(b!=0)
    return a / b;
    else
    return -1;
}

int function(int *arr) {
    int matrix[26] = {0}, count = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        matrix[i] = count++;
    }
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        return arr[i] = matrix[i];
    }
}

int main() {
    int a = 6, b = 7;
    int (*fptr)(int a, int b);
    
    fptr = &add;

    printf("%d\n", fptr(a,b));


    int (**farr)(int, int) = {add, sub, mul, divd};
    /*for (int i = 0; i < sizeof(farr)/sizeof(farr[0](a,b)); i++) {
        printf("%d\n", farr[i](a,b));
    }*/
    for (int i = 0; i < 4; i++) {
        printf("%d\n", farr[i](a,b));
    }
    int arr[25],
        res = function(arr);
    
    for (int i = 0; i < 25; i++) {
        printf("%d\n", res);
    }
    
    
}