#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) 
    {
        int i=0;
        int n = s.size() - 1;
        while(i<n)
        {
            if(s[i]==s[i+1])
            {
                s.erase(s.begin()+i, s.begin()+i+2);
                i=i-1;
                i=max(0,i);
            }
            else
            {
                i++;
            }
            n = s.size() - 1;
        }
        return s;
    }
};
