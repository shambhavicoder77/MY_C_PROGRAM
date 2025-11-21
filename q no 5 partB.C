 #include <stdio.h>
void simulate(float a, float b) {   
    float t = a; a = b; b = t;
    printf("\nSimulation:\nA = %.2f  B = %.2f", a, b);
}
void update(float *a, float *b) {   
    float t = *a; *a = *b; *b = t;
    printf("\nActual Update:\nA = %.2f  B = %.2f", *a, *b);
}
int main() {
    float A, B;
    printf("Enter A and B: ");
    scanf("%f %f", &A, &B);
    simulate(A, B); 
    update(&A, &B);          
    return 0;
}
o/p
Enter A and B: 2 3
Simulation:
A = 3.00  B = 2.00
Actual Update:
A = 3.00  B = 2.00
