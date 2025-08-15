// insertion sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= { 9, 6 , 11 , 13 , 81, 15 , 7, 4, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int j;
    for(int i=0; i <= size - 1; i++){
        j = i ;
        while(j>0 && arr[j-1] > arr[j]){

            int temp = arr[ j-1];
            arr[j-1]= arr[j];
            arr[j]=temp;
            j--;

        }

      
    }
      for(int i=0;i <size; i++){
            cout<< arr[ i]<< " ";
        }


        // best case is o(n ) and avg and worst cases are o(n^2)
}