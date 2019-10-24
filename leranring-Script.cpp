//2019 C++ Learning Repo
//Simple C++ Learning Script
//written by rwx-777

#include <iostream>
#include <cmath> //math functions

using namespace std;

//Classes

class Book { //A Class is the template/specification of a data type
    //We can give a class attributes 
    public:
        string title;
        string author;
        int pages;

        //A Constructor is a function that gets called whenever we create a Book Object
        //They even accept pa rameters
        Book(string aTitle, string aAuthor, int aPages){
            cout << "Creating Object" << endl;
            title = aTitle;
            author = aAuthor;
            pages = aPages;
             
        }
};
//An object is an actual instance of that class

class Student {
    public:
        string StudentName;
        string mayor;
        double gpa;
        Student(string aName,string aMajor, double aGpa) {
            StudentName = aName;
            mayor = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

//Class Movie 
//In this Class we invorce valid Inputs 

class Movie {
    private:
        string rating;
    public: //public means any other code outside of this class can access it
        string title;
        string director;
    
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){
            rating = aRating;
        }
};

//Class Chef

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" <<endl;
        }
        void makSpecialDish() {
            cout << "The chef makes a special dish" << endl;
        }

};

//Class ItalianChef inherents from Class Chef

class ItalianChef : public Chef { //our italian Chef can do everything chef can and more :0
    public:

        void makePasta(){
            cout << "The Chef makes pasta, mama mia" << endl;
        }

        //Now lets check out how overriding a function works 
        void makeSpecialDish(){ //this will automatically override the function in chef
            cout << "The chef makes chicken parma" << endl;
        }
};


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

//switch statememt
//Function to convert ints to strings using day names
    string getDayOfWeek(int dayNum) {
        string dayName;

        switch(dayNum) {
            case 0: //in the case that dayNum is 0 it will execute the code in Curly brackets
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
            default: //if none of the cases above are true the code in default will be executed 
            //similar to if else and default is else
                dayName = "Invalid Day Number.\nThere are only 7 days in a week...";
        }

    }

    //Exponent Function
    int power(int baseNum, int powNum) {
        int result_of_power = 1;
        for (int i = 0; i < powNum; i++){
            result_of_power = result_of_power * baseNum;
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
    //Check the function on line 45 to see a Switch Statement

    cout << getDayOfWeek(0); //prints out "Sunday"
    newline();
    cout << getDayOfWeek(1); //prints out "Monday"
    newline();
    cout << getDayOfWeek(777); //prints out "Invalid Day Number"
    newline();

    //##############################################################################################################
    
    //While Loops

    int index = 1;
    //if index were to be 6 the code would never execute

    while(index <= 5) { //Condition code will be executed as long as the conditon is true
        cout << index << endl;
        index++; //adds 1 to index
    } //Will print out 1 to 5 
    //Watch out for infinite Loops ! Could cause Crashes


    //Do While Loop
    //its like a reversed While loop
    //First the code gets executed then the condition gets checked

    int index2 = 1;

    do{
        cout << index2 << endl;
        index2++;
    }while (index2 <= 5);

    //#################################################################################################################

    // For Loops

    for(int i = 1; i <= 5 ;i++){
        cout << i << endl; 
    }

    //Lets do something a little more advanced
    //using a for loop to iterate through an Array of Ints

    int nums[] = {1,2,4,5,7,3};
    for(int i = 0; i < 6; i++){
        cout << nums[i] << endl;
            //Will print out everything until nums[5]
    }


    //########################################################################################################

    //Exponent Function
    //Will take a number and take it to the power of a number
    //See function in line 79
    
    cout << power(2, 3); //prints out 8
    newline();
    cout << power(2,4);
    newline();

    //#########################################################################################################

    //2D Array
    //A 2D Array is an Array where every Element of the Array is another Array

    int numberGrid[3][2] = { //How many elements are in the Array / how many elements are in the Arrays Array 
                            {1, 2}, //this is the first element of the Array Number Grid and its a Array
                            {3, 4}, // this is the second element of the Array Number Grid and its a Array
                            {5, 6}
                        };
    
    cout << numberGrid[0][1]; //prints out 2
    newline();
    cout << numberGrid[2][1]; //prints out 6
    newline();

    //Nested For Loop

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; i++){

            cout << numberGrid[i][j];
        }
        cout << endl;
        
    }

    //#######################################################################################################

    //Pointers
    //Did you guys know all of these values get stored inside the RAM in a physical memory address
    //Lets try to access it
    int age4 = 19;
    cout << &age4; //prints out the physical memory address where 19 is stored
    //Aka we could say we are printing out a pointer (memory address)

    double iq = 97.7;
    cout << "IQ: " << &iq << endl;
    newline();

    string NickName = "Zack";

    cout << "Nick Name: " << &NickName << endl;

    //Lets store the Pointers with a Pointer variable to store a memory address

    int *pAge = &age4; //will store the pointer in this variable

    string *pNickName = &NickName;

    newline();
    cout << pAge; //Prints out the Pointer of age4

    //How to dereference a Pointer to get the value of the memory address

    cout << *pAge; //Pointer is now dereferenced
    //Will print out value 19

    
    //#############################################################################################

    //Classes & Objects

    //New Class created on line 11
    //Works without the constructor
    /*
    Book book1;
    book1.title = "The Great Gatsby";
    book1.author = "F. Scott Fitzgerald";
    book1.pages = 512;

    cout << book1.title << endl; //Prints out book1s author

    Book book2;
    book2.title = "The Lord of the Rings";
    book2.author = "J.R. Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    */

    //More efficient works with Constructor
    //Book Class

    Book book1("Harry Potter","JK Rowling", 500);
    Book book2("Lord of the Rings","Tolkein",700);

    cout << book1.title;

    //Student class 

    Student student1("Elliot", "CyberSec", 3.6);
    Student student2("Sarah", "Psychology", 2.7);

    cout << student1.hasHonors(); //0 meas false 1 means true

    //Movie Class

    Movie Avengers("The Avengers", "Joss Whedon", "PG-13");
    
    Avengers.setRating("Dog"); //Sets the rating to Dog
    

    //Lets create a instance of the Class Chef
    Chef chefRobert;
    chefRobert.makeChicken(); //now Chef robert will make some chicken 

    ItalianChef Luigi;
    Luigi.makeChicken(); //Iherents all functions from class Chef
    Luigi.makePasta(); //Ch3f makes Pasta :)

   //###############################################################################################################





    return 0;
}