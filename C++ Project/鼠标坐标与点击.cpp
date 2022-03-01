#include <iostream>
#include <conio.h>
#include <windows.h>

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1 : 0)

using namespace std;

void Biaoti();
void Xuanxiang();

void Biaoti()
{
    cout << "------------------" << endl;
    cout << "|    欢迎使用    |" << endl;
    cout << "| 好家伙牌点击器 |" << endl;
    cout << "------------------" << endl;
}
void Xuanxiang()
{
    cout << "--------------" << endl;
    cout << "| 1.鼠标坐标 |" << endl;
    cout << "| 2.鼠标点击 |" << endl;
    cout << "--------------" << endl;
}

int main()
{
    POINT p;
    int options; //记录用户选择
    char quit;   //记录用户是否结束程序
    Biaoti();
    Sleep(2000);
    system("cls");
    do
    {
        Xuanxiang();
        cin >> options;
        switch (options)
        {
            case 1: //鼠标坐标
            {
                char quit_1; //记录用户是否结束程序
                do
                {
                    int x, y;       //记录用户x轴和y轴
                    char options_1; //记录用户选择
                    cout << "----------------------" << endl;
                    cout << "|是否要自定义时间循环|" << endl;
                    cout << "|  如果自己不会配置  |" << endl;
                    cout << "| 可以用我给你配置的 |" << endl;
                    cout << "| 如果不会选择否即可 |" << endl;
                    cout << "|是(Y/y)      否(N/n)|" << endl;
                    cout << "----------------------" << endl;
                    cin >> options_1;
                    if (options_1 == 'Y' || options_1 == 'y')
                    {
                        int time_1, time_2; //记录用户所需时间
                        char hook_1;        //监听键盘钩子
                        cout << "请输入X轴坐标:";
                        cin >> x;
                        cout << "请输入y轴坐标:";
                        cin >> y;
                        cout << "请输入开始视频时候的间隔(单位:秒):";
                        cin >> time_1;
                        time_1 = time_1 * 1000;
                        cout << "请输入多长时间循环一次(单位:秒):";
                        cin >> time_2;
                        time_2 = time_2 * 1000;
                        cout << "-------------------------" << endl;
                        cout << "|按Q模拟左键 按W模拟右键|" << endl;
                        cout << "|    按空格键为退出     |" << endl;
                        cout << "-------------------------" << endl;
                        hook_1 = getch(); //获取用户输入的第一个按键
                        while (true)
                        {
                            int now_1;    //区分左右建的点击
                            if (_kbhit()) //如果有按键按下，则_kbhit()函数返回真
                            {
                                hook_1 = _getch(); //使用_getch()函数获取按下的键值
                            }
                            if (hook_1 == VK_SPACE) //判断钩子等于空格是暂停程序
                            {
                                now_1 = 0;
                                Sleep(20);
                                break;
                            }
                            if (hook_1 == 'Q' || hook_1 == 'q')
                            {
                                now_1 = 1;
                                Sleep(100);
                            }
                            if (hook_1 == 'W' || hook_1 == 'w')
                            {
                                now_1 = 2;
                                Sleep(100);
                            }
                            if (now_1 == 1) //左键点击
                            {
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //按下左键
                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //松开左键
                                Sleep(time_1);
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //按下左键
                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //松开左键
                            }
                            if (now_1 == 2) //右键单击
                            {
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                                mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                                Sleep(time_1);
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                                mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                            }
                            if (_kbhit()) //如果有按键按下，则_kbhit()函数返回真
                            {
                                hook_1 = _getch(); //使用_getch()函数获取按下的键值
                                if (hook_1 == VK_SPACE)
                                {
                                    break;
                                }
                            }
                            Sleep(time_2);
                        }
                    }
                    else
                    {
                        char hook_2;
                        cout << "请输入X轴坐标:";
                        cin >> x;
                        cout << "请输入y轴坐标:";
                        cin >> y;
                        cout << "-------------------------" << endl;
                        cout << "|按Q模拟左键 按W模拟右键|" << endl;
                        cout << "|     按空格键为退出    |" << endl;
                        cout << "-------------------------" << endl;
                        hook_2 = getch();
                        while (true)
                        {
                            int now_2;
                            if (_kbhit()) //如果有按键按下，则_kbhit()函数返回真
                            {
                                hook_2 = _getch(); //使用_getch()函数获取按下的键值
                            }
                            if (hook_2 == VK_SPACE)
                            {
                                now_2 = 0;
                                Sleep(20);
                                break;
                            }
                            if (hook_2 == 'Q' || hook_2 == 'q')
                            {
                                now_2 = 1;
                                Sleep(100);
                            }
                            if (hook_2 == 'W' || hook_2 == 'w')
                            {
                                now_2 = 2;
                                Sleep(100);
                            }
                            if (now_2 == 1)
                            {
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //按下左键
                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //松开左键
                                Sleep(40000);
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //按下左键
                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   //松开左键
                            }
                            if (now_2 == 2)
                            {
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                                mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                                Sleep(40000);
                                GetCursorPos(&p);   //获取鼠标坐标
                                SetCursorPos(x, y); //更改鼠标坐标
                                Sleep(50);
                                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                                mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                            }
                            if (_kbhit()) //如果有按键按下，则_kbhit()函数返回真
                            {
                                hook_2 = _getch(); //使用_getch()函数获取按下的键值
                                if (hook_2 == VK_SPACE)
                                {
                                    break;
                                }
                            }
                            Sleep(590000);
                        }
                    }
                    cout << "是否要继续此程序(Y/N):";
                    cin >> quit_1;
                } while (quit_1 == 'Y' || quit_1 == 'y');
                break;
            }
            case 2:
            {
                char quit_2; //记录用户是否结束程序
                do
                {
                    char options_2;
                    cout << "----------------------" << endl;
                    cout << "|是否要定义鼠标坐标的|" << endl;
                    cout << "|      刷新时间      |" << endl;
                    cout << "|   (默认为0.5秒)    |" << endl;
                    cout << "|是(Y/y)     否(N/n) |" << endl;
                    cout << "----------------------" << endl;
                    cin >> options_2;
                    if (options_2 == 'Y' || options_2 == 'y')
                    {
                        int time_3;
                        char hook_3;
                        cout << "请输入刷新时间(秒):";
                        cin >> time_3;
                        time_3 = time_3 * 1000;
                        cout << "-------------------------" << endl;
                        cout << "|     按空格键为退出    |" << endl;
                        cout << "-------------------------" << endl;
                        for (;;)
                        {
                            if (_kbhit()) //如果有按键按下，则_kbhit()函数返回真
                            {
                                hook_3 = _getch(); //使用_getch()函数获取按下的键值
                            }
                            if (hook_3 != VK_SPACE)
                            {
                                SetConsoleTitleA("Get Cursor Postition");

                                POINT pt;
                                BOOL bReturn = GetCursorPos(&pt); //获取鼠标指针位置到pt

                                if (bReturn != 0) //如果函数执行成功
                                {
                                    cout << "X坐标:" << pt.x << endl
                                        << "Y坐标:" << pt.y << endl; //显示pt中的数据
                                }
                                else //如果函数没有执行成功
                                {
                                    cout << "Error!" << endl; //报错
                                }
                                Sleep(time_3);
                            }
                            if (hook_3 == VK_SPACE)
                            {
                                break;
                            }
                        }
                    }
                    else
                    {
                        char hook_4;
                        cout << "-------------------------" << endl;
                        cout << "|     按空格键为退出    |" << endl;
                        cout << "-------------------------" << endl;
                        for (;;)
                        {
                            if (_kbhit()) //如果有按键按下，则_kbhit()函数返回真
                            {
                                hook_4 = _getch(); //使用_getch()函数获取按下的键值
                            }
                            if (hook_4 != VK_SPACE)
                            {
                                SetConsoleTitleA("Get Cursor Postition");

                                POINT pt;
                                BOOL bReturn = GetCursorPos(&pt); //获取鼠标指针位置到pt

                                if (bReturn != 0) //如果函数执行成功
                                {
                                    cout << "X坐标:" << pt.x << endl
                                        << "Y坐标:" << pt.y << endl; //显示pt中的数据
                                }
                                else //如果函数没有执行成功
                                {
                                    cout << "Error!" << endl; //报错
                                }
                                Sleep(500);
                            }
                            if (hook_4 == VK_SPACE)
                            {
                                break;
                            }
                        }
                    }
                    cout << "是否要继续此程序(Y/N):";
                    cin >> quit_2;
                } while (quit_2 == 'Y' || quit_2 == 'y');
                break;
            }
            default: //报错反馈
            {
                printf("很抱歉(very sorry).\n");
                printf("暂时没有此功能.\n");
                Sleep(2000);
                system("cls");
                getchar();
                printf("是否要继续本程序(Y/N):");
                scanf("%c", &quit);
            }
        }
        if (options == 1 || options == 2)
        {
            getchar();
            printf("是否要继续本程序(Y/N):");
            scanf("%c", &quit);
        }
    } while (quit == 'Y' || quit == 'y');
}