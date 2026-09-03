/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        // Spaces
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Stars
        for(j = i; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program50_day25.c -o program50_day25.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program50_day25.out
*****
 ****
  ***
   **
    *

C:\Users\Asus\OneDrive\Desktop\C FILES>