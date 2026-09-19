/*Q81: Count characters in a string without using built-in length functions.


Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    scanf("%99[^\n]", str);

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("%d", count);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program81_day41.c -o program81_day41.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program81_day41.out
Hello
5
C:\Users\Asus\OneDrive\Desktop\C FILES>program81_day41.out

1
C:\Users\Asus\OneDrive\Desktop\C FILES>