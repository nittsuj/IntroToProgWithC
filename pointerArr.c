#include <stdio.h>
int main() {
    int arr[45] ={0};   // if you let your array be empty brackets, it will lead you
                        // to smashing detected : terminated aborted

    for (int i = 0; i < 5; i++) {
        //scanf("%d", &arr[i]);
        scanf("%d", arr+i);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(arr+i));
        //printf("%d\n", arr[i]);
    }
    printf("\n");
    return 0;
}