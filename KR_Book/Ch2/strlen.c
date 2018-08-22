/*Returns the length of string s. Function only, no main */
int strlen(char s[]){
    int i = 0;
    while(s[i] != '\0')
        ++i;

    return i;
}

//THIS FUNCTION IS DECLARED IN THE STANDARD HEADER <STRING.H>