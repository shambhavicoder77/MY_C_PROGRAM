#include <stdio.h>
int isPassed(int m1, int m2, int m3) {
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1; 
    else
        return 0;  
}
int main() {
    int sub1, sub2, sub3;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    avg = (sub1 + sub2 + sub3) / 3.0;
    printf("Average Marks = %.2f\n", avg);
    if (isPassed(sub1, sub2, sub3)) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }
    return 0;
}
o/p
Enter marks of three subjects: 90
100
95
Average Marks = 95.00
Result: Passed
