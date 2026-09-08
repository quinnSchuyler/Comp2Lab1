#include <iostream> // for cin and cout
#include "lab1mod.h" // IsPerfect() & GetMaxValue() & IsWeird()
using namespace std;

/*
    Takes an input number either via cli arg, or via prompting for an input (GetMaxValue).
    For each value less than or equal to the value from GetMaxValue, check if it's perfect 
    via IsPerfect
*/
int main(int argc, char *argv[]){
    
    long int MaxNumber = GetMaxValue(argc, argv); // use the cli arg or get user input
    
    cout << "Checking for perfect numbers less than or equal to " << MaxNumber << "...";
    cout << '\n';

    for(long int lcv = 0;lcv <= MaxNumber; lcv++){ //iterate through each number up the to max
        if (IsPerfect(lcv)){ // if it's perfect
            cout << lcv; // output the perfect number
            cout << " is perfect";
            cout << '\n';
        } // end if
    } // end for


    return 0;
} // end main