#include<iostream>
#include<vector>

using namespace std;

int linear_search(vector<int>&v,int k){
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            cnt++;
        }
    }
    return cnt;
}

int binary_search_start(vector<int>&v,int k){
    int low=0,high=v.size()-1;
    int cnt=0,start=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==k){
            start=mid;
            high=mid-1;
        }
        if(k>v[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return start;
}
int binary_search_end(vector<int>&v,int k){
    int low=0,high=v.size()-1;
    int cnt=0,end=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==k){
            end=mid;
            low=mid+1;
        }
        if(k>v[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return end;
}

int main(){
    int n,k;
    cout<<"Enter Size :";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter Key :";
    cin>>k;
    // int cnt=linear_search(v,k);
    int cnt=binary_search_end(v,k)-binary_search_start(v,k)+1;
    if(cnt!=0)
        cout<<"Count of key is :"<<cnt<<endl;
    else
        cout<<"Element Not Found !!!"<<endl;

    cout<<binary_search_start(v,k)<<"     "<<binary_search_end(v,k)<<endl;
    return 0;
}


// two pointer approach 
// map
// linear search
// binary search
