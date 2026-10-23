/*Q120: Write a program to take a string input. Change it to sentence case.


Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, newWord = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            newWord = 1;
        } 
        else {
            if (newWord) {
                str[i] = toupper((unsigned char)str[i]);
                newWord = 0;
            } 
            else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }

    printf("%s", str);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program120_day70.c -o program120_day70.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program120_day70.out
I am trying to built logic
I Am Trying To Built Logic

C:\Users\Asus\OneDrive\Desktop\C FILES>program120_day70.out
The classes are supposed to start early
The Classes Are Supposed To Start Early

C:\Users\Asus\OneDrive\Desktop\C FILES>program120_day70.out
We Are Going To Look At 26 Different Test Cases
We Are Going To Look At 26 Different Test Cases

C:\Users\Asus\OneDrive\Desktop\C FILES>