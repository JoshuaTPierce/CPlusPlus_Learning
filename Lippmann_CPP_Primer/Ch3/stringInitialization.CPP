#include <string>
using std::string; //namespace declaration

int main(){ //ways to initialize strings:

    string s1; // default initialization; s1 is the empty string
    string s2 = s1; // s2 is a copy of s1
    string s3 = "hiya"; // s3 is a copy of the string literal
    string s4(10, 'c'); // s4 is cccccccccc

//When we have a single initializer, we can use either the direct or copy form of
// initialization. When we initialize a variable from more than one value, such as in the
// initialization of s4 above, we must use the direct form of initialization:

    string s5 = "hi there"; //COPY INITIALIZATION
    string s6("hi there"); //DIRECT INITIALIZATION

}

//We can default initialize a string, which creates an empty string;
// that is, a string with no characters. When we supply a string literal,
// the characters from that literal—up to but not including the null character at the end
// of the literal—are copied into the newly created string. When we supply a count
// and a character, the string contains that many copies of the given character.