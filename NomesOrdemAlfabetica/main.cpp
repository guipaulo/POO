#include <iostream>
#include <string>

using namespace std;
int x;
string s1;
string s2;
string s3;

int main() {
  
  cin >> s1;
  cin >> s2;
  cin >> s3;
  // S1 MAIOR
  if (s1.compare(s2)>0 && s1.compare(s3)>0) {
    if (s2.compare(s3)>0) {
      cout << s3 << "-" << s2 << "-" << s1;
    }
    else {
      cout << s2 << "-" << s3 << "-" << s1;
    }
  }
  // S2 MAIOR
  else if (s2.compare(s1)>0 && s2.compare(s3)>0) {
    if (s1.compare(s3)>0) {
      cout << s3 << "-" << s1 << "-" << s2;
    }
    else {
      cout << s1 << "-" << s3 << "-" << s2;
    }
  }
  // S3 MAIOR
  else if (s3.compare(s1)>0 && s3.compare(s2)>0) {
    if (s2.compare(s1)>0) {
      cout << s1 << "-" << s2 << "-" << s3;
    }
    else {
      cout << s2 << "-" << s1 << "-" << s3;
    }
  }
}