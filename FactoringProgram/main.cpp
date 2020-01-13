/*
 * This code is written by Sarthak Shrivastava and was created to find the roots of quadratic equations
 * If the roots are imaginary, the program represents them in the form of complex numbers
 * The purpose of this code is to use pass by reference
 */

//including the standard libraries for cout and cin as well as the one for sqrt and pow functions
#include <iostream>
#include <cmath>

//to make the code easier to write, and is effective here as there is no confusion between the library that cout and cin are coming from
using namespace std;
//function definition here
void quadratic_formula(double coeff_a, double coeff_b, double coeff_c, double& roota, double& rootb, double& i_check);

int main() {
    //variable declaration for the functions and for the loop
    double a, b, c, r, r2, imaginary;
    bool stopper = true;
    char s;
    //loop to run until the user no longer wishes to find roots
    while(stopper==true){
        //output to the console asking the user for inputs
    cout<<"The quadratic formula helps finds the roots of quadratic equations. Quadratic equations are usually "
          "in the form of ax^2 + bx + c. Enter the constant values of a b and c --->"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
        //run the function
        quadratic_formula(a, b, c, r, r2, imaginary);
        //if-else statements to determine whether the output should be a decimal root or a complex number
        if (imaginary >= 0) {
            cout << "The roots of the equation are " << r << " " << r2<<endl;
        }
        else{
            cout << "The roots of the equation are " << r << "+" << r2<<"i. "<<endl;}

        //ask the user if they wish to continue or break the loop
        cout<<". \n If you wish to continue, enter \"Y\", else enter anything" << endl;
        cin>>s;
        if (s =='y'||s=='Y'){

        }
        else{
            break;
        }
    }

    return 0;
}
void quadratic_formula(double coeff_a, double coeff_b, double coeff_c, double& roota, double& rootb, double& i_check){
     i_check = pow(coeff_b, 2)-4*coeff_a*coeff_c;
    if (i_check >= 0) {
        roota = (-1 * coeff_b )/(2 * coeff_a) + sqrt(abs(i_check))/(2 * coeff_a);
        rootb = (-1 * coeff_b) / (2 * coeff_a) - sqrt(abs(i_check))/(2 * coeff_a);
    }
    else{
        roota = (-1 * coeff_b )/(2 * coeff_a);
        rootb = sqrt(abs(i_check))/(2 * coeff_a);
    }
    }
