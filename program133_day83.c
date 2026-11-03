/*Q133: Create an enum for months and print how many days each month has.


Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month[10];

    scanf("%9s", month);

    if (strcmp(month, "FEB") == 0) {
        printf("28 or 29 days");
    }
    else if (strcmp(month, "APR") == 0 ||
             strcmp(month, "JUN") == 0 ||
             strcmp(month, "SEP") == 0 ||
             strcmp(month, "NOV") == 0) {
        printf("30 days");
    }
    else {
        printf("31 days");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program133_day83.c -o program133_day83.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program133_day83.out
FEB
28 or 29 days
C:\Users\Asus\OneDrive\Desktop\C FILES>

