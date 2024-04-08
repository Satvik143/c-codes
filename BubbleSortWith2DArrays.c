#include <stdio.h>

void swap(int r[][4], int j) {
    int temp[4];
    for (int i = 0; i < 4; i++) {
        temp[i] = r[j][i];
    }
    for (int i = 0; i < 4; i++) {
        r[j][i] = r[j-1][i];
        r[j-1][i] = temp[i];
    }
}

void BubSort(int r[][4], int n) {
   for (int i = 0; i < n; i++) {
        for(int j = 1; j < n - i; j++) {
           if (r[j][3] < r[j-1][3]) {
                swap(r, j);
            }
        }
    }
}

int main() {
    int r[][4] = {{1, 2, 3, 67},{2, 3, 4, 2},{5, 6, 7, 5},{8, 9, 10, 27}};
    int size = sizeof(r) / sizeof(r[0]);
    
    printf("%d\n", size);
    
    BubSort(r, size);
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}