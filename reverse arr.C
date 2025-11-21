#include<stdio.h>
#include<stdlib.h>
int main () {
    int arr[100],n=5;
    printf("enter %d elements:\n",n);
    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
    }
    printf("revarse the array:\n");
    for(int i=n-1;i=0;i--) {
        printf("%d",arr[i]);
    }
    }
o/p
enter 5 elements:
1
2
3
4
5
revarse the array:
