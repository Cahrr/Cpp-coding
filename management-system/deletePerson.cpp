#include <iostream>
#include <unistd.h>
#include <string>
#include "addPerson.h"
#include "isExist.h"

using namespace std;

void deletePerson(Addressbooks * abs)
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for(int i = ret; i< abs -> size; i++)
        {
            abs -> personarr[i] = abs -> personarr[i+1];
        }
        abs -> size--;
        cout << "联系人删除成功" << endl;
    }
    else 
    {
        cout << "无此联系人" << endl;
    }
    system("clear");

}