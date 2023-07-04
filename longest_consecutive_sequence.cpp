#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector < int > & nums) {
  unordered_set<int> hashSet;
  for (int num: nums) {
    hashSet.insert(num);
  }

  unordered_set<int>::iterator itr;
  for (itr = hashSet.begin(); itr != hashSet.end(); itr++)
    cout << *itr << " ";

  int longestStreak = 0;

  for (int num: nums) {
    if (!hashSet.count(num - 1)) {
      int currentNum = num; // 1
      int currentStreak = 1;

      while (hashSet.count(currentNum + 1)) { // true 2, true 3, true 4, true 5, true 6, true 7, true 8, false 9
        currentNum += 1; // 2 3 4 5 6 7 8
        currentStreak += 1; // 2 3 4 5 6 7 8
      }

      longestStreak = max(longestStreak, currentStreak); // max(0,8) = 8
    }
  }

  return longestStreak;
}
int main() {
  vector<int> arr{5,8,1,2,3,4,6,7};
  int lon = longestConsecutive(arr);
  cout << "The longest consecutive sequence is " << lon << endl;

}
