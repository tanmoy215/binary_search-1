#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,3,4};
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }
        else if(arr[mid]!=mid+1){
            cout<<arr[mid];
            break;
        }
    }
}