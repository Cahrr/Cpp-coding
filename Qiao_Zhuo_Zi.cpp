#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;
/*
案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，
或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
*/

int main()
{
   
    for (int x = 1; x<=100; x++){
        if(x%7 == 0 or x/10 == 7 or(x - (x%10)*10) == 7){
            cout<<"敲桌子"<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }

    return 0;
}

