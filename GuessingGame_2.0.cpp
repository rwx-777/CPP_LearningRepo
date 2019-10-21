// 2019 C++ Learning Repo
//Guessing Game 2.0
//written by rwx-777

#include <iostream>
#include <random>

using namespace std;

int main() {

    //use a random Number everytime programm is executed
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1,6); //random number will be anywhere between 1 and 6

    int secretNumber = dist6(rng);
    //cout << secretNumber; 

    //int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;

    while(secretNumber != guess && !outOfGuesses){ //As long as the Secretd Number is not the same as the guessed Number
    //keep the guessing game going
        if (guessCount < guessLimit) {

        cout << "Enter a guess: ";
        cin >> guess;
        guessCount++; //Keeps track of how many times the User has guessed
        }else{
            outOfGuesses = true;
        }
        
    }

    if(outOfGuesses) {
        cout << "You loose!\n";
    }else {
        cout << "You Win!\n";
    }
    return 0;
}

