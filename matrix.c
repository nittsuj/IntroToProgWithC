#include <stdio.h>

void matrixArr(int x, int y) {
    int count = 0,
        matrix[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = i; j < y; j++) {
            matrix[x][y] = count++;
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }
}

int main()  {
    int x = 0, y = 0,
        count = 0;
    scanf("%d %d", &x, &y);

    int matrix[x][y]; // should not initialize the variable before scanning the x and y
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            //matrix[i][j] = ++count; // this would let the count = 1, not count = 0 and the next count would be 1
        }        
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            //printf("%d ", matrix[i][j]);
            //printf("%d ", i);
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");
    matrixArr(x,y);
    return 0;
}

