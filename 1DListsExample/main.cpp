/*
 * This program  will demo the use of 1-d arrays. this program will prompt the user for the number
 * of employees their hourly rate and the number of hours worked in a week and report the total hours worked, total wages and the average
 * weekly wage for the employees
 */


//need a var for total-hours, total-wages, avg-wages, need double hours as a 1d array and wages as a 1d array and the # of employees


#include <iostream>
#include <iomanip> //fixed, setprecision() for 2 places
using namespace std;

#define MAX_ITEM 50 // for max of 50 employees - array index for 0-49

int main() {
    //declare variables
    double wages[MAX_ITEM], hours[MAX_ITEM];
    double total_hours = 0, total_wages = 0, average_wage;
    int num_employees;

    //user input - need number of employees first - dictates the number of input parameters
    cout<<"Enter the number of employees that are working in this company -->"<<endl;
    cin>> num_employees;

    cout<<"\n Please enter the hours and the wage for each employee -->"<<endl;
    for (int i = 0; i<num_employees; i++){
        cin>>hours[i]>>wages[i]; //input for hours and wages
    }
//find the t_wages t_hours and the avg wage
    for (int i = 0; i<num_employees; i++){
        total_hours += hours[i];
        total_wages += hours[i]*wages[i];
    }
    average_wage = total_wages/num_employees; //average wage per person

    //output values
    cout<<fixed<<setprecision(2);
    cout<<"\n Employee Number      Hours      Wage\n"; //column header

    for (int i = 0; i<num_employees; i++){
        cout<<" "<<i+1<<"                    "<<hours[i]<< "      "<<wages[i]<<" \n";
    }
    cout<<"The total hours worked in the week were --> "<<total_hours<<
    " \n The total wages earned were --> "<< total_wages<<" \n The average wage was --> " << average_wage;

    return 0;
}
