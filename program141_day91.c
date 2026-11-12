/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.


Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Name: ");
    scanf("%49s", s.name);

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n",
           s.name, s.roll_no, s.marks);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program141_day91.c -o program141_day91.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program141_day91.out
Name: Asha
Roll: 101
Marks: 90
Name: Asha | Roll: 101 | Marks: 90

C:\Users\Asus\OneDrive\Desktop\C FILES