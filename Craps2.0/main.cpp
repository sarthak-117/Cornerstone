#include <iostream>
#include <fstream>
#include <cstdlib>
/*
 * This program was made by Sarthak Shrivastava and it simulates wagering in craps using pass by reference as a method
 * The above libraries are included to assist in the math calculations and with the output to a text file
 */


using namespace std;

//creating the method skeleton over here

void roll(int& valA, int& valB, int& total);
void intro();

ofstream outfile;//link pointer to the file

int main() {
//declare variables and instantiate them

int n_games, firstToss, secondToss, start, total, bid;
int counter = 0, money = 1000;
outfile.open("output.txt");
//get user input by first function for the amt of games being done
intro();
cin>>start;
cin>>n_games;

//loop to verify the number of games inputted is valid
while(n_games<5){
    if(n_games <5)
        cout<<"not a valid number"<<endl;
    cin>>n_games;
}
//starts the seed value for the random number generator
srand(start);

//runs the game an n_games amount of time
while (counter<n_games) {
    //code to enter an amount to bid
    cout<<"enter amt of money to wager"<<endl;
    cin>>bid;
    //nested loop to run to make sure you do not bid more than you have
    while(bid>money) {
        cout << "enter valid amt" << endl;
        cin >> bid;
    }
    //runs the roll function
    roll(firstToss, secondToss, total);
    cout << "player rolled " << firstToss << " + " << secondToss << " = " << total << endl;
    //if tests to judge whether or not a roll wins or must continue playing
    if (total == 7 || total == 11) {
        cout << "Player wins!" << endl;
        money+=bid;
        cout<< money << " dollars left"<<endl;
        counter++;
    } else if (total == 2 || total == 3 || total == 12) {
        cout << "Player loses!" << endl;
        money-=bid;
        cout<< money << " dollars left"<<endl;
        if(money<=0)
            counter=n_games;
        counter++;

    }
else {
    //another nested loop runs here until there is a  7 rolled or the previous total is rolled
   int dummy = total;
    while (total !=0){
        roll(firstToss, secondToss, total);
        cout << "player rolled " << firstToss << " + " << secondToss << " = " << total << endl;
        if (total == 7){
            cout<<"player loses!"<<endl;
            money-=bid;
            cout<< money << " dollars left"<<endl;
            if(money<=0)
                counter = n_games;
            total = 0;
        }
        else if (total == dummy){
            cout<<"player wins!"<<endl;
            money+=bid;
            cout<<money<< " dollars left"<<endl;
            total = 0;
        }

    }
    counter++;
}
}

    return 0;
}

//method assigns random numbers to a variable that is passed and then adds them to the total
void roll(int& valA, int& valB, int& total){
    valA = rand()%6+1;
    valB = rand()%6+1;

    total = valA+valB;
}
//this is a method to give a message to the user
void intro(){
    cout<<"Welcome to Vegas! The name of the game is craps.\n You win by rolling a 7 or an 11 on the first toss.\n If you roll a 2, 3 or 12, then you lose.\n "
          "If any other number is rolled, keep rolling until you roll the same number to win.\n "
          "If you now roll a 7, then you lose! Ready?\n"
          " Enter a random seed value and the number of games you wish to play (minimum of 5)"<< endl;


}