/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float cp, sp, percentage;

    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", percentage);
    }
    else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program22_day11.c -o program22_day11.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program22_day11.out
1000 1200
Profit 20%
C:\Users\Asus\OneDrive\Desktop\C FILES>program22_day11.out
1000 800
Loss 20%
C:\Users\Asus\OneDrive\Desktop\C FILES>program22_day11.out
1000 1000
No Profit No Loss
C:\Users\Asus\OneDrive\Desktop\C FILES>