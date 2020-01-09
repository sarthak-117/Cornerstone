#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void roll(int& valA, int& valB, int& total);
void intro();

int main() {
//declare variables
//get user input by first function for the amt of games being done
//assign random numbers to the
int n_games, firstToss, secondToss, start, total;
int counter = 0, money = 1000;
intro();
cin>>start;
cin>>n_games;
while(n_games<5){
    if(n_games <5)
        cout<<"not a valid number"<<endl;
    cin>>n_games;
}

srand(start);

while (counter<n_games) {
    roll(firstToss, secondToss, total);
    cout << "player rolled " << firstToss << " + " << secondToss << " = " << total << endl;
    if (total == 7 || total == 11) {
        cout << "Player wins!" << endl;
        counter++;
    } else if (total == 2 || total == 3 || total == 12) {
        cout << "Player loses!" << endl;
        counter++;
    }
else {
   int dummy = total;
    while (total !=0){
        roll(firstToss, secondToss, total);
        cout << "player rolled " << firstToss << " + " << secondToss << " = " << total << endl;
        if (total == 7){
            cout<<"player loses!"<<endl;
            total = 0;
        }
        else if (total == dummy){
            cout<<"player wins!"<<endl;
            total = 0;
        }

    }
    counter++;
}
}

    return 0;
}

void roll(int& valA, int& valB, int& total){
    valA = rand()%6+1;
    valB = rand()%6+1;

    total = valA+valB;
}
void intro(){
    cout<<"Welcome to Vegas! The name of the game is craps. You win by rolling a 7 or an 11 on the first toss.If you roll a 2, 3 or 12, then you lose."
          " If any other number is rolled, keep rolling until you roll the same number to win. If you now roll a 7, then you lose! Ready? Enter a random seed value"
          " and the number of games you wish to play (minimum of 5)"<< endl;


}