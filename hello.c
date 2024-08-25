#include <stdio.h>

int main (int argc, char *argv[]) {
    if (argc > 1)
        printf("Hello UNT!");
    else
        printf("Hello %s!", argv[1]);
}