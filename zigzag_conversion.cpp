#include <iostream>
#include <string>
#include <vector> 

using namespace std;

string convert(string &s, int &numRows) {
  if (numRows <= 1)
    return s; // 如果字符长度小于等于1，直接返回s
  // Declared a String vector with 'numRows' length :
  vector<string> v(numRows, "");

  int j = 0, dir = -1; // j : 当前所在的行号， dir : 移动方向
  for (int i = 0; i < s.length(); i++) {
    if (j == numRows - 1 || j == 0)
      dir *= (-1); // 到达最后一行，或者是首航元素时
    v[j] += s[i];  // 依次将字符压入vector<string>
    // cout << v << endl;
    if (dir == 1)
      j++; // 方向向下移动
    else
      j--; // 向上移动
  };

  string result;
  for (auto &item : v)
    result += item;
  return result;
};

int main() {
  string example = "APPKLFOFNG";
  int Rows = 3;
  cout << "Result : " << convert(example, Rows) << endl;
  return 0;
}
