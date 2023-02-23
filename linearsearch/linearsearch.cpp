#include<iostream>
using namespace std;
//As we can see there is only one for loop which will run at most
// n times thereforet the time complexity of this is 
// O(n)
int linearserch(int *arr,int a, int k) {
    for(int i =0; i<a; i++){
        if(arr[i]==k){
            return i+1;
        }
    }
    return -1;
}
int main() {
    int a,k;
    cin>>k;
    cin>>a;
    int arr[a];
    for(int i =0; i<a;i++){
        cin>>arr[i];
    }

    int val = linearserch(arr,a,k);
    cout<<val<<endl;
}