/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int days, fine;

    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine ₹%d", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine ₹%d", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine ₹%d", fine);
    }
    else {
        printf("Membership Cancelled");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program23_day12.c -o program23_day12.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program23_day12.out
4
Fine Γé╣8
C:\Users\Asus\OneDrive\Desktop\C FILES>program23_day12.out
8
Fine Γé╣22
C:\Users\Asus\OneDrive\Desktop\C FILES>program23_day12.out
15
Fine Γé╣60
C:\Users\Asus\OneDrive\Desktop\C FILES>program23_day12.out
31
Membership Cancelled
C:\Users\Asus\OneDrive\Desktop\C FILES>