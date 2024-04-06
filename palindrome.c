//imports standard input - output functions
#include<stdio.h>
//imports string related functions
#include<string.h>
//imports boolean values
#include<stdbool.h>

//this is a function which returns true or false depending if the word is a palindrome
bool isPalindrome(int len,char word[]) {
    //j is the index from right to left
    int j = len -1;
    //count of the letters which are same from both directions
    int count = 0;
    //i increments till middle of the word
    for (int i = 0; i < len/2; i++) {
        //checks if index i of word is equal to index j of word
        if (word[i] == word[j]) {
            //if yes, the count var will increment
            count++;
        }
        //j decrements till its value is equal to i
        j--;
    }
    //this code determinds if the word is a palindrome or not
    if (count >= len/2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    //declares string variable with value "madam"
    char* word = "madam";
    //length of the word
    int len = strlen(word);
    //stores the returned output from the function into a boolean var called result
    bool result = isPalindrome(len, word);
    //prints 1 for true and 0 for false
    printf("%d", result);
}