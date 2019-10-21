// 2019 C++ Learning Repo
//Guessing Game
//written by rwx-777

#include <iostream>

using namespace std;

int main() {

    int secretNumber = 7;
    int guess;

    while(secretNumber != guess){ //As long as the Secretd Number is not the same as the guessed Number
    //keep the guessing game going
        cout << "Enter a guess: ";
        cin >> guess;
    }

    cout << "You Win!\n";
    return 0;
}

