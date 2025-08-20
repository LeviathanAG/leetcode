#include <bits/stdc++.h>
using namespace std;
 
void merge(vector<int> &mpp, int low , int mid , int high, int size){
    vector<int> temp_arr;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right <=high){
        if(mpp[left] <= mpp[right]){
            temp_arr.push_back(mpp[left++]);
            
        }
        else {
            temp_arr.push_back(mpp[right++]);
        }
    }
    while(left<=mid){
        temp_arr.push_back(mpp[left++]);
    }
    while(right<=high){
        temp_arr.push_back(mpp[right++]);
    }
    for(int i = low ; i<=high;i++){
        mpp[i]=temp_arr[i-low];
    }


}

void mergeSort(vector<int> &mpp,int low, int high, int size){
    // base case to stop recursion......
    
    if(low >= high){
        return;
    }
    int mid = (low + high)/2;
    mergeSort(mpp,low,mid,size);
    mergeSort(mpp,mid+1,high,size); // we are dividing the array into smaller parts and recursing basically it divides until there are singluar elements in the array then we sort em.
    merge(mpp, low , mid , high ,size); // after the backtracking occurs the merging starts and it starts merging in the induvidual arrays.


}
int main()
{
    vector<int> mpp= { 9, 6 , 11 , 13 , 81, 15 , 7, 4, 19};
    int size = mpp.size();
    int low = 0;
    int high = size - 1;
    mergeSort(mpp,low,high,size);
    for(auto x : mpp){
        cout<< x << " ";
    }

        // tL = NLogN
}       // sT = o(N)