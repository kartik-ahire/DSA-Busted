#include<iostream>
using namespace std;

int main() 
{

    int a = 122221;
    int b = 1;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b " << (a|b) << endl;
    cout<<" ~a " << ~a << endl;
    cout<<" a^b " << (a^b) << endl;

    cout<<"\n Bitwise right shift \n";
    cout<< (17>>1)<<endl;
    cout<< (17>>2) <<endl;
    cout<<"\n Bitwise left shift \n";
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;

    int i = 7;
    cout<<"\n Increment and decrement";
    cout<< (++i) <<endl;
    cout<< (i++) <<endl;
    cout<< (i--) <<endl;
    cout<< (--i) <<endl; 

    return 0;
}

// Rev