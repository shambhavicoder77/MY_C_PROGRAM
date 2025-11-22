#include<stdio.h>
int main() {
    int b,p;
    printf("branches:");
    scanf("%d",&b);
    printf("products:");
    scanf("%d",&p);
    int ship[b][p];
    float rev[p],total[b];
    for(int i=0;i<b;i++)
    for(int j=0;j<p;j++) {
        printf("branches %d products %d units:",i+1,j+1);
        scanf("%d",&ship[i][j]);
    }
    for(int j=0;j<p,j++;) {
        printf("revenue per unit(product %d):",j+1);
        scanf("%f",&rev[j]);
    }
    for(int i=0;i<b;i++) {
        total[i]=0;
        for(int j=0;j<p;j++)
        total[i]+=ship[i][j]*rev[j];
        printf("branch %d revenue:$%.2f\n",i+1,total[i]);
    }
    return 0;
}
o/p
branches:revenue
