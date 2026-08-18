/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main() {
    int percentage;

    scanf("%d", &percentage);

    if (percentage >= 90)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program18_day9.c -o program18_day9.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program18_day9.out
95
Grade A
C:\Users\Asus\OneDrive\Desktop\C FILES>program18_day9.out
82
Grade B
C:\Users\Asus\OneDrive\Desktop\C FILES>program18_day9.out
68
Grade D
C:\Users\Asus\OneDrive\Desktop\C FILES>program18_day9.out
50
Grade F
C:\Users\Asus\OneDrive\Desktop\C FILES>