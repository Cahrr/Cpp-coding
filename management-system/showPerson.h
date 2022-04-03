#include <iostream>
#include <unistd.h>
#include <string>
#include "addPerson.h"
using namespace std;

void showPerson(Addressbooks * abs)
{
    if (abs -> size == 0)
    {
        cout << "通讯录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs -> size; i++)  
        {
            cout << "**************" << endl;
            cout << "联系人" << i+1 <<endl;
            cout << "姓名：" << abs -> personarr[i].name << endl;
            cout << "性别：" << abs -> personarr[i].sex << endl;
            cout << "年龄：" << abs -> personarr[i].age << endl;
            cout << "联系电话：" << abs -> personarr[i].phone << endl;
            cout << "家庭住址：" << abs -> personarr[i].address << endl;
            cout << "**************" << endl;
            system("clear");
        }
    }
}

// int main()
// {
//     Addressbooks abs;
//     abs.size = 0;
//     addPerson(&abs);
//     pause();
//     showPerson(&abs);
//     return 0;
// }