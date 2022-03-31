#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int arr[9] = {4,2,8,0,5,7,1,3,9};

    for(int j =0; j<=8; j++){
        for (int i = 0; i<=8-j; i++){
            if(arr[i] > arr[i+1]){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            }
        }
    }
    for(int i = 0; i<= 8; i++){
        cout<< arr[i] <<endl;
    }

    return 0;
}