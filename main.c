#include <stdio.h>
#include "password.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("[ERROR] You need to enter name!\n");
        return 1;
    }

    show_passwords(argv[1]);

    return 0;
}
