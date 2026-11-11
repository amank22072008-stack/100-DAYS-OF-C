/*Q140: Define a struct with enum Gender and print person's gender.


Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program140_day90.c -o program140_day90.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program140_day90.out
GenderC:\Users\Asus\OneDrive\Desktop\C FILES=MALE
Female

C:\Users\Asus\OneDrive\Desktop\C FILES>