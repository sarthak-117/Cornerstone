/*
 * This program demos the use of 1-D arrays and functions. The program will promt the user
 * to enter a word or phrase(without whitespace) and save in a char array
 * Then call is_palin() to determine if it is or not a palindrome. Have function return 1 oro 0 (boolean) as a result
 *
 */
#include <iostream>
using namespace std;
#include <algorithm>
#include <cstring> //strlen() used to find the number of chars in a string
#define MAX 100 //max items for the palindrome list

//function prototype

bool is_palin(const char input[MAX]);

int main() {
   //declare variables
   char input_string[MAX];
   int length;

   // get user input
   cout<<"enter the word or phrase w/o whitespace"<<endl;
   cin>> input_string; //no for loop needed bc char array, one letter per block

   // count the number of chars entered
   length = strlen(input_string);
   cout<< "Num of chars in the string is "<< length<<endl;

   // if test to determine if it is or isnt a palindrome

   if (is_palin(input_string)){
       cout<<"Yes it is a palindrome"<<endl;
   }
   else{
       cout<<"no it is not a palindrome"<<endl;
   }
}
bool is_palin(const char input[MAX]){
    int begin = 0;
    int end = strlen(input)-1;

    while (begin<=end){
        if (input[begin]!=input[end]){
            return false;
        }
        else{
            begin++;
            end--;
        }
    }
}

