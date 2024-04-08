#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int ones = (n % 10)/1;
    int tens = ((n % 100) - ones)/10;
    int hund = ((n % 1000) - tens)/100;
    int thou = ((n % 10000) - hund)/1000;
    int tenThou = ((n % 100000) - thou)/10000;
    int sum = ones + tens + hund + thou + tenThou;
    printf("%d", sum);
    return 0;
}