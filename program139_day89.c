/*Q139: Show that enums store integers by printing assigned values.


Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include <stdio.h>

int main() {
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program139_day89.c -o program139_day89.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program139_day89.out
SUCCESS=0, FAILURE=1, TIMEOUT=2

C:\Users\Asus\OneDrive\Desktop\C FILES>
