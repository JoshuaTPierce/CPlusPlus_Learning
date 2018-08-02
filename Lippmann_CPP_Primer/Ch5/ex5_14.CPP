//Write a program to read strings from standard input
//looking for duplicated words. The program should find places in the input
//where one word is followed immediately by itself. Keep track of the largest
//number of times a single repetition occurs and which word is repeated. Print
//the maximum number of duplicates, or else print a message saying that no
//word was repeated. For example input: how now now brown cow cow cow

#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::string word, duplicatedWord, maxDuplicatedWord;
    unsigned cnt = 0, maxCnt = 0;
    while (std::cin >> word) {
        if (word == duplicatedWord)
            ++cnt;
        else {
            if (cnt > maxCnt) {
            maxDuplicatedWord = duplicatedWord;
            maxCnt = cnt;
      }
      duplicatedWord = word;
      cnt = 1;
    }
  }
    if (cnt > maxCnt) {
        maxDuplicatedWord = duplicatedWord;
        maxCnt = cnt;
  }
    std::cout << maxDuplicatedWord << " occurs " << maxCnt
        << " time" << (maxCnt > 1 ? "s" : "") << ". " << std::endl;

  return 0;
}