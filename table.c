#include <stdio.h>

int main()
{

        int a;
        int num;

        for(num=2; num<=4; num = num+1)
        {
        for (a=2; a<=10; a= a+1)
        {
        printf("%d * %d = %d\n",num,a, num * a);
        }
        printf("\n");
        }


return 0;
}
