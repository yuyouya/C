#include <stdio.h>

int main(void)
{
    int i, n;
    int f2 = 2, f1 = 1;
    int f3;

    printf("请输入需要的序列\n");
    scanf("%d", &n);
    if (1 == n)
    {
        f2 = 1;
    }
    else if (2 == n)
    {
        f3 = 2;
    }
    else
    {
        for (i = 3; i <= n; ++i)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("%d\n", f3);

    return 0;
}

/*
  scanf不需要加\n换行，if语句要跟花括号{}，
  设序列为5
    1>  i = 3，i<=n;++i
        n = 5,3<=3,
        f3 = 1+2 = 3;
        f1 = 2,f2 = 3;
        ++i = 4
    2> i = 4,4<=5,
        f3 = 2+3=5;
        f1 = 3,f2 = 5
    3>  i = 5,5<=5,
        f3 = 3+5 = 8;
        f1 = 5,f2 = 8
    4> i = 6(不成立)
*/