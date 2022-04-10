//break用于终止循环，用于switch是终止switch
//break不能直接用于if，除非if属于循环内部的子句。
#include <stdio.h>

int main(void)
{
    int i;
    for(i = 0;i<=3; ++i)
    {
        if(3>2)
          break;
          printf("ei\n");
    }

    return 0;
}