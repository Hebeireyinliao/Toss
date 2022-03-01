#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
using namespace std;

void Kaitou(); //开头
void Tixing(); //提示
void Xuanze(); //选项

void Kaitou()
{
    cout << "---------------------" << endl;
    cout << "|      欢迎使用     |" << endl;
    cout << "|   好家伙牌读写器  |" << endl;
    cout << "---------------------" << endl;
}
void Tixing()
{
    cout << "----------------" << endl;
    cout << "|  请选择模式  |" << endl;
    cout << "----------------" << endl;
}
void Xuanze()
{
    cout << "-----------------" << endl;
    cout << "|读(D/d) 写(X/x)|" << endl;
    cout << "-----------------" << endl;
}

int main()
{
    system("title 好家伙牌假公司"); //程序名称
    char choose; //程序退出或重来
    Kaitou();
    sleep(2);   //延时作用
    system("clear"); //清理终端页面||Linux的是system("clear");
    Tixing();
    sleep(2);
    system("clear");
    do
    {
        char choose_1; //记录用户选择的模式
        choose = 'n';  //默认为关闭程序
        Xuanze();
        cin >> choose_1;
        if (choose_1 == 'D' || choose_1 == 'd')
        {
            string name; //记录文件名称
            string str;  //记录并输出内容
            cout << "请输入路径:";
            cin >> name;
            ifstream ifile;   //实例化一个ifstream对象
            ifile.open(name); //打开用户输入的文件
            if (!ifile)       //判断是否找到文件
            {
                cout << "未找到文件";
                ifile.close(); //关闭文件
            }
            if (ifile.is_open()) //判断文件是否打开
            {
                while (getline(ifile, str)) //逐行读取文件内容并保存到str里
                {
                    cout << str << endl;
                }
                ifile.close();
            }
        }
        else if (choose_1 == 'X' || choose_1 == 'x')
        {
            string name; //记录保存文件名称
            cout << "请输入文件名称:";
            cin.get();                  //吸收多余回车
            getline(cin, name);         //接收整行名称
            ofstream ofile;             //实例化一个ofstream对象
            ofile.open(name, ios::out); //创建用户输入的文件并给予写入权限
            if (!ofile)                 //判断文件是否创建成功
            {
                cout << "文件创建失败";
                ofile.close();
            }
            if (ofile.is_open()) //判断创建文件是否打开
            {
                system("clear");
                string nr; //保存输入内容
                cout << "输入//q退出文件" << endl;
                while (true)
                {
                    getline(cin, nr); //逐行输入进文件里面
                    if (nr == "//q")  //判断用户输入//q保存并推出文件
                    {
                        ofile.close();
                        break;
                    }
                    else
                    {
                        ofile << nr << endl; //保存内容输入到文件中
                        cout << "#";         //提示作用
                    }
                }
            }
        }
        else
        {
            cout << "暂时不支持!!" << endl;
            cout << "请返回上一级(Y/y)" << endl;
            cout << "否则程序将关闭!!" << endl;
            cin >> choose;
            if (choose == 'Y' || choose == 'y')
            {
                cout << "正在返回上一级" << endl;
            }
            else
            {
                cout << "感谢你的使用" << endl;
                sleep(2);
                system("clear");
                cout << "再见" << endl;
            }
        }
    } while (choose == 'Y' || choose == 'y'); //判断用户是否要继续或者退出程序
}