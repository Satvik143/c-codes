#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char input[255];
    printf("Enter a word : ");
    scanf_s("%s", &input);

    int len = strlen(input);

    printf("\nlength of %s is %d letters\n", input, len);

    int i = 0;
   
    int occurance[26]={0};
        
    while (i < len) {
        int ascii = (int)input[i];
        int index = ascii % 'a';
        occurance[index]+=1;
        i++;
    }  
    i = 0;
    while (i < 26) {
        if (occurance[i] > 0){
        int count = occurance[i];
        char alpha = i+'a';
        printf("Char:%c--> %d\n",alpha,count);
        }
         i++;
    } 
}