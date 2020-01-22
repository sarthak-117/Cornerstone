#include <iostream>
#include <iomanip>

using namespace std;
/*
 * This program demos the use of 2-d arrays. The program will prompt the user for the nu,ber of divisions and the number of quarters to report
 *sales figures along with their sales figures and the program will create a table and show the total sales
 *
 */

#define MAX 11 //max number of division is 10, start count at 1, instead of zero
int main(){
    //declare variables
    double sales_figures[MAX][5];
    double total_sales;
    int num_div, num_quart;

    cout<<"please enter the number of divisions and quarters"<<endl;

    cin>>num_div>>num_quart;
    //nested for loops
    for (int i = 1; i<=num_div; i++) {
        cout << "please enter the sales figures for division "<<i<<endl;
        for(int j = 1; j<=num_quart; j++){
            cin>>sales_figures[i][j];
            cout<<fixed<<setprecision(2)<<endl;
            cout<<"Division "<<i<< ", Quarter "<<j<< " sales = "<<sales_figures[i][j]<<endl;
            total_sales+=sales_figures[i][j];
        }
        //end of division loop
    }
    cout<<"total sales are "<<total_sales;
    return 0;
}
