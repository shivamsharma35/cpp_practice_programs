#include<iostream>
#include<conio.h>
using namespace std;
int main(){

double n1,n2,n3;

cout<<"enter three number : ";
cin>>n1>>n2>>n3;
 
 if(n1>=n2 || n1>=n3)
 cout  << n1<<"is greatest";

 else if(n2>=n3 ) 
 cout<<n2<<"is greatest";

 else 
 cout<< n3 <<" is greatest";



getch();
 return 0;     







}