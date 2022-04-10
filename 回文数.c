#include <stdio.h>

int main(void)
{
    int sum = 0;
    int val;
    int m;
    printf("请输入数字\n");
    scanf("%d, &val");
    
    m = val;
    while(m)
    {
        sum = sum * 10 + m % 10;
        m /= 10;
    }

    if(sum == val)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

/*
    1.m = 521(成立)
      sum = 0*10+521%10 = 1
      m/=10 = 521/10 = 52    
    2.m = 52成立
      sum=1*10+52%10=12
      m = 52/=10 = 5
    3.m = 5(成立)
      sum = 12*10+5%10 = 125
      m = 1 / 10 = 0
    4.m = 0(不成立)
*/