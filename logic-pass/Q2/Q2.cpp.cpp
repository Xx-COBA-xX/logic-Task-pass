#include<iostream>
using namespace std;

int Is_Prime (int);
int main ()
  {
  	int Num ;
  	cout << "Enter Number : ";
  	cin >> Num ;
  	
  	for (int i =1 ; i<= Num ; i++)
  	   {
  	   	if (Is_Prime(i) == 1)
  	   	   cout << i << ", " ;
		 }
  }
int Is_Prime (int Num) 
  {
  	int Flag = 1 ;
  	for (int i =2 ; i <= Num/2 ; i++)
  	  {
  	  	if (Num % i == 0 ) 
  	  	   Flag = 0 ;
		}
	return Flag ;
  }
