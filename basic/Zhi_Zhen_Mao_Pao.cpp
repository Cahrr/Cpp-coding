#include<iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;

void BubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - 1 - i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void PrintArray(int arr[], int len)
{
    for(int i = 0; i < len; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[10] = {2,4,5,2,6,7,8,10,3,18};
    int len = sizeof(arr)/sizeof(int);
    BubbleSort(arr,len);
    PrintArray(arr,len);
    return 0;
}