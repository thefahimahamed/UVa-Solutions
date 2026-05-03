#include <string.h>
#include <stdlib.h>

int digit = 1;
void processGrid(int n, int m, char s[][m],int x,int y)
{
  int i;
  int j;
  for(i = 0; i < n ; i++)
  {
    for(j = 0 ; j < m ; j++)
    {
      if(s[i][j] == '*')
      continue;
      else
      {
      if(abs(i-x) <= 1 && abs(j-y) <= 1)
      s[i][j]++;
      }   
    }
  }
}

int main()
{
    int n,m;
    int i;
    int j;
    
    while(1)
    {
    scanf("%d %d",&n,&m);
    getchar();
    if(n==0 && m==0)
    break;
    if(digit!=1)
    printf("\n");
    m++;
    char s[n][m];
    
    for(i = 0; i < n; i++)
    {
      scanf(" %[^\n]", s[i]);
    }
    
    for(i = 0;  i < n ; i++)
  {
    for(j = 0 ; j < m ; j++)
  {
    if(s[i][j] == '*')
    continue;
    else
    s[i][j] = '0';
  }
  }
  
  
  
    for(i = 0; i < n ; i++)
    {
      for(j = 0; j < m ; j++)
      {
        if(s[i][j] == '*')
        processGrid(n, m, s,i,j);
      }
    }
    
    
    printf("Field #%d:\n",digit);
    
    for(i = 0; i < n ; i++)
    {
      for(j = 0; j < m-1 ; j++)
      {
        if(s[i][j] != ' ')
        printf("%c",s[i][j]);
      }
      printf("\n");
    }
    digit++;
    }
    return 0;
}