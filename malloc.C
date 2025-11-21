#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr=(int*)malloc(5* sizeof(int));
    for(int i=0;i<5;i++) {
        printf("enter element%d;",i+1);
        scanf("%d", &arr[i]);
    }
    printf("array element:\n");
    for(int i=0;i<5;i++) {
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}
o/p
enter element1;1
enter element2;2
enter element3;3
enter element4;4
enter element5;5
array element:
12345
