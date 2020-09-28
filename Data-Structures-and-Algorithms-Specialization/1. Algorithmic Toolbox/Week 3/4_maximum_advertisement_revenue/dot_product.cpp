#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ad_revenue(int num, vector<int> &profit, vector<int> &clicks)
{
    int revenue = 0;
    sort(profit.begin(), profit.end());
    sort(clicks.begin(), clicks.end());
    for (int i = 0; i < num; i++)
    {
        revenue += profit[i] * clicks[i];
    }
    return revenue;
}

int main()
{
    int num, temp;
    cin >> num;
    vector<int> profit;
    vector<int> clicks;
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        profit.push_back(temp);
    }
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        clicks.push_back(temp);
    }
    cout << ad_revenue(num, profit, clicks) << "\n";
    return 0;
}
