//Using C++ Versions of C-String Libraries
//////////////////////////////////////////////////////////////////////////////////////////
//Common Functions:
//isalnum(c) is true if c is alphanumeric
//isalpha(c) is true if c is alphabetical
//iscntrl(c) is true if c is a control character
//isdigit(c) is true if c is a digit
//isgraph(c) is true if c is not a space but is printable
//isprint(c) is true if c is a printable char (i.e., a space of char that has a visual representation)
//ispunct(c) is true if c is a punctuation char
//isspace(c) is true if c is whitespace
//isupper(c) is true if c is uppercase
//isxdigit(c) is true if c is a hexidecimal digit
//tolower(c) If c is uppercase, returns lowercase equivalent, otherwise returns c unchanged
//toupper(c) If c is lowercase, returns uppercase equivalent, otherwise returns c unchanged
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

void everyChar(){ //performs action on every member of a string using RANGE-BASED FOR LOOP
    string str1("Some String");
    //print the characters in str1 one char ata time
    for(auto c : str1) //for every character c in str1
        cout << c << endl; //print c followed by a new line
}

void countPunct(){ //counts the number of punctuation chars in a string
    string str2("Hello, World!!!");
    //decltype sets type of punct_cnt to return type of .size()
    //punct_cnt has the same type that s.size returns;
    decltype(str2.size()) punct_cnt = 0;
    //count the number of punctuation chars is str2
    for(auto c : str2) //for every char in s
        if(ispunct(c)) //if c is a punctuation char
            punct_cnt++; //increment punctuation counter   

    cout << punct_cnt << " punctuation charachers in " << str2 << endl;
}

void convertUpper(){
    string str3("hello world");
    for(auto c : str3) //for every char in str3
        c = toupper(c); //convert it to upper case
    
    cout << str3 << endl;
}

//accessing individual chars in a string
void subscript(){
    //the subscript[] operator takes a string::size_type that denotes the position of the 
    //character we want to access
    string str4("asdf asdf");
    string str5("qwer qwer");
    if(!str4.empty()) //make sure there's a char to print
        cout << str4[0] << endl; //print the first char in s
    if(!str5.empty())
        str5[0] = toupper(str5[0]);
    cout << str5[0] << endl;
}

//process characters in s until we run out of chars or hit a white space
void process2(){
    string str6("asdfas dfasdf");
    for (decltype(str6.size()) index = 0; 
        index != str6.size() && !isspace(str6[index]); ++index
            s[index] = toupper(str6[index]); //capitalize the current char 
}

//output: ASDFAS dfasdf

int main(){ //uncomment as needed
    //everychar();
    //countPunct();
    //convertUpper();
    //subscript();
    process2();

    return 0;
}