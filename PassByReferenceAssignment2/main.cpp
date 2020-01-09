//call by reference demo by calling function called cone_frustrum() with 3 inputs
//R1, R2 and H for the segment and returns the surface area and the volume of the cone



#include <iostream>
#include<fstream>
#include<cmath>

using namespace std;

//function prototype
void cone_frustrum(double& volume, double& SurfaceArea, double R1, double R2, double height);
//3 call by values for r1 r2 and h and 2 call be references for surface area and the volume

//global constants
const double PI= 3.14159;
//global file pointer for outfile infile shit

ofstream outfile;//link pointer to the file, file needs to be created in main method

int main() {
    //1. declare variables and set up the outfile
    double r1, r2, h, volume, surfaceArea;
    outfile.open("output.txt");//needs to be in main and cannot be outside the main method with the global file pointer

    //2. get user inputs

    cout<<"please enter the r1, r2 and height of the cone"<<endl;
    cin>>r1>>r2>>h;

    //copy to outfile

    outfile <<"please enter the r1, r2 and height of the cone"<<endl;
    outfile <<r1<<r2<<h;

    //3. call function
    cone_frustrum(volume, surfaceArea, r1, r2, h);
    //4. get results
    cout<< "your value for the volume is "<<volume<< " and your value for the surface area is " <<surfaceArea<<endl;
    //outfile
    outfile<< "\nyour value for the volume is "<<volume<< " and your value for the surface area is " <<surfaceArea;
    return 0;

}

//formulas
//SA = PI *(R1+R2)*sqrt((r2-r1)^2 + H^2)+PI*R1*R1 +PI*R*R2
// V = 1/3*PI*H*(R1^2+R2^2+R1*R2)

void cone_frustrum(double& volume, double& SurfaceArea, double R1, double R2, double height){
    cout<<"Calculating values...\n";
    outfile<<"Calculating values...\n";
    SurfaceArea = PI *(R1+R2)*sqrt(pow((R2-R1),2)+(height*height))+PI*R1*R1+PI*R2*R2;
    volume = (1/3.0)*PI*height*(R1*R1+R2*R2+R1*R2);
}

