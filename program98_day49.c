/*Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    // Print initials of all words except surname
    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0) {
            printf("%c.", name[i]);
        }
        else if (name[i] == ' ' && name[i + 1] != '\0') {
            // Check if this is not the last word
            int j = i + 1;
            while (name[j] != '\0' && name[j] != ' ' && name[j] != '\n')
                j++;

            if (name[j] != '\n' && name[j] != '\0')
                printf("%c.", name[i + 1]);
        }
    }

    // Find and print surname
    for (i = strlen(name) - 1; i >= 0 && name[i] != ' '; i--);

    printf(" %s", &name[i + 1]);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program98_day49.c -o program98_day49.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program98_day49.out
John David Doe
J.D. Doe

C:\Users\Asus\OneDrive\Desktop\C FILES>