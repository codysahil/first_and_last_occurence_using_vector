
#include<iostream>
using namespace std;
vector<int> find(int arr[],int n,int x)
    {
    vector<int> ans;
        bool exists = find(arr, arr + n, x) != arr + n;
    if (exists) {
        for(int i = 0; i<n; i++){
        if(arr[i]==x){
            ans.push_back(i);
        }
        
    }
    } else {
        return {-1,-1};
    }

    
    
    return {ans.front(),ans.back()};
    }
#include<iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,5,5,5,5,8};
int n = sizeof(arr)/sizeof(arr[0]);
find(arr,n,5);
return 0;
}

