 #include <stdio.h>
  void swapBalances(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;}
    int main() {
    float balance1, balance2;
    printf("Enter Account Balance 1: ");
    scanf("%f", &balance1);
    printf("Enter Account Balance 2: ");
    scanf("%f", &balance2);
    printf("\nBefore Swapping:\n");
    printf("Balance 1 = %.2f\n", balance1);
    printf("Balance 2 = %.2f\n", balance2);
    swapBalances(&balance1, &balance2);
    printf("\nAfter Swapping:\n");
    printf("Balance 1 = %.2f\n", balance1);
    printf("Balance 2 = %.2f\n", balance2);
}

o/p
Enter Account Balance 1: 15000
Enter Account Balance 2: 10000

Before Swapping:
Balance 1 = 15000.00
Balance 2 = 10000.00

After Swapping:
Balance 1 = 10000.00
Balance 2 = 15000.00
