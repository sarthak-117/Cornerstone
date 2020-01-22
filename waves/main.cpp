#include <iostream>
#include <fstream>
#define MAX 100

using namespace std;

void wave_steepness( const int year[], const int month[], const int day[], const int hour[], const int minute[],
const double wave_height[], const double wave_length[], int length, double average, double& over, double& percentage);

int main() {
    int num_elements;
    double average_steepness,percent_over,wave_over;
    double total_steepness=0;
    int year[MAX], month[MAX], day[MAX], hour[MAX], minute[MAX];
    double wave_height[MAX], wave_length[MAX];
    int i = 0;
ifstream infile;
infile.open("C:\\Users\\sarth\\SchoolStuff\\CLionProjects\\waves\\cmake-build-debug\\CMakeFiles\\waves.txt");
cout<<"Year Month Day Minute Second Wave_Height Wave_Length Wave_Steepness\n";

while(infile>>year[i]>>month[i]>>day[i]>>hour[i]>>minute[i]>>wave_height[i]>>wave_length[i]){
    cout<<year[i]<<"    "<<month[i]<<"   "<<day[i]<<"    "<<hour[i]<<"   "<<minute[i]<<"     "<<wave_height[i]<<"       "<<
    wave_length[i]<<"       "<<(wave_height[i]/wave_length[i])<<endl;
    total_steepness+=(wave_height[i]/wave_length[i]);
    i++;
}
num_elements=i;

average_steepness=total_steepness/i;

wave_steepness(year, month,  day, hour, minute,
    wave_height, wave_length, num_elements, average_steepness, wave_over, percent_over);

cout<<"The average number of the steepness of waves is: "<<average_steepness<<"\n The number of waves over the average is:"<<
wave_over<<"\n The percentage that this represents is: "<<percent_over<<endl;

    return 0;
}

void wave_steepness( const int year[], const int month[], const int day[], const int hour[], const int minute[],
                     const double wave_height[], const double wave_length[], int length,
                     double average, double& over, double& percentage){
    int i =0;
    double steep;
    while(i<length){
        steep = wave_height[i]/wave_length[i];
        if(steep>average)
            over++;
    }
    percentage = (over/length)*100;

}