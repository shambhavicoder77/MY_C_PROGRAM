     return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = largest(num1, num2, num3);

    printf("The largest number is: %d\n", max);

    return 0;
}
o/p
Enter three numbers: 10
20
5
The largest number is: 20
