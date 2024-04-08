#include <stdio.h>
#include <string.h>

int main() {
    char* fruits[3] = {"apple", "banana", "cherries"};
    int count = 0;
    int ttl_count = 0;
    for (int i = 0; i < 3; i++) {
        count = 0;
        for (int j = 0; j < strlen(fruits[i]); j++) {
            if (fruits[i][j] == 'a' || fruits[i][j] == 'e' || fruits[i][j] == 'i' || fruits[i][j] == 'o' || fruits[i][j] == 'u') {
                count++;
            }
        }
        printf("%s has %d vowels in it\n", fruits[i], count);
        ttl_count += count;
    }
    printf("fruits array has a total of %d vowels in it\n",ttl_count);
}