#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int string_length(char *string);

int main()
{
    assert(string_length("a") == 1);
    assert(string_length("aa") == 2);
    assert(string_length("") == 0);
    assert(string_length("\0") == 0);
    assert(string_length("012345678901234567890123456789012345678901234567890123456789") == 60);
    char string[1000000];
    for (int i = 0; i < 1000000; ++i){
        string[i] = '1';
    }
    printf("%d\n", strlen(string));
    assert(string_length(string) == 1000001);
    printf("\nfinished\n");
    return 0;
}

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
