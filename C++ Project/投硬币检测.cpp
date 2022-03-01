#include <iostream>
using namespace std;

int wow(int a);
int wow(int a)
{
    int c;
    if (a == 10)
    {
        c = 1;
    }
    else if (a == 12)
    {
        c = 2;
    }
    else
    {
        c = 3;
    }

    return c;
}

int main()
{
    const int Coin_1 = 10, Coin_2 = 12;
    int Coin1, Coin2, Coin3;
    int i;
    for(;;)
    {
        cout << "请投币(比特币):";
        cin >> Coin1;
        switch (Coin1)
        {
            case Coin_1:
            {
                do
                {
                    switch (Coin1)
                    {
                        case Coin_2:
                        {
                            cout << "请投币(以太坊):";
                            cin >> Coin2;
                            Coin3 = wow(Coin2);
                            if (Coin3 == 2)
                            {
                                cout << "这个硬币你使用过了!!" << endl;
                            }
                            else if (Coin3 == 1)
                            {
                                cout << "欢迎使用投币脚本!!";
                                return 0;
                            }   
                            else if (Coin3 == 3)
                            {
                                cout << "小逼崽子" << endl << "你居然投假币!!" << endl;
                            }
                            else
                            {
                                cout << "小逼崽子" << endl << "你给我机器玩坏了" << endl << "rnm赔钱";
                            }
                            break;
                        }
                        case Coin_1 :
                        {
                            cout << "请投币(以太坊):";
                            cin >> Coin2;
                            Coin3 = wow(Coin2);
                            if (Coin3 == 2)
                            {
                                cout << "欢迎使用投币脚本!!";
                                return 0;
                            }
                            else if (Coin3 == 1)
                            {
                                cout << "这个硬币你使用过了!!" << endl;
                            }
                            else if (Coin3 == 3)
                            {
                                cout << "小逼崽子" << endl << "你居然投假币!!" << endl;
                            }
                            else
                            {
                                cout << "小逼崽子" << endl << "你给我机器玩坏了" << endl << "rnm赔钱";
                            }
                        }
                    }
                    i++;
                    cout << "只有三次机会" << endl << "你已经用了" << i << "次机会" << endl;
                } while(i < 3);
                break;
            }
            case Coin_2:
            {
                do
                {
                    switch (Coin1)
                    {
                        case Coin_2:
                        {
                            cout << "请投币(以太坊):";
                            cin >> Coin2;
                            Coin3 = wow(Coin2);
                            if (Coin3 == 2)
                            {
                                cout << "这个硬币你使用过了!!" << endl;
                            }
                            else if (Coin3 == 1)
                            {
                                cout << "欢迎使用投币脚本!!";
                                return 0;
                            }   
                            else if (Coin3 == 3)
                            {
                                cout << "小逼崽子" << endl << "你居然投假币!!" << endl;
                            }
                            else
                            {
                                cout << "小逼崽子" << endl << "你给我机器玩坏了" << endl << "rnm赔钱";
                            }
                            break;
                        }
                        case Coin_1 :
                        {
                            cout << "请投币(以太坊):";
                            cin >> Coin2;
                            Coin3 = wow(Coin2);
                            if (Coin3 == 2)
                            {
                                cout << "欢迎使用投币脚本!!";
                                return 0;
                            }
                            else if (Coin3 == 1)
                            {
                                cout << "这个硬币你使用过了!!" << endl;
                            }
                            else if (Coin3 == 3)
                            {
                                cout << "小逼崽子" << endl << "你居然投假币!!" << endl;
                            }
                            else
                            {
                                cout << "小逼崽子" << endl << "你给我机器玩坏了" << endl << "rnm赔钱";
                            }
                        }
                    }
                    i++;
                    cout << "只有三次机会" << endl << "你已经用了" << i << "次机会" << endl;
                } while(i < 3);
                break;
            }
            default :
            cout << "小逼崽子" << endl << "你居然投假币!!" << endl;
        }
        i = 0;
    }
}