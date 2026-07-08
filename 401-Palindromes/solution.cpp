#include <bits/stdc++.h>
using namespace std;

string reverse(string &s)
{
  string rev;
  rev.resize(s.size());
  int j = 0;
  for(int i = s.size()-1; i >= 0; i--)
  {
    rev[j] = s[i];
    j++;
  }
  return rev;
}

void valueassign(unordered_map < char,char > &m,char first, char last)
{
  for(char ch = first; ch <= last; ch++)
  {
      m[ch] = ch;
  }
}

int main()
{
  unordered_map < char, char > m;
  char first = 'A', last = 'Z';
  valueassign(m,first,last);
  first = '1'; last = '9';
  valueassign(m,first,last);

m['E'] = '3';
m['3'] = 'E';
m['J'] = 'L';
m['L'] = 'J';
m['0'] = 'O';
m['S'] = '2';
m['2'] = 'S';
m['5'] = 'Z';
m['Z'] = '5';

  string s;
  bool space = false;
  while(cin >> s)
  {
    
  
  
  string copy = s;
  bool ayna = false;
  bool aynap = false;
  bool pal = false;
  int cnt = 0;
  for(int i = 0; i < copy.size(); i++)
  {
    char c = copy[i];
    if (m[copy[i]] == c && c != 'A' && c != 'E' && c != 'H' && c != 'I' && c != 'J' &&
    c != 'L' && c != 'M' && c != 'O' && c != 'S' && c != 'T' &&
    c != 'U' && c != 'V' && c != 'W' && c != 'X' && c != 'Y' &&
    c != 'Z' && c != '1' && c != '2' && c != '3' && c != '5' && c != '8')
    cnt = 1;
    copy[i] = m[copy[i]];
  }
  string cpyrev = reverse(copy);
  
  
  if(s==cpyrev)
  {
  ayna = true;
  // cout << cpyrev << " 1 " << s << "\n";
  }
  
  if(copy == cpyrev)
  {
  aynap = true;
  // cout << cpyrev << " 2 " << copy << "\n";
  }
  
  cpyrev = reverse(s);
  
  if(s == cpyrev)
  {
  pal = true;
  // cout << cpyrev << " 3 " << s << "\n";
  }
  
  
  
  if(ayna && aynap && cnt == 0)
  cout << s <<" -- is a mirrored palindrome.\n";
  else if(ayna &&  !aynap && cnt == 0)
  cout << s << " -- is a mirrored string.\n";
  else if((!ayna && pal) || (cnt == 1 && pal))
  cout << s << " -- is a regular palindrome.\n";
  else
  cout << s << " -- is not a palindrome.\n";
  cout << "\n";
  
  }
  
  
  
  
  
  
  
}