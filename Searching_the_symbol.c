#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    char str[] = "A:\\Windows\\System32\\explorer.exe";
    char ch = 'e';
    int index = -1, i;

    for(i = 0; (str[i] != '\0') && (str[i] != ch); i++);

    if(str[i] == ch) {
        index = i;
        printf("%d\n\n", i);
    }
    else fprintf(stderr, "No searched symbol(-s)");

    system("pause");
    exit(EXIT_SUCCESS);
}
