#include <stdio.h>

void BubSort(int r[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (r[j] < r[j-1]) {
                int temp = r[j];
                r[j] = r[j-1];
                r[j-1] = temp;
            }
        }
    }    
}

int main() {
    int r[8] = {8,2,4,5,1,3,7,6};
    BubSort(r, 8);
    for(int i =0; i<8;i++){
        printf("%d ",r[i]);
    }
}