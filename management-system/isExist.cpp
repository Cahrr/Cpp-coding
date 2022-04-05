#include <iostream>
#include <unistd.h>
#include <string>
#include "addPerson.h"
using namespace std;

int isExist(Addressbooks * abs, string name)
{
    for (int i = 0; i < abs -> size; i++)
    {
        if(abs -> personarr[i].name == name)
        {
            return i;
        }
    }
    return -1;
}