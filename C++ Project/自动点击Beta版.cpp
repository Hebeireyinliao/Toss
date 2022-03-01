#include<iostream>
#include<conio.h>
#include<windows.h>

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

using namespace std;

int main()
{
    POINT p;
    int x, y;
    int wo, en, now;
    char ch, chs;

    cout << "----------------------" << endl;
    cout << "|是否要自定义鼠标坐标|" << endl;
    cout << "|是(Y/y)     否(N/n)|" << endl;
    cout << "----------------------" << endl;
    cin >> ch;
    cout << "----------------------" << endl;
    cout << "|是否要自定义时间循环|" << endl;
    cout << "|  如果自己不会配置  |" << endl;
    cout << "| 可以用我给你配置的 |" << endl;
    cout << "| 如果不会选择否即可 |" << endl;
    cout << "|是(Y/y)     否(N/n)|" << endl;
    cout << "----------------------" << endl;
    cin >> chs;
    if (ch == 'Y' || ch == 'y')
    {
        cout << "请输入X轴坐标:";
        cin >> x;
        cout << "请输入y轴坐标:";
        cin >> y;
        if (chs == 'Y' || chs == 'y')
        {
            cout << "请输入开始视频时候的间隔(单位:秒):";
            cin >> wo;
            wo = wo * 1000;
            cout << "请输入多长时间循环一次(单位:秒):";
            cin >> en;
            en = en * 1000;
            cout << "-------------------------" << endl;
            cout << "|按Q模拟左键 按W模拟右键|" << endl;
            cout << "|     按空格键为退出    |" << endl;
            cout << "-------------------------" << endl;
            getch();
            while (1)
            {
                if (KEY_DOWN(VK_SPACE))
                {
                   now = 0;
                   Sleep(20); 
                }
                if (KEY_DOWN('Q'))
                {
                    now = 1;
                    Sleep(100);
                }
                if (KEY_DOWN('W'))
                {
                    now = 2;
                    Sleep(100);
                }
                if (now == 1)
                {
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标
                    Sleep(50);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//按下左键
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//松开左键
                    Sleep(wo);
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标
                    Sleep(50); 
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//按下左键
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//松开左键
                }
                if (now == 2)
                {
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标
                    Sleep(50);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    Sleep(wo);
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标 
                    Sleep(50);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }
                Sleep (en);
            }
        }
        else
        {
            cout << "-------------------------" << endl;
            cout << "|按Q模拟左键 按W模拟右键|" << endl;
            cout << "|     按空格键为退出    |" << endl;
            cout << "-------------------------" << endl;
            getch();
            while (1)
            {
                if (KEY_DOWN(VK_SPACE))
                {
                   now = 0;
                   Sleep(20); 
                }
                if (KEY_DOWN('Q'))
                {
                    now = 1;
                    Sleep(100);
                }
                if (KEY_DOWN('W'))
                {
                    now = 2;
                    Sleep(100);
                }
                if (now == 1)
                {
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标
                    Sleep(50);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//按下左键
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//松开左键
                    Sleep(40000);
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标
                    Sleep(50); 
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//按下左键
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//松开左键
                }
                if (now == 2)
                {
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标
                    Sleep(50);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    Sleep(40000);
                    GetCursorPos(&p);//获取鼠标坐标 
                    SetCursorPos(x, y);//更改鼠标坐标 
                    Sleep(50);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }
                Sleep (590000);
            }
        }
    }
}