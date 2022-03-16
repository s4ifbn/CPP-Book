#include<iostream>
using namespace std;
int main () {
 char grade;
 cout<<"What’s your grade? ";
 cin>>grade;
 switch (grade) {
   case 'A': cout<<"Excellent"; break;
   case 'B': cout<<"Very Good"; break;
   case 'C': cout<<"Good"; break;
   case 'D': cout<<"Medium"; break;
   case 'E': cout<<"Accepted"; break;
   case 'F': cout<<"Work Harder"; break;
   default:  cout<<"Enter A, B, C, D, E or F";
  } //end of switch
}