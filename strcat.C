#include<stdio.h>
#include<string.h>
int main() {
    char veena[10];
    printf("enter your string\n");
    scanf("%s",&veena);
    printf("%s",&veena);
    strcat(veena,"legend\n");
    printf("%s",veena);
}
o/p
enter your string
veena
veenaveenalegend
