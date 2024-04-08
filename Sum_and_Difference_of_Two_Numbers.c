#include <stdio.h>

int main() {
    int i1, i2;
    float f1, f2;
    scanf("%d %d\n", &i1, &i2);
    scanf("%f %f", &f1, &f2);
    printf("%d %d", i1 + i2, i1 - i2);
    printf("%f %f", f1 + f2, i1 - i2);
}