#include <climits>
#include <iostream>
#include <string>

using namespace std;

int myAtoi(string s) {
  const int len = s.length(); // get the length of s
  if (len == 0)
    return 0;
  int index = 0;
  /*
  bool isN =false;
  while (index < len && s[index] == ' ') {
      index ++;
      if (s[index] == '-') {
          isN=true;
          index ++;

      }

  }
  */
  while (index < len && s[index] == ' ')
    index++; // filtet the space and move the left pointer forward.
  bool isN = false;
  if (index < len) {
    if (s[index] == '-') {
      isN = true;
      index++;
    } else if (s[index] == '+')
      index++;
  }
  long result = 0;
  while (index < len) {
    char ch = s[index];
    if (ch < '0' || ch > '9')
      break;
    int offsets = (ch - '0');
    result *= 10;
    result += offsets;
    if (!isN && result > INT_MAX)
      return INT_MAX;
    if (isN && -result < INT_MIN)
      return INT_MIN;
    index++;
  };
  return static_cast<int>(isN ? -1 * result : result);
}

int main() {
  cout << " Result: " << myAtoi("-23445556") << endl;
  return 0;
};
