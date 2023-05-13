/*

1. Taking input                             
2. Printing input                           
3. Getting min & max element in the array   
4. Sum of the elements                      
5. Linear search                            
6. Reverse the array                        

*/
#include<iostream>
#include<climits>
using namespace std;

// Taking elements in the array using the functions:
// --------------------------------------------------


int get_elements(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i<<"th element: ";
        cin>>arr[i];
    }
    
}

// Printing the elements of the array using the functions:
// -------------------------------------------------------
void print_array(int arr[],int size)
{
    cout<<"PRINTING THE ELEMENTS:";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Getting the minimum and maximum element in the array using the functions:
// -------------------------------------------------------------------------

int get_min(int arr[],int size)
{
    cout<<"MINIMUM ELEMENT OF THE ARRAY:";
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<min<<endl;
}

int get_max(int arr[],int size)
{
    cout<<"MAXIMUM ELEMENT OF THE ARRAY:";
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<max<<endl;
}

// Getting the sum of the elements of the array:
// ---------------------------------------------

void get_sum(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"SUM of the elements: "<<sum<<endl;
}

// LINEAR SEARCH : to check whether the element is present or not ?

int search_arr(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
       
    }

    return 0;
    

}

// REVERSE THE ARRAY

void swap_arr(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;       
    }
    


}

int main()
{


    return 0;
}

