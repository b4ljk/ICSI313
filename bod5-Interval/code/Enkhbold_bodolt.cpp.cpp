#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxWeight(vector<pair<pair<int, int>, int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
        return a.first.second < b.first.second;
    });
    vector<int> dp(n);
    dp[0] = intervals[0].second;
    for (int i = 1; i < n; i++) {
        dp[i] = intervals[i].second;
        for (int j = i-1; j >= 0; j--) {
            if (intervals[j].first.second <= intervals[i].first.first) {
                dp[i] = max(dp[i], dp[j] + intervals[i].second);
                break;
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> intervals;

    for (int i = 0; i < n; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        intervals.push_back({{a, b}, w});
    }
    int max_weight = maxWeight(intervals);
    cout << max_weight << endl;
    return 0;
}