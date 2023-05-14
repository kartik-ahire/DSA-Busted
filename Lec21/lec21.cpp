//---------------SOLUTIONS--------------//

/*


// Q1 : Move elements after given key in rotated array

void move_elements_in_rotated_array(int arr[],int size,int temp[],int key)
{
    for (int i = 0; i < size; i++)
    {
        arr[(i+key)%size] = temp[i];
    }
}

// Q2 : Check whether the array is sorted and rotated?

int check_rotated_sorted(int arr[],int size)
{
    int cnt = 0;
    for (int i = 0; i < size-1; i++)
    {
        if(arr[0]<arr[size-1])
        {
            cnt++;
        }
        else if(arr[i]>arr[i+1])
        {
            cnt++;
        }

    }
    
    return cnt;
}


// Q3 : Addition of the arrays.

void array_addition(int a1[],int s1,int a2[],int s2)

{
    int i = s1-1;
    int j = s2-1;
    int cary = 0;
    vector<int>ans;
    // Case 1
    while (i>=0 && j>=0)
    {
        int sum = a1[i] + a2[j] + cary;
        cary = sum / 10;
        sum = sum %  10;
        ans.push_back(sum);
        i--,j--;
    }
    
    // Case 2
    while (i>=0)
    {
        int sum = a1[i] + cary;
        cary = sum / 10;
        sum = sum %  10;
        ans.push_back(sum);
        i--;
    }
    
    // Case 3
    while (j>=0)
    {
        int sum = a2[j] + cary;
        cary = sum / 10;
        sum = sum %  10;
        ans.push_back(sum);
        j--;
    }

    // Case 4
    while (cary != 0)
    {
        int sum = cary;
        cary = sum / 10;
        sum = sum %  10;
        ans.push_back(sum);
    }
    
    reverse(ans.begin(),ans.end());

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}


*/