#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    /*
    // =============== DECIMAL TO BINARY CONVERSION ==================
    int n;
    cout<<"Enter the decimal number:";
    cin>>n;

    int ans = 0;

    int i=0;
    while (n!=0)
    {
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    
    cout<<"The binary number is: "<<ans<<endl;
   
    */

    /*
    // =============== BINARY TO DECIMAL CONVERSION ==================
    int n;
    cout<<"Enter the binary number:";
    cin>>n;

    int ans = 0;
    int i=0;
    while (n!=0)
    {
        int digit = n%10;

        if(digit==1)
        {
            ans = ans + (digit*pow(2,i));

        }

        n=n/10;

        i++;

    }

    cout<<"The decimal number is: "<<ans<<endl;
    */
    
    return 0;
}