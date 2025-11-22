#include<stdio.h>
int main() {
    union shambhu {
        int age;
        float mark;
    };
    union shambhu s;
    s.age=10;
    printf("%d\n",s.age);
    s.mark=10.7;
    printf("%f\n",s.mark);
    printf("%d\n",s.age);
}
