#include <iostream>
#include <string>
#include "showMenu.h"
#include "addPerson.h"
#include "showPerson.h"
#include "deletePerson.cpp"

using namespace std;

int main(){
    Addressbooks abs;
    abs.size = 0;    
    
    int select = 0;

    while(true)
    {
        showMenu();
        
        cin >> select;

        switch(select)
        {
            case 1: // 添加联系人
                addPerson(&abs);
                break;
            case 2: // 显示联系人
                showPerson(&abs);  
                break;
            case 3: // 删除联系人
                
                break;
            case 4: // 查找联系人
                break;
            case 5: // 修改联系人
                break;
            case 6: // 清空联系人
                break;
            case 0: // 退出通讯录
                cout << "欢迎下次使用" << endl;
                return 0;
                break;
        default:
            break;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
        }
    }
    
    return 0;

}


