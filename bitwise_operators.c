#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.  
    int maxAnd =0;
    int maxOr = 0;
    int maxXor = 0;
    int ans = 0;
    int ans1 = 0;
    int ans2 = 0;
    
    for (int i = 1; i <= n; i++){
        int a = i;
        for (int j = i + 1; j <= n; j++){
            int b = j;
            //printf("a = %d, b = %d; ", a, b);
            ans = a & b;
            //printf("a & b = %d; ", ans);
            if (ans > maxAnd && ans < k) {
                maxAnd = ans;
            }
            ans1 = a | b;
            //printf("a | b = %d; ", ans1);
            if (ans1 > maxOr && ans1 < k) {
                maxOr = ans1;
            }
            ans2 = a ^ b;
            //printf("a ^ b = %d;\n", ans2);
            if (ans2 > maxXor && ans2 < k) {
                maxXor = ans2;
            }
        }
    }
    printf("%d\n", maxAnd);
    printf("%d\n", maxOr);
    printf("%d\n", maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
