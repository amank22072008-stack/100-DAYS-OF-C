/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program10_day5.c -o program10_day5.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program10_day5.out
3661
1:1:1
C:\Users\Asus\OneDrive\Desktop\C FILES>program10_day5.out
7322
2:2:2
C:\Users\Asus\OneDrive\Desktop\C FILES>