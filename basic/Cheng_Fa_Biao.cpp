#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;
/*
打印九九乘法表
*/

int main()
{
    for (int x = 1; x <= 9; x++){
        for (int y =1; y <= x; y++){
            cout<<y<<"*"<<x<<"="<<x*y<<" ";
        }
        cout<<endl;
    }

    return 0;
}

