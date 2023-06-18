#include<iostream> 
using namespace std;

// Fibonacci using recursion
int fib(int n)
{
    // -------------- Base case --------------  
    if(n==0)
    {
        return 0;
    } 
        
    if(n==1)
    {
        return 1;
    } 

    // -------------- Recursive relation -------------- 
    // int small = fibonacci(n-1);
    // int big = small + fibonacci(n-2);

    return fib(n-1) + fib(n-2);
}


int main() 
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;

    cout<<"The fib number is : "<<fib(n)<<endl;        
        
    return 0;
}