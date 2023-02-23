#include<iostream>
using namespace std;
//Three values inital, mid and end
//Firstly the array should be sorted
//Secondly we can see the loop size and search size is decreasin 
//by half in every case 
// Time complexity is O(log(n) to the base 2)
int binarysearch(int *arr,int n, int k) {
    int start=0;
    int end = n-1;
    while(start<end){
        int mid = (start + end)/2;
        if(arr[mid]==k){
            return mid+1;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
        if(arr[mid]>k){
            end = mid-1;
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
    //Array should be sorted else you can miss the element
    //You are searching for
    int val = binarysearch(arr,a,k);
    cout<<val<<endl;
}