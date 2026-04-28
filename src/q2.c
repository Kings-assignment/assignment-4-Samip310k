// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>

int main (){
char arr[] = "samip";

char *start = arr;
char *end;
int length;

while (*(start+length)!= '\0'){
    length++;
}

printf("%d", length);

    return 0;
}