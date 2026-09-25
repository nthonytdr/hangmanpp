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
    const string wordToGuess = toLower("Nintendo");
    string dashedWord(wordToGuess.length(), '_');

    while(attempts != MAX_ATTEMPTS && dashedWord != wordToGuess){
        clearScreen();

        mainFrame(attempts, MAX_ATTEMPTS, dashedWord);

        string input = "";
        cout << "Type a character: ";
        cin >> input;

        if(!validateInput(input)){
            cout << "Invalid input. Try again." << endl;
            wait();
            continue;
        }

        if(!checkOccurance(input[0], wordToGuess)){
            cout << "The character: " << input << " isn't in the word to guess." << endl;
            attempts++;
            wait();
            continue;
        } else {
            updateWord(dashedWord, wordToGuess, input[0]);
        }
    }    
    return 0;
}