#include <stdio.h>

int wow(int a[], int, int); //第四组用到的函数

int wow(int a[], int b, int c)
{
    int i = 0;
    while (i < b)
    {
        if (a[i] == c)
            break;
        i++;
    }
    if (i < b)
        return i + 1;
    return -1;
}

int main()
{
    int Q;                          //控制序号
    int a, b, c;                    //第一组用到的变量
    int A, B, C, x, y;              //第二组用到的变量
    int X, o, t, f, T, e = 0;       //第三组用到的变量
    int d, q, D, E, F, Y, O, g[10]; //第四组用到的变量
    double u, U;                    //第四组用到的变量
    char ch;                        //第一组用到的变量
    char CH;                        //第四组用到的变量

    printf("#######################################################################\n");
    printf("\t\t\t\t欢迎使用\n");
    printf("\t\t1.计算器 2.特殊计算器 3.找钱系统 4.数组系统\n");
    printf("#######################################################################\n");
    scanf("%d", &Q);

    switch (Q)
    {
    case 1:

        printf("请输入算式: ");
        scanf("%d%c%d", &a, &ch, &b);

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')

            if (ch == '+')
                c = a + b;
            else if (ch == '-')
                c = a - b;
            else if (ch == '*')
                c = a * b;
            else
                c = a / b;

        printf("%d %c %d = %d\n", a, ch, b, c);
        break;

    case 2:

        printf("请输入第一个数: ");
        scanf("%d", &A);

        printf("请输入第二个数: ");
        scanf("%d", &B);

        x = A, y = B;

        while (x % y)
        {
            C = x % y;
            x = y;
            y = C;
        }
        printf("%d 和 %d 最大公约数: %d 最小公倍数: %d\n", A, B, y, A * B / y);
        break;

    case 3:

        printf("请输入金额: ");
        scanf("%d", &X);
        printf("当金额小于拾时不会给予多种方案\n");
        printf("需要几种方案: ");
        scanf("%d", &T);
        printf("方案如下: \n");
        for (o = 0; o < X; o++)
        {
            for (f = 0; f < X; f++)
            {
                for (t = 0; t < X; t++)
                {
                    if (o + f * 5 + t * 10 == X)
                    {
                        printf("一元: %d 五元: %d 拾元: %d \n", o, f, t);
                        e += 1;
                        break;
                    }
                    if (e == T)
                        break;
                }
                if (e == T)
                    break;
            }
            if (e == T)
                break;
        }
        break;

    case 4:

        printf("请输入几次循环: ");
        scanf("%d", &d);

        for (D = 0; D < d; D++)
        {
            printf("请输入数组的第%d个数: ", D + 1);
            scanf("%d", &g[D]);
            u += g[D];
            q++;
        }
        if (q > 0)
        {
            U = u / q;
            E = 0;
            for (D = 0; D < q; D++)
            {
                if (g[D] > U)
                {
                    F++;
                }
                if (g[D] > g[E])
                {
                    E = D;
                }
            }
            printf("数组的平均数大约是: %.2f \n", U);
            printf("比平均数组大的数有 %d 个 \n", F);
            printf("数组里面最大的数是: %d \n", g[E]);
            printf("它的序号是: %d \n", E + 1);
        }
        printf("你需要找数组里面对应的数组的序号吗?");
        printf("\n需要(Y/y)\t\t不需要(N/n)\n");
        getchar();
        scanf("%c", &CH);
        if (CH == 'Y' || CH == 'y')
        {
            printf("请输入需要查找的数: ");
            scanf("%d", &Y);
            O = wow(g, d, Y);
            if (O != -1)
                printf("查找成功,它的序号为: %d \n", O);
            else
                printf("查找失败 \n");
        }
        else
            printf("那好吧QWQ \n");
    }

    return 0;
}