#include <iostream>
using namespace std;
int main()
{
    int s, t, a, b, m, n;
    int d1, d2;
    int sum1=0, sum2=0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i=0;i<m;i++)
        {
            cin >> d1;
            if ((d1+a)>=s && (d1+a)<=t)
                sum1++;
        }
    for(int j=0;j<n;j++)
        {
            cin >> d2;
            if ((d2+b)>=s && (d2+b)<=t)
                sum2++;
        }
    cout << sum1 << "\n";
    cout << sum2 << "\n";
    return 0;
}