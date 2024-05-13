#include "bankto.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    Bank Dick("Dick", "133153664");
    cout << "你需要做的操作：\n1、存款\n2、取钱" << std::endl;
    int num = 0;
    cin >> num;
    double save = 0;
    double out = 0;
    switch (num)
    {
        case 1:
            cout << "请输入你要存入的钱数:>";
            cin >> save;
            Dick.put_in(save);
            break;
        case 2:
            cout << "请输入你要取出的钱数:>";
            cin >> out;
            Dick.get_out(out);
            break;
        default:
            break;
    }
    cout << "您现在总钱数是：";
    Dick.Show();

    return 0;
}