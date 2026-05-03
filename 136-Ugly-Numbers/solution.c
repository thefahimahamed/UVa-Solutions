int result = 0;

void checker(long long int i)
{
    if(i==1)
    {
        result = 1;
    }
    
    if(i%2==0 || i%3==0 || i%5==0)
    {
        if(i%2==0)
        {
            i/=2;
            checker(i);
        }
        else if(i%3==0)
        {
            i/=3;
             checker(i);
        }
        else
        {
            i/=5;
            checker(i);
        }
    }
    
}
int main() {
        long long int count = 0;
        for(long long int i=1;;i++)
        {
        checker(i);
        if(result)
        {
            count++;
            result = 0;
            if(count==1500)
            {
                printf("%lld",i);
                break;
            }
        }
        }

}
