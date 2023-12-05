#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int count=0;
        int sum=0;
        int ans=0;
        int temp=n;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
             n=n-sum;
            if(n>=0)
            {
                ans=i;
            }
            sum=0;
        }
        cout<<ans;
}