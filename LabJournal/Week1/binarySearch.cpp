#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>v,int key){
    int n=v.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==key) return mid;
        if(key>v[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main(){
    vector<int>v={1,4,7,2,10,25,67,34,23,11};
    int key;
    cin>>key;
    int res=binarySearch(v,key);
    if(res>=0) cout<<"key found at indx :"<<res<<endl;
    else cout<<"Key not found !!!"<<endl;
    return 0;
}