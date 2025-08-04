#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num2, num3, num5, num6;
    int sum=0;
    cin >> num2 >> num3 >> num5 >> num6;
    int used_256=std::min(std::min(num2, num5), num6); 
    num2-=used_256;
    int used_32=std::min(num3, num2); 
    sum+=used_256*256;
    sum+=used_32*32;
    cout << sum;
    return 0;
}