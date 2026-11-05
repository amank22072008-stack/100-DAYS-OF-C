/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    scanf("%s", input);

    enum Status status;

    if (strcmp(input, "SUCCESS") == 0)
        status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        status = FAILURE;
    else
        status = TIMEOUT;

    switch (status) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program134_day84.c -o program134_day84.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program134_day84.out
FAILURE
Operation failed
C:\Users\Asus\OneDrive\Desktop\C FILES>