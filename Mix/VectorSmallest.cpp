#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v1 = {2, 6, 3, 0, 7, 1, 5};
    vector<int> ans;
    for (int i = 1; i < v1.size(); i++)
    {
        if (v1[i] < v1[i - 1] && v1[i] < v1[i + 1])
        {
            ans.push_back(v1[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}