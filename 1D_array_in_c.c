#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 0, sum = 0;
    scanf("%d", &n);
    int a[1000];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}