#include<bits/stdc++.h>
using namespace std;

// ---------- SORT 0 1 2 ----------------------
void sort012(int *arr, int n)
{
   int low = 0, mid = 0, hi = n-1;
   while(mid<=hi)
   {
      switch(arr[mid])
      {
         case 0:
            swap(arr[low++], arr[mid++]);
            break;

         case 1:
            mid++;
            break;

         case 2:
            swap(arr[mid], arr[hi--]);
            break;
      }

   }
}

// --------- Swap alternates -------------------
void swapAlternate(int arr[], int size) 
{
    for(int i = 0; i<size; i+=2 ) 
    {
        if(i+1 < size) 
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

// --------- Pair sum ---------------------------
vector<vector<int> > pairSum(vector<int> &arr, int s)
{
   vector< vector<int> > ans;   
   for(int i=0;i<arr.size(); i++ )
   {
   		for(int j = i+1; j<arr.size(); j++) 
        {
        	if(arr[i] +arr[j] == s)
            {
            	vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
   }
   sort(ans.begin(), ans.end());
   return ans;
}

// ------------ Find unique element --------------
int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

// ------------- Duplicates in array -------------
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    for(int i = 0; i<arr.size(); i++ ) 
    {
    	ans = ans^arr[i];
    }
    for(int i = 1; i<arr.size();i++ ) 
    {
    	ans = ans^i;
    }

    return ans;
}

// --------- Intersection in the array -----------
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) 
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) 
        {
            i++;
        }
        else
        {
            j++;
        }        
    }
    
    return ans;
}

