#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int number;
    int size;
    int sum1=0;
    int sum2=0;
    cin >> size;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin >> number;
            if(i==j)
            sum1+=number;
            if(i==(size-1-j))
            sum2+=number;
        }
    }
    cout << abs(sum2-sum1);
    return 0;
}