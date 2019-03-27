#include <stdio.h>

#define BUFFER_SIZE 512

void underline_code(const char* filename, unsigned int lineno, unsigned int columno, unsigned int length)
{
    int i;
    char buffer[BUFFER_SIZE];

    FILE* fp;
    if ((fp = fopen(filename, "r")) == NULL)
        return; // failed
    
    // point to error line
    for (i = 0; i < lineno; i++)
        fgets(buffer, BUFFER_SIZE, fp);
    
    // Print the message
    fprintf(stderr, "%s: note: the statement is here:\n", filename);
    fputs(buffer, stderr); // code line
    for (i = 1; i < columno; i++)
        fputc(' ', stderr);
    fputc('^', stderr);
    for (i = 1; i < length; i++)
        fputc('~', stderr);
    fputs("\n", stderr);

    fclose(fp);
}