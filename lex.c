#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Limits
#define identMax 11
#define numberMax 5
#define numSymbols 13
#define numResWords 14
#define MAX_STRING 512

// Function Prototypes
void createToken(FILE* fileptr);
void quickRead(FILE* fileptr);

typedef enum {
    skipsym = 1, identsym, numbersym, plussym, minussym,
    multsym, slashsym, ifelsym, eqsym, neqsym, lessym, leqsym,
    gtrsym, geqsym, lparentsym, rparentsym, commasym, semicolonsym,
    periodsym, becomessym, beginsym, endsym, ifsym, thensym,
    whilesym, dosym, callsym, constsym, varsym, procsym, writesym,
    readsym , elsesym} token_type;

char specialSymbols[numSymbols][numSymbols] = {"+", "-", "*", "/", "(", ")", "=", 
                                             ",", ".", "<", ">", ";", ":"};

char reservedWords[numResWords][numResWords] = {"const", "var", "procedure", "call", "begin", "end", "if",
                                             "then", "ifel", "else", "while", "do", "read", "write"};
int main (int argc, char *argv[]) 
{
    // Checks to see that a file has been pushed
    if (argc < 2)
    {
        printf("Please include a file before running\n");
        exit(1);
    }
    FILE* fileptr = fopen(argv[1], "r");
    createToken(fileptr);


    fclose(fileptr);
    return 0;
}

void createToken(FILE* fileptr) 
{
    printf("Source Program:\n");
    quickRead(fileptr);
    printf("Lexeme Table:\n"
           "lexeme\t\ttoken type\n");

    char reader;
    char token[MAX_STRING];
    while ((reader = fgetc(fileptr)) != EOF)
    {

    }
}

void quickRead(FILE* fileptr)
{
    // Prints out the entire source program
    // from the text file
    char printer;
    while ((printer = fgetc(fileptr)) != EOF)
        putchar(printer);
    printf("\n\n");
}

