/* How Values Are Returned
Values are returned in exactly the same way as variables and parameters are
initialized: The return value is used to initialize a temporary at the call site, and that
temporary is the result of the function call.

As an example, we might write a function that, given a counter, a word,
and an ending, gives us back the plural version of the word if the counter is greater
than 1: */

//return the plural version of word if ctr is greater than 1
string make_plurar(size_t ctr, const string &word, const string &ending){
    return(ctr > 1) ? word + endling : word;
    //if ctr > 1, return word + ending, if ctr is not >1, just return the word
}

//The return type of this function is string, which means the return value is copied to
//the call site. This function returns a copy of word, or it returns an unnamed
//temporary string that results from adding word and ending.

//As with any other reference, when a function returns a reference, that reference is
//just another name for the object to which it refers. As an example, consider a function
//that returns a reference to the shorter of its two string parameters:

// return a reference to the shorter of two strings
const string &shorterString(const string &s1, const string &s2) {
    return s1.size() <= s2.size() ? s1 : s2;
}

//The parameters and return type are references to const string. 
//NEVER RETURN A REFERENCE OR POINTER TO A LOCAL OBJECT
//ONE WAY TO ENSURE THE RETURN IS SAFE IS TO ASK: TO WHAT PREEXISTING OBJECT IS THE REFERENCE REFERRING

