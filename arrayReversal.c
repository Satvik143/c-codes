#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    int a = 0, b = num - 1, temp = 0;
    for(int j = 0; j < num / 2; j++) {
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a ++;
        b --;
    }
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}