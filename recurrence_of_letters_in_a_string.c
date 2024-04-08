#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int finding_func(char arr[],int length,char value) {
    int i = 0;
    while (i < length) {
        if (arr[i] == value) {
            return true;
        };
        i++;
    }

    return false;
}



int main(){
    char input[255];
    printf("Enter a word : ");
    scanf_s("%s", &input);

    int len = strlen(input);

    printf("\nlength of %s is %d letters", input, len);

    int i = 0;
    int j = 0;

    char alphabets[26];
    int occurance[26];
    int alphacount = 0;
    for (int i = 0; i < 26; i++) {
        printf("\nchar= '%c'", alphabets[i]);
    }
    while (i < len) {
        if (finding_func(alphabets, strlen(alphabets), input[i]) && i > 0) {
            alphabets[alphacount] = input[i];
            j = i;
            while (j < len) {
                if (input[j] == alphabets[alphacount]) {
                    occurance[alphacount] += 1;
                }
                j++;
            }
            alphacount += 1; 
        }
        i++;
    }

    for (int i = 0; i < alphacount; i++) {
        printf("\n%c has occured %d time/s", alphabets[i], occurance[i]);
    }


}