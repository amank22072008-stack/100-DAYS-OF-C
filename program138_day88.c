/*Q138: Print all enum names and integer values using a loop.


Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program138_day88.c -o program138_day88.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program138_day88.out
RED=0
YELLOW=1
GREEN=2

C:\Users\Asus\OneDrive\Desktop\C FILES>