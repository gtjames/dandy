#include <stdio.h>
#include <stdlib.h>

unsigned int getNumber(char *prompt, unsigned int max);

int main(int argc, char *argv[]) {
    int first;
    int second;
    if (argc == 3) {
        first  = atoi(argv[1]);         //  two params are on the command line convert to int
        second = atoi(argv[2]);         //  convert second param
    }
    else if (argc == 2) {               //  user has one param convert to int
        first  = atoi(argv[1]);         //  conver the first (and only) command line param
        second = getNumber("Enter 2nd #: ", 100);   //  prompt the user for the second number
    }
    else if (argc == 1) {               //  user did not enter any numbers on the command line
        first  = getNumber("Enter 1st #: ", 100);   //  prompt the user for the first number
        second = getNumber("Enter 2nd #: ", 100);   //  prompt the user for the second number
    }

    for (int i = first; i < second; i++) {
        printf ("still looping i = %d\n", i);
    }
}

unsigned int getNumber(char *prompt, unsigned int max) {
    unsigned int    num;
    char            input[30];

    while (1) {
        printf("%s", prompt);
        // fgets(input, sizeof(input), stdin);
	    scanf("%s", input);
        num = atoi(input);
        if (num >= 0 && num <= max) {
            return num;
        }
    }
}

