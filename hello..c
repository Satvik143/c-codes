#include<stdio.h>

int main()
{
    char ch, s[100], sen[100];
    scanf_s("%c", &ch);
    scanf_s("%s", &s);
    scanf("\n");
    scanf_s("%[^\n]%*c", &sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
}