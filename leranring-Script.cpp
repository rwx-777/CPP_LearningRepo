//2019
//Simple C++ Learning Script
//written by rwx777

#include <iostream>
#include <cmath> //math functions

using namespace std;

//Functions

void newline() {
    cout << "\n";
}

void SayHello() { //void is a function that doesnt return anything
    cout << "Hello there Friend...";
}

void SayHello_to_Someone(string name, int age3) { //now the function needs a parameter/value to execute
//See function getting called below in main()
    cout << "Hello there " << name << " you are " << age3;

}

//we first have to declare the functions return type
double cube(int num) {
    double result = num * num * num;
    return result; // After return nothing more will get exevuted in the function
}

int getMax(int num1, int num2) { //Function to get the biggest Number that was inputed
        int result;

        if(num1 > num2) {
            result = num1;
        }else {
            result = num2;
        }

        return result;

    }

//Function to convert ints to strings using day names
    string getDayOfWeek(int dayNum) {
        string dayName;

        switch(dayNum) {
            case 0:
                dayName = "Sunday";
                break;
            case 1: //in the case that dayNum = 1 it will assign Monday to dayName
                dayName = "Monday";
                break; //Break stops a case /end of case statement
            case 2:
                dayName = "Tuesday";
                break;
            case 3:
                dayName = "Wednesday";
                break;
            case 4:
                dayName = "Thursday";
                break;
            case 5:
                dayName = "Friday";
                break;
            case 6:
                dayName = "Saturday";
                break;
        }

    }


int main() {

    string characterName = "Elliot";
    int characterAge = 27;
    string thoughts = "Fsociety";

    cout << "There once was a man named " + characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    //Both methods work so i choose 1
    cout << characterName + " was a shizo Hacker #" + thoughts << endl;

    //#########################################################################################
    //DATA TYPES 

    char iq = '1'; //Could be 'A' too
    string someWord = "Fsociety"; //String
    int age = 28; //int
    double gpa = 2.3;// can store the most
    bool isMale = true; //Boolean True/False

    cout << someWord << endl;

    //#########################################################################################

    //Working with Strings
    //Indexing a string
    string boring = "I dont care";
    cout << boring[0] << endl;
    cout << boring.find("dont",0); //Find function cheks to see if the word is in the string and
    // type the index where it should start looking
    // we get back a number where the found word starts at

    string phrasesub = boring.substr(3,11); //first int defines starting index , second string is length
    cout << phrasesub << endl;

    //##########################################################################################

    //Working with Numbers

    cout << 5 +7;

    newline();
    //will print the result
    cout << 5 * 7;

    newline();

    cout << 10 % 3;
    //will give us the remainder of the division so 1
    newline();

    int wnum = 5;
    double dnum = 5.5;

    //incrementing a value
    wnum++; //adds one
    cout << wnum;
    newline();
    wnum--; //subtracts one
    cout << wnum;
    newline();

    // we can even add a decimal and a integer number
    cout << wnum + dnum;

    cout << pow(2, 5); // two raised to the power of 5
    newline();
    cout << sqrt(36); //gives us the square root
    newline();
    cout << round(4.3); //will round a number
    newline();
    cout << ceil(4.3); //will always round up
    newline();
    cout << floor(4.7); //will always round down
    newline();
    cout << fmax(3,10); //return the bigger number
    newline();
    cout << fmin(3,10); //tells us the smallest number

    //#########################################################################################

    //USER INPUT

    //whenever we get user input we should store it somewhere

    int age2;
    cout << "Enter your age sir: ";
    newline();
    cin >> age2; //input gets stored in age

    cout << "You are " << age2 << " years old.";

    //Get String User Input

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello friend." << name << " here again...";

    //#############################################################################################

    //Arrays

    //First define what type of data the array is gonna store
    int luckyNumbers[] = {4, 8, 16, 28, 42};

    luckyNumbers[0] = 19;
    luckyNumbers[10] = 100; //sets the value fro index 10 to 100

    cout << luckyNumbers;
    cout << luckyNumbers[0];
    cout << luckyNumbers[10];

    //############################################################################################

    //Functions 
    cout << "Main gets executed one by one \n";

    SayHello(); //to execute it we have to call it in the main duh

    cout << "From top to bottom \n";

    //Function 2

    SayHello_to_Someone("Elliot", 27); // no we have given it a string

    //Function 3

    //the value which gets return from the function cube is now stored in the variable answer
    double answer = cube(5);
    newline();
    cout << answer;

    //or
    newline();
    cout << cube(5);
    newline();

    //#####################################################################################################

    //If Statments

    bool isFemale = true;
    bool isNice = true;

    if(isFemale && isNice) { //if its true the code inside the curly brackets gets executed
        cout << "You are a nice female";
    }else if (isFemale && !isNice){
        cout << "You are female but not nice";
    }else if(!isFemale && isNice) {
        cout << "You are not female but you are still nice.";
    }else{
        cout << "You are male and ugly";
    }

    //More if Statemenst with Functions

    newline();
    cout << getMax(2,5); //See declared function on line 32

    newline();

    //#######################################################################################################

    //Switch Statements
    // A switch statements saves us from makeing lots of different else if Statements


    



    return 0;
}