#include <iostream>

using std::string;

void mainFrame(int attempts, const int maxAttempts, string &dashedWord);
string toLower(string str);
char validateInput(string input);
bool checkOccurance(char input, const string &wordToGuess);
void updateWord(string &dashedWord, const string &wordToGuess, char input);
void clearScreen(void);
void wait(void);