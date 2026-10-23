/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.


Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("File could not be created!");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program121_day71.c -o program121_day71.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program121_day71.out
Enter name: Rahul
Enter age: 23
File created successfully! Data written to info.txt
C:\Users\Asus\OneDrive\Desktop\C FILES>