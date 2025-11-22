#include<stdio.h>
enum week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main () {
    enum week today;
    today=Sunday;
    printf("%d",today);
}
