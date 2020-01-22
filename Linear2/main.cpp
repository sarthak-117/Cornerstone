#include <iostream>
#include <fstream>
#define MAX 500

using namespace std;


int order_check(const double array_input[], int num_points);
double extrapolation(const double angle_array[], const double col_array[], double ang, int num_points);
int main(){
    int num_elements;
    int i =0;
    double FPA[MAX], COL[MAX];
    double angle, col;

    int x;
    ifstream infile;
    string inFile_text = "C:\\Users\\sarth\\SchoolStuff\\CLionProjects\\Linear2\\cmake-build-debug\\CMakeFiles\\FPA_COL.txt";
    infile.open(inFile_text.c_str());
    cout<<"Flight Path Angle Coefficient of Lift\n";
    if (infile.is_open())
    {
        while(infile>>FPA[i] >> COL[i]){
            cout<<FPA[i]<<"     "<<COL[i]<<endl;
            i++;
        }
        infile.close();
    }
    else{
        cout<<"Cannot find data text file!\n";
    }

    num_elements = i;
    cout<<"This is the number of data points entered: "<<num_elements<<endl;

     x = order_check(FPA, num_elements);

if (x == 0){
    cout<<"ERROR: DATA IS NOT IN ASCENDING ORDER\n";
    return 0;
}

cout<<"Enter an angle that you wish to estimate the coefficient of lift for -->\n";
cin>>angle;

//code to check that the angle inputted is valid

while(angle<FPA[0]||angle>FPA[num_elements-1])
{
    cout<<"enter a valid angle ---> \n";
    cin>>angle;
}


col = extrapolation(FPA, COL, angle, num_elements);
cout<<col;
    return 0;
}

int order_check(const double array_input[], int num_points){
    for(int i = 0; i<num_points;i++){
        if(i = num_points-1){
            return 1;
        }
        else if(array_input[i] > array_input[i+1]){
            return 0;
        }
    }
}

double extrapolation(const double angle_array[], const double col_array[], double ang, int num_points){
    double slope;
    double lower;
    double upper;
    double output;
    for(int i = 1; i <= num_points; i++){
        lower = angle_array[i-1];
        upper = angle_array[i];
        if(ang>=lower && ang<=upper){
            slope = (upper-lower)/(col_array[i]-col_array[i-1]);

            output = ((ang-angle_array[i-1])/slope)+col_array[i-1];
        }
    }
    return output;
}
