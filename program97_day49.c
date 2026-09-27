/*Q97: Print the initials of a name.


Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    // First letter
    printf("%c.", name[0]);

    // First letter after a space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program97_day49.c -o program97_day49.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program97_day49.out
John Doe
J.D.
C:\Users\Asus\OneDrive\Desktop\C FILES>