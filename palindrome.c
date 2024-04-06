#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(int len,char word[]) {
    int j = len -1;
    int count = 0;
    for (int i = 0; i < len/2; i++) {
        if (word[i] == word[j]) {
            count++;
        }
        j--;
    }
    if (count >= len/2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    char* word = "madam";
    int len = strlen(word);
    bool result = isPalindrome(len, word);
    printf("%d", result);
}