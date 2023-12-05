    #include<iostream>
    using namespace std;
    int main(){
        int n=6;
        int arr[n]={0,0,0,0,0,0};
        int low = 0;
        int high =n-1,mid;
        int ans =-1;
        while(low<=high){
            mid = low +(high-low)/2;
        if(arr[mid]==1){
            ans = mid;
            high = mid-1;
        }
        else low =mid+1;
        }
        if(ans==-1) cout<<"0";
        else cout<<n-ans;
    }