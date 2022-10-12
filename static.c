#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Enter limit of the text: \n");
    scanf("%d", &size);
    char str[size];
    printf("Enter some text: \n");
    scanf(" ");
    gets(str);
    printf("Inputted text is: %s\n", str);
    return 0;
}