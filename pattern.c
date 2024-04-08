#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int an = n * 2 - 1;
    int n1 = n;
    for (int j = 0; j < an; j++) {
        printf("%d ", n);
    }
    printf("\n");
    for (int i = 1; i < n; i ++) {
        printf("%d ", n);
        n1 = n;
        for(int k = 1; k <= i; k ++) {
            n1 = n1 - 1;
            printf("%d ", n1);
        }
        for(int j = 1; j < n1 * 2 - 1; j ++) {
            printf("%d ", n1);
        }
        for(int h = n1; h != n; h++) {
            printf("%d ", n1 + 1);
            n1 += 1;
        }
        printf("\n");
    }
    for(int i = 1; i < n - 1; i++) {
        n1 = n;
        printf("%d ", n);
        for(int k = n; k != i + 1; k --) {
            n1 = n1 - 1;
            printf("%d ", n1);
        }
        for(int j = 1; j < n1 * 2 - 1; j ++) {
            printf("%d ", n1);
        }
        for(int h = n1; h != n; h++) {
            printf("%d ", n1 + 1);
            n1 += 1;
        }
        printf("\n");
    }
    for (int j = 0; j < an; j++) {
        printf("%d ", n);
    }
    return 0;
}