#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>v,int key){
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==key) return i;
    }
    return -1;
}

int main(){
    vector<int>v={1,4,7,2,10,25,67,34,23,11};
    int key;
    cin>>key;
    int res=linearSearch(v,key);
    if(res>=0) cout<<"key found at indx :"<<res<<endl;
    else cout<<"Key not found !!!"<<endl;
    return 0;
}