#include<stdio.h>
int main() {
    struct shambhu {
        int age;
        float mark;
    };
    struct shambhu gowda[3];
    for(int i=0;i<3;i++) {
        printf("enter age and mark\n");
        scanf("%d %f",&gowda[i].age,&gowda[i].mark);
    }
}
o/p
enter age and mark
18
97
enter age and mark
20
95
enter age and mark
15
96
