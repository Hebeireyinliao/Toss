#include <iostream>
#include <cstdlib> 
#include <ctime>

int temp, num;                                           //随机器和存放随机数
int least, most;                                        //存放最小值和最大值

extern "C" __declspec(dllexport) int getArea(int least, int most);

__declspec(dllexport) int getArea(int least, int most)
{
    std::srand(std::time(nullptr));
    num =  rand() % most;
    return num;
}