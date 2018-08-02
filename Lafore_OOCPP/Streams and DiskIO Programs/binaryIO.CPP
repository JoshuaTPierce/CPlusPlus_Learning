//BinaryIO.CPP
//Demonstrates Binary Input/Output with Integers

#include <fstream>
#include <iostream>
using namespace std;

const int MAX = 100; //size of buffer
int buff[MAX]; //buffer for integers

int main(){
    for(int j = 0; j < MAX; j++)
    buff[j] = j; //fill buffer with data

    //create output stream

    ofstream os("edata.dat", ios::binary);
    oswrite(reinterpret_cast<char*>(buff), MAX*sizeof(int));
    os.close();

    for(j = 0; j < MAX; j++)
    buff[j] = 0;

    ifstream is("edata.dat", ios::binary); //create input stream

    is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int)); //read from it

    for(j = 0; j < MAX; j++) //check data
        if(buff[j] != j)
            {cerr <, "Data is incorrect\n"; return 1}
    cout << "Data is correct\n";
    return 0;
}


//You must use the ios::binary argument in the second parameter to write() and read() when
//working with binary data. This is because the default, text mode, takes some liberties with the
//data. For example, in text mode the ‘\n’ character is expanded into two bytes—a carriagereturn and a linefeed—before being stored to disk. This makes a formatted text file more
//readable by DOS-based utilities such as TYPE, but it causes confusion when it is applied to
//binary data, since every byte that happens to have the ASCII value 10 is translated into 2 bytes.
//The ios::binary argument is an example of a mode bit. 

//Closing Files
//So far in our example programs there has been no need to close streams explicitly because they
//are closed automatically when they go out of scope; this invokes their destructors and closes
//the associated file. However, in BINIO, since both the output stream os and the input stream is
//are associated with the same file, EDATA.DAT, the first stream must be closed before the second
//is opened. We use the close() member function for this.
//You may want to use an explicit close() every time you close a file, without relying on the
//stream’s destructor. This is potentially more reliable, and certainly makes the listing more readable.