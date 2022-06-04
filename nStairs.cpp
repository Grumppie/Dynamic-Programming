#include <iostream>
using namespace std;

#define ll long long

int countDistinctWayToClimbStair(long long n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    int singleStepWays = countDistinctWayToClimbStair(n - 1);
    int twoStepWays = countDistinctWayToClimbStair(n - 2);

    return singleStepWays + twoStepWays;
}

int main()
{
    ll n;
    cin >> n;
    cout << countDistinctWayToClimbStair(n) << " ";
}