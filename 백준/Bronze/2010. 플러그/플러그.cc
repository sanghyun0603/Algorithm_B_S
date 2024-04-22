#include <iostream>
using namespace std;
int main(){
  int N;
  int Pl = 0;
  int cnt = 0;
  int plug[500001];
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> plug[i];
    Pl = Pl + plug[i];
    cnt ++;
  }
  cout << Pl-(cnt-1);
    return 0;
}