/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // Spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Numbers
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program51_day26.c -o program51_day26.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program51_day26.out
    5
   45
  345
 2345
12345

C:\Users\Asus\OneDrive\Desktop\C FILES>