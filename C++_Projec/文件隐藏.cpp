#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
using namespace std;

void Kaitou();

void Kaitou()
{
    cout << "------------------" << endl;
    cout << "|     好家伙牌   |" << endl;
    cout << "|    文件隐藏器  |" << endl;
    cout << "------------------" << endl;
}

int main()
{
    string name_1; //存放文件地址
    string name_2; //同上
    Kaitou();      //开头方法定义
    sleep(2);   //延时
    system("clear"); //清理终端界面
    cout << "请放入掩盖文件:";
    cin >> name_1;
    ifstream fake;                             //实例化ifstrem对象
    fake.open(name_1, ios::out | ios::binary); //给予读取权限以二进制方式打开
    if (!fake)                                 //判断文件是否存在
    {
        cout << "未找到掩盖文件" << endl;
        fake.close(); //关闭文件
        return -1;    //退出程序
    }
    if (fake.is_open()) //判断文件是打开状态
    {
        int str_1;                      //存放文件大小
        fake.seekg(0, fake.end);        //读取文件流到最后
        str_1 = fake.tellg();           //保存文件大小
        fake.seekg(0, fake.beg);        //把文件流回起始位
        char *temp_1 = new char[str_1]; //存放文件二进制数据的数组
        fake.read(temp_1, str_1);       //二进制方式读取str_1位数据到temp_1
        // fake.close();
        // delete [] temp_1;
        cout << "请放入隐秘文件:";
        cin >> name_2;
        ifstream miss;                             //实例化ifstrem对象
        miss.open(name_2, ios::out | ios::binary); //给予读取权限以二进制方式打开
        if (!miss)                                 //判断文件是否存在
        {
            cout << "未找到隐秘文件" << endl;
            miss.close();
            return -1;
        }
        if (miss.is_open()) //判断文件是打开状态
        {
            int str_2;                      //存放文件大小
            miss.seekg(0, miss.end);        //读取文件流到最后
            str_2 = miss.tellg();           //保存文件大小
            miss.seekg(0, miss.beg);        //把文件流回起始位
            char *temp_2 = new char[str_2]; //存放文件二进制数据的数组
            miss.read(temp_2, str_2);       //二进制方式读取str_2位数据到temp_2
            // miss.close();
            // delete [] temp_2;
            fstream file;                                        //实例化fstrem对象
            file.open(name_1, ios::out | ios::in | ios::binary); //给与读写权限以二进制方式打开
            if (!file)                                           //判断文件是否存在
            {
                cout << "隐藏文件创建失败";
                file.close();
                return -1;
            }
            if (file.is_open()) //判断文件是打开状态
            {
                int cstr = 0; //对比隐秘文件的大小
                for (int i = 0; i <= str_2; i++)
                {
                    file.write(temp_1 + i, 1); //以二进制的方式把temp_1内的字节一个个写入文件
                    if (i % 15 == 0)
                    {
                        if (cstr != str_2)
                        {
                            if (int j = 0 <= str_2)
                            {
                                file.write(temp_2 + j, 1); //以二进制的方式把temp_2内的字节一个个写入文件
                                j++;
                                cstr++;
                            }
                        }
                    }
                }
                fake.close();    //关闭文件
                delete[] temp_1; //释放数组
                miss.close();    //关闭文件
                delete[] temp_2; //释放数组
                file.close();    //关闭文件
            }
        }
    }
    return 0; //程序结束
}