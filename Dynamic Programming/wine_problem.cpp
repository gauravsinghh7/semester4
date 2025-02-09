#include<iostream>
#include<vector>

using namespace std;

// 239. Wines Problem 

// Top Down DP Approach

int wines(vector<vector<int>>&dp,vector<int>price,int l,int r,int y){
    // base case
    if(l>r){
        return 0;
    }
    // need to check if state is already completed
    if(dp[l][r]!=0) return dp[l][r];

    int left= y*price[l]+wines(dp,price,l+1,r,y+1);
    int right= y*price[r]+wines(dp,price,l,r-1,y+1);
    return dp[l][r]=max(left,right);
}

int main(){
    vector<int>arr={2,3,5,1,4};
    int n=arr.size();
    // vector<vector<T>> v(n, vector<T>(m, value));

    vector<vector<int>>dp(10,vector<int>(10,0));

    cout<<wines(dp,arr,0,n-1,1)<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}