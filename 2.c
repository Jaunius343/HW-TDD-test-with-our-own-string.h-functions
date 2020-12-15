#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int string_length(char *string)
{
    int len = 0;
    char sym;
    int i = 0;
    sym = string[i];
    while (sym != '\0'){
        ++len;
        sym = string[++i];
    }
    return len;
}

#define SIZE 255
void copy_string(char *string, char *string_copy);

int main()
{
    char *string_1 = "hello";
    char string_2[SIZE] = "what if";

    copy_string(string_1, string_2);
    assert(strcmp(string_1, string_2) == 0);

    printf("finished");
    return 0;
}

void copy_string(char *string, char *string_copy)
{
    memset(string_copy, 0, string_length(string_copy));
    for (int i = 0; i < string_length(string); ++i){
        string_copy[i] = string[i];
    }
}
