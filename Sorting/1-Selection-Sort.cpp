#include<iostream>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    int minIndex;

    for(int i = 0; i<n ; i++){
        minIndex = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }

        //swap arr[i] and arr[minIndex]
        swap(arr[i], arr[minIndex]);

    }
}


int main()
{
 return 0;
}