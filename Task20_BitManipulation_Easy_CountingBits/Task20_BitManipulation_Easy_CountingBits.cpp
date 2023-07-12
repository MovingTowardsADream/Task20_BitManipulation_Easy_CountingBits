#include <iostream>
#include <vector>

class Solution {
public:
    static std::vector<int> countBits(int n) {
        std::vector<int> ans(n + 1, 0);
        for (int i = 1;i <= n;i++)
        {
            ans[i] = ans[i & (i - 1)] + 1;
        }
        return ans;
    }
};

int main()
{
    for (int i : Solution::countBits(100)) {
        std::cout << i << " ";
    }
}
