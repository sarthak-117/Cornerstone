//this program demos the use of call by reference by calling a function called swap
//function swaps the numbers of two parameters

#include <iostream>
using namespace std;
//function prototype

void swapNums(double& i, double& j);

int main() {
    //declare variables
    //get user inputs
    //assign value to the variables
    //call function swapnums
    //output the values
    double valueI, valueJ;
    cout << "Enter two numbers to swap" << endl;
    cin>>valueI;
    cin>>valueJ;

    //test for values
    cout<<"ValueA ="<<valueI;
    cout<<"\n ValueB ="<<valueJ<<endl;

    swapNums(valueI, valueJ);

    cout<< "ValueA is now "<< valueI;
    cout<< "\nValueB is now "<< valueJ;
    return 0;
}

void swapNums(double& i, double& j){
    double temp = i;
    i = j;
    j = temp;
}