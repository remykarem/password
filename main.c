#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "password.h"

#define MAXSIZE 100

int main(int argc, char *argv[])
{
    char name[MAXSIZE];
    char password[MAXSIZE];
    int len, perms;
    int *arr, *max;

    if (argc != 2)
    {
        printf("[ERROR] You need to enter name!\n");
        return 1;
    }

    strcpy(name, argv[1]);
    strcpy(password, argv[1]);

    len = (int)strlen(name);
    arr = (int *)malloc((len + 1) * sizeof(int)); // add an extra space
    max = (int *)malloc(len * sizeof(int));
    init_array(arr);
    perms = get_maxes(max, password, len);

    printf("%s\n", name);
    increment(arr, max, 0, password, name);
    printf("Total no. of permutations: %d\n", perms);

    free(arr);
    free(max);

    return 0;
}
