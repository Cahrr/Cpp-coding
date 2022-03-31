#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int arr[5] = {300,350,200,400,250};
    int weight = 0;

    for(int i = 0; i<=4; i++){
        if(arr[i]>arr[i+1]){
            arr[i+1] = arr[i];
        }
    }
    cout<<"最重的小猪体重为："<<arr[4]<<endl;

    return 0;
}