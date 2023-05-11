
#include<iostream>
using namespace std;
 
int main() 
{

int n;
cout<<"Enter the number:";
cin>>n;

// Patterns

/*

Taking input from user

int n;
cout<<"Enter the number of rows:";
cin>>n;

*/


/*
    Pattern 1


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
    Pattern 2

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<i;
        j++;
    }
    cout<<endl;
    
    i++;
}

*/

/*

    Pattern 3

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/

/*
    Pattern 4

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<n-j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*

    Pattern 5

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<m<<" ";
        m++;
        j++;
    }
    cout<<endl;
    i++;
    
}

*/


/*
    Pattern 6
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/

/*

    Pattern 7

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/


/*

    Pattern 8

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 9 : Method 1

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<i+j-1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*

    Pattern 9 : Method 2
int i=1;
while (i<=n)
{
    int value = i;
    int j=1;
    while (j<=i)
    {
        cout<<value<<" ";
        value++;
        j++;
    }
    cout<<endl;
    i++;
}
*/

/*
    Pattern 10
    
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<i-j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
    
}

*/

/*
    Pattern 11

int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        char ch = 'A'+i-1;
        cout<< ch <<" ";
        j++;
    }
    cout<<endl;
    i++;

}

*/

/*
    Pattern 12
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        char ch = 'A'+j-1;
        cout<< ch <<" ";
        j++;
    }
    cout<<endl;
    i++;

}
*/

/*
    Pattern 13

char ch = 'A';  
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {         
        cout<< ch <<" ";
        ch = ch + 1;
        j++;        
    }
    cout<<endl;
    i++;

}

*/

/*
    Pattern 14


int i=1;
while (i<=n)
{
    int j=1;    
    char ch = i+ j +'A'-2 ; // Formula formed.

    while (j<=n)
    {   
             
        cout<< ch <<" ";
        ch++;
        j++;        
    }
    cout<<endl;
    i++;

}

*/

/*
    Pattern 15

int i=1;
while (i<=n)
{
    int j=1;    

    char ch = 'A' + i - 1;

    while (j<=i)
    {   
             
        cout<< ch <<" ";
        j++;        
    }
    cout<<endl;
    i++;

}

*/

/*
    Pattern 16

char ch='A';
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<ch<<" ";
        ch = ch + 1;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 17 : Method 1

int i=1;
while (i<=n)
{
    int j=1;

    char ch= i + j + 'A' - 2;  // Formula


    while (j<=i)
    {
        cout<<ch<<" ";
        ch = ch + 1;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 17 : Method 2 (easy method)

int i=1;
while (i<=n)
{
    int j=1;

    char ch= 'A'+ i - 1;  // Formula


    while (j<=i)
    {
        cout<<ch<<" ";
        ch = ch + 1;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 18

int i=1;
while (i<=n)
{
    int j=1;

    char ch='A' + n - i;  // Formula


    while (j<=i)
    {
        cout<<ch<<" ";
        ch = ch + 1;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 19

int i=1;
while (i<=n)
{
    // Creating spaces

    int space= n -i;
    while (space)
    {
        cout<<" ";
        space--;
    }
    
    // Creating stars

    int j=1;
    while (j<=i)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
   
    i++;
}

*/

/*
    Pattern 20 : method 1

int i=1;
while (i<=n)
{
    int j=n;
    while (j>=i)
    {
        cout<<"*";
        j--;
    }
    cout<<endl;
   
    i++;
}


*/

/*
    Pattern 20 : method 2

int i=1;
while (i<=n)
{
    int j=1;
    while (j<= n - i + 1) // Formula
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
   
    i++;
}

*/

/*
    Pattern 21

int i=1;
while (i<=n)
{
    // Creating space
    
    int space = i - 1;
    while(space)
    {
        cout<<" ";
        space--;
    }
    
    int j=1;
    while (j<= n - i + 1) // Formula for stars
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 22

int i=1;
while (i<=n)
{
    // Creating space

    int space = i - 1;
    while(space)
    {
        cout<<" ";
        space--;
    }
    
    int j=1;
    while (j<= n - i + 1) // Formula for stars
    {
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 23

int i=1;
while (i<=n)
{
    // Creating space

    int space = n - i;
    while(space)
    {
        cout<<" ";
        space--;
    }
    
    int j=1;
    while(j<=i)
    {
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 24

int num=1;
int i=1;
while (i<=n)
{
    // Creating spaces
    int space=1;
    while (space <= n-i)
    {
        cout<<"  "; // Two spaces
        space++;
    }
    
    int j=1;
    while (j<=i)
    {
        cout<< num << " ";
        num++;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
    Pattern 25

int num=1;
int i=1;
while (i<=n)
{
    // Space
    int space = 1;
    while (space <= n-i)
    {
        cout<<" "; // One space
        space++;
    }
    
    

    int j=1;
    while (j<=i)
    {
        cout<<num<<" ";
        num++;
        j++;
    }
    cout<<endl;

    i++;
}

*/

/*

Pattern 26

    int i=1;
    while (i<=n)
    {
        int space=1;
        while (space <= n-i )
        {
            cout<<"  ";
            space++;
        }
        
        int j=1;
        while (j<=i)
        {
            cout<<j<<" ";
            j++;
        }

        j=i-1;
        while (j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        
        cout<<endl;
        

        i++;
    }




*/

/*

Pattern 27

    int i=1;
    while (i<=n)
    {
        // Part 1 : Numbers from 1 to (n-i+1)
        int j=1;
        while (j <= n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        
        // Part 2 : Stars from i-1, 2 times
        j=1;
        while (j<=(i-1)*2)
        {
            cout<<"*"<<" ";
            j++;
        }
        
        // Part 3 : Numbers from (n-i+1) to 1
        j=n-i+1;
        while (j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        
        i++;
    
    }


*/
}