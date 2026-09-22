#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

void mainFrame(int attempts, const int maxAttempts, string dashedWord){
    cout << "Word to guess is: " << dashedWord << endl;
    cout << "Attempt available: " << maxAttempts - attempts << endl;
}