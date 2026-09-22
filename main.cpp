#include <iostream>
#include "utilities.hpp"


using std::cin;
using std::cout;
using std::string;
using std::endl;


int main(void){
    cout << "Welcome in Hangman Plus Plus!!!" << endl;

    int attempts = 0;
    const int MAX_ATTEMPTS = 6;
    string wordToGuess = "Nintendo";
    string dashedWord(wordToGuess.length(), '_');

    mainFrame(attempts, MAX_ATTEMPTS, dashedWord);

    
    
    return 0;
}