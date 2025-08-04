#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int number;
    float sum=0;
    for(int i=0;i<count;i++)
        {
            cin >> number;
            sum+=number;
        }
    cout << (sum/count) ;
    return 0;
}