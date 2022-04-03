#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

void showMenu()
{
    string menu1 = "1、添加联系人";
    string menu2 = "2、显示联系人";
    string menu3 = "3、删除联系人";
    string menu4 = "4、查找联系人";
    string menu5 = "5、修改联系人";
    string menu6 = "6、清空联系人";
    string menu7 = "0、退出通讯录";

    cout << "***********************" << endl;
	cout << "*****" << menu1 << "*****" << endl;
	cout << "*****" << menu2 << "*****" << endl;
	cout << "*****" << menu3 << "*****" << endl;
	cout << "*****" << menu4 << "*****" << endl;
	cout << "*****" << menu5 << "*****" << endl;
	cout << "*****" << menu6 << "*****" << endl;
	cout << "*****" << menu7 << "*****" << endl;
	cout << "***********************" << endl;
}