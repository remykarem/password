#include "dictionary.h"
#include "password.h"

//External deps
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define OFFSET 97
#define MAXSIZE 100
#define MAXVARIATIONS 4

#define init_array(arr)               \
    for (int i = 0; i < MAXSIZE; i++) \
    {                                 \
        arr[i] = 0;                   \
    }

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int get_maxes(int max[], char name[], int len)
{
    int letter;
    int num_permutations = 1;

    for (int i = 0; i < len; i++) 
    {
        letter = (int) name[i] - OFFSET;        
        int j = 0;
        while (letters[letter][j] != '\0' && j < MAXVARIATIONS)
            j++;
        max[i] = j;
        num_permutations *= (j > 0) ? j : 1;
    }
    return num_permutations;
}

// Note: This recursive function can grow the call stack
// until it's very huge. One can increase the preset call
// stack size using ulimit -s unlimited.
void increment(int number[], const int max[], int idx, char name[],
    const char oldname[]) 
{  
    if (max[idx] == 0)
        return;

    char ch = oldname[idx];
    number[idx] = (number[idx] + 1) % max[idx];
    
    if (number[idx] == 0) 
    {
        name[idx] = letters[((int) ch)-OFFSET][0];
        increment(number, max, idx+1, name, oldname);
    } 
    else 
    {
        name[idx] = letters[((int) ch)-OFFSET][number[idx]];
        printf("%s\n", name);
        increment(number, max, 0, name, oldname);
    }
}

void show_passwords(char name[])
{
    char password[MAXSIZE];
    int len, perms;
    int *arr, *max;

    strcpy(password, name);
    printf("starting...\n");

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
}
