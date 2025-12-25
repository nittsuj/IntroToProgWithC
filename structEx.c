#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CollegeStudent {
    char name[25];
    int age;
    char phone[15];
} CS;

int function(CS *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i].name);
        printf("%d\n", arr[i].age);
        printf("%s\n", arr[i].phone);
    }
    printf("\n");
}

int main() {
    CS *arr = (CS*) malloc(sizeof(CS) * 5);
    
    if (arr == NULL) {
        perror("error");
        return EXIT_FAILURE;
    }

    int n = 0;
    scanf("%d", &n);
    while (getchar() != '\n'); 
    for (int i = 0; i < n; i++) {
    }

    function(arr, n);
    free(arr);
    return EXIT_SUCCESS;
}