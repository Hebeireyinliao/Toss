#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int least, most;                                                                                //存放范围的大小值
    int choose, chance, guess, cycele, frequency;                                                   //存放用户的选择,机会,猜测,循环次数和次数
    int temp, num;                                                                                  //随机数
    char wow, wowo;                                                                                 //存放用户选择,存放用户彩蛋
    bool found = false;                                                                             //存放判断的函数

    srand (time(0));                                                                                //创建随机器
    temp = rand();

    cout << "################################################################################" << endl;
    cout << "     1.简单模式  ||  2.普通模式  ||  3.困难模式  ||  4.赌神模式 || 5.自定义" << endl;
    cout << "################################################################################" << endl;
    cin >> choose;

    switch(choose)
    {
        case 1:
        least = 0,  most = 30, cycele = 0, chance = frequency = 10;                                 //定义大小的范围和用户的机会和剩余的机会
        while (cycele <= chance && !found)
        {
            do 
            {
                num = temp % (most - least + 1) + least;                                            //存放随机数的
                cout << "请输入一个0-30的随机数:";
                cin >> guess;
                if (guess == num)   found = true;
                else if (guess == 7355608)
                {
                    cout << "#######################################" << endl;
                    cout << "\t这是机密是否要查看" << endl;
                    cout << "是的(Y/y)\t\t不用啦(N/n)" << endl;
                    cout << "#######################################" << endl;
                    cin >> wowo;
                    if (wowo == 'y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else if (wowo == 'Y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else
                    {
                        cout << "哦吼你居然不想知道" << endl << "那继续游玩吧" << endl;
                        break;
                    }
                }
                else if (guess > num)   cout << "答案太大了哟!!" << endl;
                else    cout << "答案太小了哟!!" << endl;
                cycele++;
            }while (guess < 0 || guess > 30);
            while (cycele <= chance && !found)
            {
                cout << "你还有" << frequency << "次机会哟  QWQ" << endl;
                cout << "请继续输入吧:";
                cin >> guess;
                if (guess == num)   found = true;
                else if (guess > num)   cout << "这次又太大了哟  QWQ" << endl;
                else    cout << "这次又太小了哟  QWQ" << endl;
                cycele++;
                frequency--;
            }
            if (found)  cout << "居然让你猜对了  QWQ" << endl << endl;
            else    cout << "哎呀结束了" << endl << "没事的下次一定可以的  QWQ" << endl << endl;
            getchar();
            cout << "按任意键退出" << endl;
            getchar();
            system("exit");
            break;
        }
        break;

        case 2:
        least = 0,  most = 25, cycele = 1, chance = frequency = 5;
        while (cycele <= chance && !found)
        {
            do
            {
                num = temp % (most - least + 1) + least;
                cout << "请输入一个0-25的随机数:";
                cin >> guess;
                if (guess == num)   found = true;
                else if (guess == 7355608)
                {
                    cout << "#######################################" << endl;
                    cout << "\t这是机密是否要查看" << endl;
                    cout << "是的(Y/y)\t\t不用啦(N/n)" << endl;
                    cout << "#######################################" << endl;
                    cin >> wowo;
                    if (wowo == 'y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else if (wowo == 'Y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else
                    {
                        cout << "哦吼你居然不想知道" << endl << "那继续游玩吧" << endl;
                        break;
                    }
                }
                else if (guess > num)   cout << "这个答案有点大了欸" << endl;
                else cout << "这个答案有点小欸" << endl;
                cycele++;
                frequency--;
            } while (guess < 0 || guess > 25);
            while(cycele <= chance && !found)
            {
                cout << "你还有" << frequency << "次机会哟" << endl << "好好把握住哟  QWQ" << endl;
                cout << "请继续输入吧:";
                cin >> guess;
                if (guess == num)   found = true;
                else if (guess > num)   cout << "哎呀又有点大了  QWQ" << endl;
                else    cout << "哎呀又有点小了  QWQ" << endl;
                cycele++;
                frequency--;
            }
            if (found)  cout << "你居然猜对了" << endl << "你的实力一定很厉害吧  QWQ" << endl << endl;
            else    cout << "哎呀呀   机会用完了哎" << endl << "没事再来一次一定可以的  QWQ" << endl << endl;
            getchar();
            cout << "按任意键退出" << endl;
            getchar();
            system("exit");
            break;
        }
        break;

        case 3:
        least = 0,  most = 20, cycele = 1, chance = frequency = 3;
        while (cycele <= chance && !found)
        {
            do
            {
                num = temp % (most - least + 1) + least;
                cout << "请输入一个0-20的随机数:";
                cin >> guess;
                if (guess == num)   found = true;
                else if (guess == 7355608)
                {
                    cout << "#######################################" << endl;
                    cout << "\t这是机密是否要查看" << endl;
                    cout << "是的(Y/y)\t\t不用啦(N/n)" << endl;
                    cout << "#######################################" << endl;
                    cin >> wowo;
                    if (wowo == 'y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else if (wowo == 'Y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else
                    {
                        cout << "哦吼你居然不想知道" << endl << "那继续游玩吧" << endl;
                        break;
                    }
                }
                else if (guess > num)   cout << "这个答案有点大了吧  QWQ" << endl;
                else    cout << "这个答案有点小了吧  QWQ" << endl;
                cycele++;
                frequency--;
            } while (guess < 0 || guess > 20);
            while (cycele <= chance && !found)
            {
                cout << "你还有" << frequency << "次机会哟" << endl << "一定要相信自己  QWQ" << endl;
                cout << "那继续输入吧:";
                cin >> guess;
                if (guess == num)   found = true;
                else if (guess > num)   cout << "可惜啦又有点大了欸  QWQ" << endl;
                else    cout << "可惜了又有点小了欸  QWQ" << endl;
                cycele++;
                frequency--;
            }     
            if (found) cout << "哦吼!!!" << endl << "居然猜对了" << endl << "你一定玩的是简单模式  哼  QWQ" << endl << endl;
            else    cout << "好可惜差一点就猜对了" << endl << "没事好多事情都不是一帆风顺的" << endl << "相信自己下次一定可以的  QWQ" << endl << "我来告诉你正确答案吧" << endl << "是" << num << "没想到吧  嘿嘿" << endl << endl;
            getchar();
            cout << "按任意键退出" << endl;
            getchar();
            system("exit");
            break;
        }
        break;

        case 4:
        
        least = 10,  most = 25;
        num = temp % (most - least + 1) + least;
        cout << "欢迎来到赌神联盟" << endl << "成败在此一举" << endl;
        cout << "请输入一个10-25的随机数:";
        cin >> guess;
        if (guess == num)   cout << "快说是不是开了" << endl << "难道这就是传说中的赌神  QWQ" << endl << "但是我还是感觉你开了   嘿嘿QWQ" << endl << endl;
        else    cout << "实力不行呀" << endl << "就是逊啊" << endl << "想知道答案吗  QWQ" << endl << "就不告诉你  QWQ" << endl << endl;
        getchar();
        cout << "按任意键退出" << endl;
        getchar();
        system("exit");
        break;

        case 5:

        cout << "欢迎来到自定义界面" << endl << "接下来你会自己选择次数和范围是否要开始" << endl << "\tY/y  \t\t N/n" << endl;
        cin >> wow;
        if (wow == 'Y' || wow == 'y')
        {
            cout << "请输入最小的范围:";
            cin >> least;
            cout << "请输入最大的范围:";
            cin >> most;
            cout << "请输入一共有几次机会:";
            cin >> chance;
            cycele = 0;
            frequency = chance;
            while (cycele <= chance && !found)
            {
                do 
                {
                    num = temp % (most - least + 1) + least;
                    cout << "请输入一个" << least << "-" << most << "的随机数:";
                    cin >> guess;
                    if (guess == num)   found = true;
                    else if (guess == 7355608)
                {
                    cout << "#######################################" << endl;
                    cout << "\t这是机密是否要查看" << endl;
                    cout << "是的(Y/y)\t\t不用啦(N/n)" << endl;
                    cout << "#######################################" << endl;
                    cin >> wowo;
                    if (wowo == 'y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else if (wowo == 'Y')
                    {
                        cout << "本次答案就是:" << num << endl;
                        break;
                    }
                    else
                    {
                        cout << "哦吼你居然不想知道" << endl << "那继续游玩吧" << endl;
                        break;
                    }
                }
                    else if (guess > num)   cout << "这个数有点大了哦!!" << endl;
                    else    cout << "这个数有点小了哦!!" << endl;
                    cycele++;
                }while(guess < least || guess > most);
                while (cycele <= chance && !found)
                {
                    cout << "你还有" << frequency << "次机会的  QWQ" << endl;
                    cout << "那就继续输入吧:";
                    cin >> guess;
                    if (guess == num)   found = true;
                    else if(guess > num) cout << "还是太大了哦" << endl;
                    else    cout << "还是有点小哦" << endl;
                    cycele++;
                    frequency--; 
                }
                if (found)  cout << "恭喜你猜对啦" << endl << "还是自定义符合你的心意呀" << endl << endl;
                else    cout << "没关系的设置的太难啦" << endl << "可以在来一遍呀" << endl << endl;
                getchar();
                cout << "按任意键退出" << endl;
                getchar();
                system("exit");
                break;
            }
            break;
        }
        else    cout << "祝你游玩开心" << endl << "谢谢" << endl << endl;
        getchar();
        cout << "按任意键退出" << endl;
        getchar();
        system("exit");
        break;
    }
}