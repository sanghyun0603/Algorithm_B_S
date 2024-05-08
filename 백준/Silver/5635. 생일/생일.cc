#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<pair<int, int>, pair<int, string>> > student(n);

  for(int i=0; i<n; i++){
    cin >> student[i].second.second >> student[i].second.first >> 
    student[i].first.second >> student[i].first.first;
  }

  sort(student.begin(), student.end());

  cout << student[n-1].second.second << "\n";
  cout << student[0].second.second << '\n';

  return 0;
}