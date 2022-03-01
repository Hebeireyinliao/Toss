#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    string ch, cher;
    cout << "----------------------" << endl;
    cout << "|是否要获取鼠标的坐标|" << endl;
    cout << "|是(Y/y)     否(N/n)|" << endl;
    cout << "----------------------" << endl;
    cin >> ch;
    if (ch == "Y" || ch == "y")
    {
        cout << "----------------------" << endl;
        cout << "|是否要定义鼠标坐标的|" << endl;
        cout << "|      刷新时间      |" << endl;
        cout << "|   (默认为0.5秒)    |" << endl;
        cout << "|是(Y/y)     否(N/n)|" << endl;
        cout << "----------------------" << endl;
        cin >> cher; 
        if (cher == "y" || cher == "y")
        {
            int a;
            cout << "请输入刷新时间(秒):";
            cin >> a;
            a = a * 1000;
            for(;;)
            {
                SetConsoleTitleA("Get Cursor Postition");

                POINT pt;
                BOOL bReturn = GetCursorPos(&pt); //获取鼠标指针位置到pt

                if (bReturn != 0) //如果函数执行成功
                {
                    cout << "X坐标:" << pt.x << endl << "Y坐标:" << pt.y << endl; //显示pt中的数据
                }
                else //如果函数没有执行成功
                {
                    cout << "Error!" << endl; //报错
                }
                Sleep(a);
            }
        }
        else
        {
            for(;;)
            {
        	    SetConsoleTitleA("Get Cursor Postition");

                POINT pt;
                BOOL bReturn = GetCursorPos(&pt); //获取鼠标指针位置到pt

                if (bReturn != 0) //如果函数执行成功
                {
                    cout << "X坐标:" << pt.x << endl << "Y坐标:" << pt.y << endl; //显示pt中的数据
                }
                else //如果函数没有执行成功
                {
                    cout << "Error!" << endl; //报错
                }
            	Sleep(500);
            }
        }
    }
}