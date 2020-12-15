#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void memory_set(char string[], char c, int n);
int main()
{
    char string[100];

    memory_set(string, '0', 1);
    assert(strcmp(string, "0") == 0);

    memory_set(string, '\0', 2);
    assert(strcmp(string, "") == 0);

    memory_set(string, '1', 0);
    assert(strcmp(string, "") == 0);

    printf("\nfinished\n");
    return 0;
}


void memory_set(char string[], char c, int n)
{
    for (int i = 0; i < n; ++i){
        string[i] = c;
    }
}
