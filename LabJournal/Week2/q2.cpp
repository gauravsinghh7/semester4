#include<iostream>
#include<vector>

using namespace std;



int main(){
    int n,i,j,k;
    cout<<"Enter Size :";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(k=n-1;k>=2;k--){
        int sum =v[k];
        i=0;
        j=k-1;
        while(i<j){
            if(v[i]+v[j]==sum){
                cout<<i+1<<" "<<j+1<<endl;
            }
            if(sum>v[i]+v[j]) j--;
            else i++;
        }
    }
    return 0;
}

// brute force 
// map 
// target sum approach 
