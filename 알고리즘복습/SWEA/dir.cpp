#include<iostream>
using namespace std;

int main () {

  int dir_num = 3;
  int x = 1, y = 5;
  int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
  int nx, ny;

  // 달팽이
  if(dir_num == 0)
      dir_num = 1;
  else if(dir_num == 1)
      dir_num = 2;
  else if(dir_num == 2)
      dir_num = 3;
  else
      dir_num = 0;

  nx = x + dx[dir_num], ny = y + dy[dir_num];
  return 0;
}

