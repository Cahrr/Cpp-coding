#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
using namespace std;
 
int main()
{
   
    for (int x = 1; x<=9; x++){
        for(int y = 0; y<=9; y++){
            for(int z = 0; z<=9; z++){
                int num = x*100 + y*10 +z;
                if( pow(x,3) + pow(y,3) + pow(z,3) ==num){
                    cout << num << endl;    
                }
            }
        }

    }

    return 0;
}

