//purpose of the function is to take user input values to calculate the heat rate and the heat flux from a give surface
//user inputs values needed to calculate both, then te results are outputted to an outfile doc

#include <iostream>

using namespace std;

void heat_rate(double& Q, double& q, double a, double H, double t2);

int main() {
double A, q, Q, h, T2;

cout<<"Enter the values for the surface Area (A), the heat transfer coefficient (h), and the value for the temp\n"
      "difference (T2-T1) in the order as described --->"<<endl;
cin>>A>>h>>T2;

heat_rate(Q, q, A, h, T2);

cout<<"The value of the heat rate is: "<<Q<<" W\n The value for the heat flux is: "<<q<<"W/m";

    return 0;
}

void heat_rate(double& Q, double& q, double a, double H, double t2){
    q=H*t2;
    Q=q*a;
}

