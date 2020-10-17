#include <bits/stdc++.h>
#include <vector>
using namespace std;

// def knapsack(dict, capacity):
//     amount = 0
//     temp = []
//     for i, j in dict:
//         temp_value, temp_weight = j
//         if temp_weight <= capacity and i not in temp and capacity != 0:
//             amount += temp_value
//             capacity -= temp_weight
//         elif temp_weight > capacity and i not in temp and capacity != 0:
//             amount += temp_value / (temp_weight / capacity)
//         else:
//             pass
//         temp.append(i)
//     return format(amount, '.4f')

int main()
{
    int items, capacity, temp1, temp2;
    cin >> items >> capacity;
    cout << items << capacity << endl;
    vector<int> data(items);
    for (int i = 0; i < items; i++)
    {
        cin >> temp1 >> temp2;
        data.push_back(temp1);
        data.push_back(temp2);
    }
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }
}
