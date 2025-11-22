#include <stdio.h>
int main() {
    int n, i, key, low, high, mid;
    int id[100];
    printf("Enter number of books: ");
    scanf("%d", &n);
    printf("Enter Book IDs (ascending order):\n");
    for(i = 0; i < n; i++)
    scanf("%d", &id[i]);
    printf("Enter Book ID to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(low <= high) {
    mid = (low + high) / 2;
    if(id[mid] == key) {
    printf("Book ID %d is AVAILABLE.\n", key);
    return 0;
    }
        else if(key > id[mid])
        low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Book ID %d is NOT AVAILABLE.\n", key);
    return 0;
}

o/p
Enter number of books: 2
Enter Book IDs (ascending order):
4
5
Enter Book ID to search: 9
Book ID 9 is NOT AVAILABLE.

