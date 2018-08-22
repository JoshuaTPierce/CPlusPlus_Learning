#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *env[]){
    printf("Content-type:text/html\n\n");
    printf("<html>\n");
    printf("<body bgcolor=\"%s\">\n", argv[1]);
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}

/* What we are doing here is using the string parameter argv[1] as
a background colour code inside an HTML body tag. We change the
content type specification to text/html and miraculously now our
program is generating HTML content. 

This exercise is not just a lightweight trick - the idea that one 
program's data types can hold and generate another language is a
very powerful too. When we generate HTML (or XML, or anything else),
from a common gateway interface (CGI) program like this, we are 
creating dynamic content that can be linked to live, changing data,
rather than static, pre-edited web pages.
*/