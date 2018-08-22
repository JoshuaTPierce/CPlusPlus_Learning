#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *env[]){
    char *token = NULL;
    char color1[256] = "";
    char color2[256] = "";
    int wide = 0;
    int high = 0;
    int columns = 0;
    int rows = 0;

    token = (char *) strtok(argv[1],":");
    strcpy(color1,token);
    token = (char *) strtok(NULL,":");
    strcpy(color2, token);
    token = (char *) strtok(NULL,":");
    wide = atoi(token);
    token = (char *) strtok(NULL,":");
    high = atoi(token);

    printf("Content-type:text/html\n\n");
    printf("<html>\n");
    printf("<body bgcolor=\"%s\">\n", color1);
    printf("<center>\n");
    printf("table bgcolor=\"%s\" border=2>\n", color2);
    for(rows = 1; rows <= high; rows++){
        printf("<tr>\n");
        for(columns = 1; columns <= wide; columns++){
            printf("<td><h6>row=%d cell=%d</h6></td>\n",rows,columns);
        }
        printf("</tr>\n");
    }

    printf("</table>\n");
    printf("</body>\n");
    printf("</html>\n");

    return 0;
} 

/* In this program we take argv[1], and parse it using the library
function strtok which chops the string into tokens separated by an
arbitrary character ":" and use these tokens as strings to specify
colors and integer numbers to specify the row and cell counts of a
table. 

The function atoi converts a string representation of an integer to
an integer("1" to 1). The function strtok is a little odd in that
the first time you call it with the string name you want to parse,
the first parameter is changed to NULL on subsequent calls.

The HTML terms introduced were 
<html> document type
<body> starts/ends body
<table> starts/ends table
<tr> starts/ends table row
<td> stards and ends a table data cell

*/