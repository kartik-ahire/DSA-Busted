#include<bits/stdc++.h>
using namespace std;

bool is_safe(int x,int y,vector<vector<int>> m,int n,vector<vector<int>> visited)
{   //---- inside the matrix ---------|---- visited ------ | -- path open --- |
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    } 
    else
    {
        return false;
    }
}

void solve(vector<vector<int>>m,int n,vector<string>& ans,int x,int y,vector<vector<int>> visited,string path)
{
    // x,y reached
    // Destination reached
    if(x == n-1 && y == n-1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;

    // 4 choices : Down / Right / Left / Up
    
    // Down
    int new_x = x+1;
    int new_y = y;
    if(is_safe(new_x,new_y,m,n,visited))
    {
        path.push_back('D');
        solve(m,n,ans,new_x,new_y,visited,path);
        path.pop_back();
    }
    // Right
    new_x = x;
    new_y = y+1;
    if(is_safe(new_x,new_y,m,n,visited))
    {
        path.push_back('R');
        solve(m,n,ans,new_x,new_y,visited,path);
        path.pop_back();
    }
    // Up
    new_x = x-1;
    new_y = y;
    if(is_safe(new_x,new_y,m,n,visited))
    {
        path.push_back('U');
        solve(m,n,ans,new_x,new_y,visited,path);
        path.pop_back();
    }
    // Left
    new_x = x;
    new_y = y-1;
    if(is_safe(new_x,new_y,m,n,visited))
    {
        path.push_back('L');
        solve(m,n,ans,new_x,new_y,visited,path);
        path.pop_back();
    }


    // Backtracking 
    visited[x][y] = 0;
}

vector<string> find_path(vector<vector<int>> &m,int n)
{
    // storing final answer
    vector<string> ans;
    // If rat don't reach destination
    if(m[0][0]==0)
    {
        return ans;
    }

    int src_x = 0;
    int src_y = 0;

    // Visited vector initialized with 0
    vector< vector<int> > visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    // Storing single possible path    
    string path = "";   

    // Checking the possible path
    solve(m,n,ans,src_x,src_y,visited,path);
    
    // Sorting order in lexicography order
    sort(ans.begin(),ans.end());

    return ans;
}

int main()
{
    int n = 4;
    vector<vector<int>> m = {{1,1,1,0},{0,1,1,1},{1,1,0,1},{0,1,1,1}};
    vector<string> ans = find_path(m,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
        cout<<endl;
    }


    return 0;
}