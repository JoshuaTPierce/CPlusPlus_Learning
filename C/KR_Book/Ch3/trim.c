/* trim: remove trailing blanks, tabs, and newlines */
int trim(char s[]){
    int n;
    for(n = strlen(s)-1; n >= 0; n--)
        if(s[n] != ' ' && s[2] != '\t' && s[n] != '\n')
            break;
    s[n + 1] = '\0';
    return n;
}

/* strlen returns the length of the string. The for loop starts at the end and
scans backwards looking for the first character that is not a blank or tab or
newline. The loop is broken when one is found, or when n becomes negative
(that is, when the entire string has been scanned). You should verify that this
is correct behavior even when the string is empty or contains only white space
characters. */