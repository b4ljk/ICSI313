#include <iostream>
#include <utility>
#include <vector>

using namespace std;

struct interval {
  int start;
  int end;
  int weight;
};

int maxIntervalWeight(vector<interval> &intervals, int n) {
  int max_weight = 0;
  for (int i = 0; i < n; i++) {
    int weight = intervals[i].weight;
    for (int j = i + 1; j < n; j++) {
      if (intervals[j].start >= intervals[i].end) {
        weight += intervals[j].weight;
        i = j;
      }
    }
    if (weight > max_weight) {
      max_weight = weight;
    }
  }
  return max_weight;
}

int main() {
  int n;
  cin >> n;
  vector<interval> intervals(n);
  for (int i = 0; i < n; i++) {
    cin >> intervals[i].start >> intervals[i].end >> intervals[i].weight;
  }
  int max_weight = maxIntervalWeight(intervals, n);
  cout << max_weight << endl;

  return 0;
}