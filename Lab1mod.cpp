#include <iostream> // used for getting user input and displaying text in GetMaxValue()
#include <vector>

using std::cout;
using std::cin;

// part of extra credit, unused and unfinished
// using IntVec = std::vector<int>;

// Checks if number is perfect. If it is return 1
// if not return 0
int IsPerfect(int number) {
    if (number <= 0) {
        return 0; // negatives and zero aren't perfect numbers
    } 

    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {  // i is a factor of number aka number is evenly divisible by i
            sum += i; // add up the factors
        }
    }

    if (sum == number) { // if the factors added together == the number
        return 1; // perfect number
    } else {
        return 0; // not perfect
    } // end else
} // end IsPerfect()

/*
    GetMaxValue
    checks if no cli arg was passed to it, and prompts the user for a number in that case
    otherwise the return value is the cli arg value
*/
int GetMaxValue(int argc, char *argv[]){
    

    int userInput;

    if (argc < 2){ // if there's no cli arg prompt to get number
        cout << "no number provided via cli, please input one: ";
        cout << '\n'; // new line
        cin >> userInput; // get user input
        cout << '\n'; // new line again
    } // end if
    else { // if there is a cli arg use that
        userInput = atoi(argv[1]); // convert argv[1] from string to int
    } // end else

    return userInput; // either from cli arg or from cin
} // end GetMaxValue


// Attempted implementation of extra credit question, incomplete
/*
// 'IntVec' instead of 'std::vector<int>'
IntVec GetFactors(int number) {
    IntVec factors;
    
    // Check every number from 1 to the number itself
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            factors.push_back(i); // If it divides perfectly, store it
        }
    }
    
    return factors;
}

int IsWeird(int number){
    //find all the factors and store them
    // check all combinations of them to make sure they're not the same as the input number
    IntVec myFactors = GetFactors(number); // get a vector of all the factors
    int isWeird = 0;

    for (int factor : myFactors) {
        std::cout << factor << '\n';
    }

    return isWeird;
    
}
*/