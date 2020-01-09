/*
 * program demos call by reference by calling function break_number() to return the 2 parts of a user input number
 * sign whitespace for 0
 * whole number and fractional part
 */

#include <iostream>
#include <cmath> //floor and ceiling methods to return the largest whole number that is not greater than the actual number
using namespace std;
 void break_numbers(double number, char& sign, int& whole, double& fraction);
int main() {
    //declare
    double userInput;
    char sn;
    int whl;
    double dec;
    //user input

    cout<<"please enter a number to break up into parts -> " << endl;
    cin>>userInput;

    //call function

    break_numbers(userInput, sn, whl, dec);

    //output result
    cout<< "the whole number part is " <<whl<< ", the decimal part is "<<dec<< ", and the sign of this number is "<<sn;

    return 0;
}

void break_numbers(double number, char& sign, int& whole, double& fraction){
    if(number<0)
        sign = '-';
    else if (number>0)
        sign = '+';
    else
        sign = ' ';

    whole = floor(abs(number));
    fraction = abs(number)-whole;
}
