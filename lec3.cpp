#include<iostream>
using namespace std;
 
int main(){

/*
//  ================  To print numbers from 1 to n. ================ 

    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int i=1;
    while (i<=a)
    {
        cout<<i<<" ";
        i++;
    }
*/

/* 
//  ================ To print the sum from 1 to n.  ================ 
int a;
cout<<"Enter the number:";
cin>>a;
int sum=0;
int i=0;
while (i<=a)
{
    sum=sum+i;
    i+2;
}
cout<<"The sum is :"<<sum;
*/

/*
// ================  To print the sum of all even numbers between 0 to n. ================ 
int a;
cout<<"Enter the number:";
cin>>a;
int sum=0;
int i=0;
while (i<=a)
{
    sum=sum+i;
    i=i+2;
}
cout<<"The sum of even numbers is :"<<sum;
*/

/* 
    Degree and Fahrenheit HW
----------------------------------
/*
    
//  ================     Fahrenheit to Celsius  ================ 

float fah=1,cel;
while (fah<6)
{
cel=(5.0/9)*(fah-32);
cout<<"Fahrenheit : "<<fah<<" = "<<"Degree : "<<cel<<endl;
fah++;    
}

//  ================    Degree to Fahrenheit  ================ 

float C=1,F;
while (C<11)
{
    F=(9.0/5*C)+32;
    cout<<"Degree : "<<C<<" = "<<"Fahrenheit : "<<F<<endl;
    C++;
}
  
*/



/* 
// ================ Prime or not for i. ================ 
int a;
cout<<"Enter a number:";
cin>>a;

int i=2;
while (i<a)
{
    if(a%i==0){
        cout<<"Not prime for "<<i<<endl;
    }

    else{
        cout<<"Prime for "<<i<<endl;
    }
    i++;
}

*/

// Patterns

/*
// ================ First pattern ================ 

int n;
cout<<"Enter the number of rows:";
cin>>n;

int i=0;
while (i<n)
{
    int j=0;
    while (j<n)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;

    i++;
    
}

*/

/*
// ================ Second pattern ================ 

int a;
cout<<"Enter the number of rows:";
cin>>a;

int i=1;
while (i<=a)
{
    int j=1;
    while (j<=a)
    {
        cout<<i;
        j++;
    }
    cout<<endl;
    
    i++;
}

*/

    /*
    // ================ Using ASCII values  ================  

    char ch;
    cout<<"Enter a character from (A-Z,a-z,0-9):";
    cin>>ch;

    if(64<ch and ch<91){
        cout<<"Upper case.";
    }
    else if(47<ch and ch<58){
        cout<<"Numerals";
    }
    else if(96<ch and ch<123){
        cout<<"Lower case.";
    }
    else{
        cout<<"Invalid input";
    }
    
    */

   /*
    
    // ================  Using characters ================  

    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    if(ch>='a' and ch<='z'){
        cout<<"Lower case";
    }
    else if(ch>='A' and ch<='Z'){
        cout<<"Upper case";
    }
    else if(ch>='0' and ch<='9'){
        cout<<"Numericals";
    }
    else
    {
        cout<<"Other character";
    } 

   */


return 0;}