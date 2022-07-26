#include <stdio.h>

int main() {
    int userId[5], i;
    userId[0] = 10001;
    userId[1] = 10002;
    userId[2] = 10003;
    userId[3] = 10004;
    userId[4] = 10005;

    int arr[] = {10001, 10002, 10003, 10004, 10005}; // this also works

    for (i = 0; i <= 4; i++) {
        printf("%i\n", userId[i]);
    }

    for (i = 0; i <= 4; i++) {
        // getting the variable address in the memory
        printf("%i\n", &userId[i]); // & is passing a pointer to the place
                                    // in memory where the variable is allocated,
                                    // not the variable itself
    }

    return 0;
}