#include<iostream>
using namespace std;


bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if( n%i ==0)
        {
            return 1;
        }
    }

    return 0;
    

}

void switch_case()
{

    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"MENU\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.MODULO\nSelect the operation:";
    cin>>c;
    switch (c)
    {
        case 1:
            cout<<"a + b = "<<a+b;
            break;
        case 2:
            cout<<"a - b = "<<a-b;
            break;
        case 3:
            cout<<"a * b = "<<a*b;
            break;
        case 4:
            cout<<"a / b = "<<a/b;
            break;
        case 5:
            cout<<"a % b = "<<a%b;
            break;
        
        default:
            cout<<"Please select proper choice"<<endl;
    }
}

int power(int num,int degree)
{
    int ans = 1;
    for (int i = 1; i <= degree; i++)
    {
        ans = ans * num;
    }

    return ans;
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n ; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
    
}

double ncr(int n1,int r1)
{
    double num = fact(n1);
    double denom = fact(r1)*fact(n1-r1);
    return num/denom;
}

int main()
{
    cout<<power(2,3)<<endl;
    cout<<fact(3)<<endl;
    cout<<ncr(3,2)<<endl;
    cout<<"Switch case : "<<endl;
    switch_case();
    
    return 0;
}