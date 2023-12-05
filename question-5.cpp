    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter number : ";
        cin>>n;
        int low = 0;
        int high = n-1;
        bool flag = false;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(mid*mid==n){
                flag = true;
                break;
            }
            else if(mid*mid >n){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        if(flag == false) cout<<"No";
        else cout<<"YES";
    }