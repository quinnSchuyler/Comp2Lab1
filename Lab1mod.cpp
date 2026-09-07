#include <iostream>
/*
Checks if number is perfect. If it is return 1
if not return 0

*/
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
    }
}

/*
    GetMaxValue
*/
int GetMaxValue(int argc, char *argv[]){
    using std::cout;
    using std::cin;

    int userInput;

    if (argc < 2){ // if there's no cli arg prompt to get number
        cout << "no number provided via cli, please input one: ";
        cout << '\n'; // new line
        cin >> userInput; // get user input
        cout << '\n'; // new line again
    } 
    else { // if there is a cli arg use that
        userInput = atoi(argv[1]); // convert argv[1] from string to int
    } // end else

    return userInput; // either from cli arg or from cin
} // end GetMaxValue