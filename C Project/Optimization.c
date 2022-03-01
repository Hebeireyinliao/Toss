#include <stdio.h>
#include <windows.h>

void Huanying();
void Xuanxiang();
void Jisuanqi();
void Tixing();

void Huanying()
{
    printf("--------------------\n");
    printf("|     欢迎使用     |\n");
    printf("| 好家伙牌操作系统 |\n");
    printf("--------------------\n");
}
void Xuanxiang()
{
    printf("----------------------------------\n");
    printf("|           请选择程序           |\n");
    printf("| 1.高级计算器 2.收银 3.存储数据 |\n");
    printf("----------------------------------\n");
}
void Jisuanqi()
{
    printf("--------------\n");
    printf("| 高级计算器 |\n");
    printf("|   1.计算   |\n");
    printf("|   2.汇率   |\n");
    printf("| 持续更新中 |\n");
    printf("--------------\n");
}
void Tixing()
{
    printf("----------------\n");
    printf("| 仅支持人民币 |\n");
    printf("| 转美元和俄元 |\n");
    printf("----------------\n");
}

int main()
{
    Huanying();
    Sleep(2000);   //延迟函数
    system("cls"); //清理终端屏幕
    int options;   //记录用户的选项
    char quit;     //记录用户是否结束程序
    do
    {
        Xuanxiang();
        printf("#:");
        scanf("%d", &options);
        system("cls");
        switch (options)
        {
            case 1: //高级计算器
            {
                int options_1; //记录用户的选项
                char quit_1;   //记录用户是否结束程序
                do
                {
                    Jisuanqi();
                    printf("#:");
                    scanf("%d", &options_1);
                    system("cls");
                    if (options_1 == 1 || options_1 == 2)
                    {
                        if (options_1 == 1)
                        {
                            char symbol;            //记录用户输入的运算符
                            char quit_2;            //记录用户是否结束程序
                            int one, two;           //记录用户输入的数
                            int result_1, result_2; //记录运算结果
                            do
                            {
                                printf("请输入一个数:");
                                scanf("%d", &one);
                                getchar();
                                printf("请输入运算符:");
                                scanf("%c", &symbol);
                                getchar();
                                printf("请输入一个数:");
                                scanf("%d", &two);
                                if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
                                {
                                    if (symbol == '+')
                                    {
                                        result_1 = one + two;
                                    }
                                    else if (symbol == '-')
                                    {
                                        result_1 = one - two;
                                    }
                                    else if (symbol == '*')
                                    {
                                        result_1 = one * two;
                                    }
                                    else
                                    {
                                        result_1 = one / two;
                                    }
                                    printf("结果:\n");
                                    printf("\t| %d %c %d = %d |\n", one, symbol, two, result_1);
                                }
                                else
                                {
                                    printf("很抱歉无法运算此算式!!!");
                                }
                                getchar();
                                printf("是否要继续此程序(Y/N):");
                                scanf("%c", &quit_2);
                            } while (quit_2 == 'Y' || quit_2 == 'y');
                        }
                        else if (options_1 == 2)
                        {
                            char quit_3;               //记录用户是否结束程序
                            double gold_1;             //记录用户输入的金额
                            double result_1, result_2; //记录转换后的金额
                            do
                            {
                                Tixing();
                                printf("请输入人民币金额:");
                                scanf("%lf", &gold_1);
                                system("cls");
                                if (gold_1 > 0)
                                {
                                    result_1 = gold_1 * 0.16;
                                    result_2 = gold_1 * 11.8;
                                    printf("| 人民币     美元     卢布(俄)\n");
                                    printf("| %.2lf      %.2lf    %.2lf\n", gold_1, result_1, result_2);
                                }
                                else
                                {
                                    printf("金额不能小于或者等于零");
                                }
                                getchar();
                                printf("是否要继续此程序(Y/N):");
                                scanf("%c", &quit_3);
                            } while (quit_3 == 'Y' || quit_3 == 'y');
                        }
                    }
                    else
                    {
                        printf("还会不断更新的.\n");
                        printf("请耐心等待谢谢.\n");
                        Sleep(2000);
                        system("cls");
                        getchar();
                        printf("是否要继续此程序(Y/N):");
                        scanf("%c", &quit_1);
                    }
                } while (quit_1 == 'Y' || quit_1 == 'y');
                break;
            }
            case 2: //收银
            {
                int gold_2;             //记录用户输入金额
                int plan_1, plan_2 = 0; //记录用户输入方案
                char quit_4;            //记录用户是否结束程序
                int one, five, ten;     //记录找零金额数量
                do
                {
                    printf("| 请输入金额: ");
                    scanf("%d", &gold_2);
                    printf("| 当金额小于拾时不会给予多种方案\n");
                    printf("| 需要几种方案: ");
                    scanf("%d", &plan_1);
                    printf("| 方案如下: \n");
                    for (one = 0; one < gold_2; one++)
                    {
                        for (five = 0; five < gold_2; five++)
                        {
                            for (ten = 0; ten < gold_2; ten++)
                            {
                                if (one + five * 5 + ten * 10 == gold_2)
                                {
                                    printf("\t|一元: %d| 五元: %d| 十元: %d|\n", one, five, ten);
                                    plan_2 += 1;
                                    break;
                                }
                                if (plan_2 == plan_1)
                                    break;
                            }
                            if (plan_2 == plan_1)
                                break;
                        }
                        if (plan_2 == plan_1)
                            break;
                    }
                    gold_2 = 0, plan_1 = 0, plan_2 = 0;
                    one = 0, five = 0, ten = 0;
                    getchar();
                    printf("是否要继续运行此程序(Y/y):");
                    scanf("%c", &quit_4);
                } while (quit_4 == 'Y' || quit_4 == 'y');
                break;
            }
            case 3: //存储数据
            {
                char quit_5; //记录用户是否结束程序
                do
                {
                    printf("暂时没想出来.\n");
                    printf("我会尽量更新的...\n");
                    Sleep(2000);
                    system("cls");
                    getchar();
                    printf("是否要继续运行此程序(Y/y):");
                    scanf("%c", &quit_5);
                } while (quit_5 == 'Y' || quit_5 == 'y');
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
        if (options == 1 || options == 2 || options == 3)
        {
            getchar();
            printf("是否要继续本程序(Y/N):");
            scanf("%c", &quit);
        }
    } while (quit == 'Y' || quit == 'y');
}