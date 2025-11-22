#include<stdio.h>
struct book {
    char title[50],author[50];
    int year;
};
int main() {
    int n,i;
    struct book b[100];
    printf("number of books:");
    scanf("%d",&n);
    for (i=0,i<n;i++;) {
        printf("\ntitle:");
        scanf("%[\n]",b[i].title);
        printf("author:");
        scanf("%[\n]",b[i].author);
        printf("years:");
        scanf("%d",&b[i].year);
    }
    printf("\n---book list---\n");
    for(i=0;i<n;i++)
    printf("%s|%s|%d\n",b[i].title,b[i].author,b[i].year);
    return 0;
}
