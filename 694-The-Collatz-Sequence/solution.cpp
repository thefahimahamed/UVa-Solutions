#include <iostream>
using namespace std;
long long int cnt = 1;
int cs = 1;

void checker(long long int a, long long int l);

void even(long long int a, long long int l)
{
  long long int ans = a/2;
  if(ans<=l)
  {
    cnt++;
    a = ans;
    checker(a,l);
  }
}
void odd(long long int a, long long int l)
{
  long long int ans = 1+(3*a);
  if(ans<=l)
  {
    cnt++;
    a = ans;
    checker(a,l);
  }
}

void checker(long long int a, long long int l)
{
  if(a == 1)
  return;
  else if(a % 2 == 0)
  even(a,l);
  else
  odd(a,l);
}


int main() 
{
    long long int a,l;
    while(1){
      cin >> a >> l;
      if(a < 0 && l < 0)
      break;
      
      checker(a,l);
      
      cout << "Case " << cs++ <<": A = " << a <<", limit = "<< l <<", number of terms = "<< cnt << "\n";
      
      cnt = 1;
    }
    return 0;
}