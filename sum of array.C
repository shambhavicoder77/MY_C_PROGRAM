#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

o/p
Enter the number of elements in the array: 5
Enter 5 elements:
1
2
3
4
5
Sum of array elements = 15
