#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int rec(int n, vector<int> &heights, int current)
{
    if (current == n - 1)
        return 0;

    int oneStep = INT_MAX;
    int twoStep = INT_MAX;

    if (current + 1 < n)
        oneStep = rec(n, heights, current + 1) + abs(heights[current] - heights[current + 1]);
    if (current + 2 < n)
        twoStep = rec(n, heights, current + 2) + abs(heights[current] - heights[current + 2]);

    int ans = min(oneStep, twoStep);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int ans = rec(n, vec, 0);
        cout << ans << "\n";
    }
}