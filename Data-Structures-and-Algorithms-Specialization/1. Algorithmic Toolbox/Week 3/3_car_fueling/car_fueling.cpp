#include <bits/stdc++.h>
#include <vector>
using namespace std;
int fun1(int destination, int d_tank, vector<int> stops)
{
    int position = 0;
    int count = 0;
    while (position < destination)
    {
        position += d_tank;
        if (position > destination)
        {
            return count;
        }
        vector<int> temp;
        for (int i = 0; i < stops.size(); i++)
        {
            if (stops[i] <= position)
            {
                temp.push_back(stops[i]);
            }
        }
        if (temp.size() != stops.size() && stops[temp.size()] - temp[temp.size() - 1] > d_tank)
        {
            return -1;
        }
        position = temp[temp.size() - 1];
        count += 1;
    }
    return count;
}

int main()
{
    int destination, d_tank, num, temp;
    cin >> destination;
    cin >> d_tank;
    cin >> num;
    vector<int> stops;
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        stops.push_back(temp);
    }
    cout << fun1(destination, d_tank, stops);
    return 0;
}