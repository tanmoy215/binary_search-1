#include<iostream>
using namespace std;
int main(){
    int n =4;
    int arr[n][n]={{0,1,1,1},{0,0,1,1},{0,1,1,1},{1,1,1,1}};
    int target =1;
int maxone =0;
int row = 0;
    for(int i=0;i<n;i++){
    int low = 0;
    int high = n-1;
    int ans =-1;
    int count = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[i][mid]==target){
                if(mid==0){
                    ans = mid;
                    break;
                }
                else if(arr[i][mid-1]!=target){
                    ans = mid;
                    break;
                }
                else high = mid-1;
                
            }
            else{
                    low = mid+1;
            }
        }
        if(ans!=-1) count=n-ans;
        if(maxone<count){
            maxone = count;
        row = i;
        }
    }
    cout<<"Row is : "<<row<<endl<<"Final value : "<<maxone;
}