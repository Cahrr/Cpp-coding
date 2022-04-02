#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int arr[5] = {1,3,2,5,4};
    int arr1[5];
    for(int i = 0; i<=4; i++){
        int n = arr[i];
        arr1[4-i] = n;
    }
    cout<<"元素逆置后的数组为:";

    for (int i = 0; i <5; i++){
		cout <<arr1[i] << endl;
	}
    return 0;
}