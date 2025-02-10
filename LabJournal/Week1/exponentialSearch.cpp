#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>nums,int first,int last,int target){
    while(first<=last)
    {
        int mid= (last+first)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            first = mid+1;
        else
            last= mid-1;     
    }
    return -1;
}

int exponentialSearch(vector<int>nums,int key){
    int prev=0;
    int next=1;
    int n=nums.size();
    int power=2;
    while(next<n)
    {
        if(nums[next]==key){
            return next;
        }
        if(nums[next] > key){
            return binarySearch(nums,prev,next,key);
        }
        prev=next+1;
        power*=2;
        next = (prev+power)-1;
        cout<<next<<" "<<endl;
    }
    return binarySearch(nums,prev,n-1,key);
}

int main(){
    int n ,key,val;
    vector<int>nums;
    cout<<"Enter the number of elements : ";
    cin >> n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin >> val;
        nums.push_back(val);
    }
    cout<<"Enter the target key : ";
    cin >> key;
    int ans=exponentialSearch(nums,key);
    cout<<ans;
}