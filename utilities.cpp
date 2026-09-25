#include <iostream>
#include <cctype>
#include <string>
#include <thread>
#include <chrono>

using std::cin;
using std::cout;
using std::string;
using std::endl;

void mainFrame(int attempts, const int maxAttempts, string &dashedWord){
    cout << "Word to guess is: " << dashedWord << endl;
    cout << "Attempts available: " << maxAttempts - attempts << endl;
}

string toLower(string str){
    for(long unsigned int i = 0; i < str.length(); i++){
        str[i] = std::tolower(str[i]);
    }
    return str;
}


char validateInput(string input){
    if(input.length() != 1){
        return ' ';
    }

    if(!isalpha(input[0])){
        return ' ';
    }

    return std::tolower(input[0]);
}

bool checkOccurance(char input, const string &wordToGuess){
    return wordToGuess.contains(input);
}

void updateWord(string &dashedWord, const string &wordToGuess, char input){
    for(long unsigned int i = 0; i < wordToGuess.length(); i++){
        if(wordToGuess[i] == input){
            dashedWord[i] = input;
        }
    }
}

void clearScreen(void){
    cout << "\033[2J\033[3J\033[H";
}

void wait(void){
    std::this_thread::sleep_for(std::chrono::seconds(3));
}