#include <stdio.h>
int main() {
    int id;
    int PAN = 1111;
    int AADHAR = 2222;
    int APAAR = 3333;
    int DRIVING_LICENSE = 4444;
    int PASSPORT = 5555;
    printf("Enter your Unique Identification Number: ");
    scanf("%d", &id);
    switch (id) {
        case 1111:
            printf("Verified: PAN Number Matched.\n");
            break;
        case 2222:
            printf("Verified: AADHAR Number Matched.\n");
            break;
        case 3333:
            printf("Verified: APAAR ID Matched.\n");
            break;
        case 4444:
            printf("Verified: Driving License Matched.\n");
            break;
        case 5555:
            printf("Verified: Passport Number Matched.\n");
            break;
        default:
            printf("Not Verified: Record Not Found.\n");
    }
    return 0;
}
o/p
Enter your Unique Identification Number: 2222
Verified: AADHAR Number Matched
