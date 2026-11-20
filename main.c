
#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n vao day: ");
    scanf("%d", &n);
    
    int tong=0;
    
    for(int i=1; i<=n ;i++)
    {
    	if(n%i==0)
        {
            tong=tong+1;
        }
    }
    
    if(tong==2)
    {
        printf("So nguyen to");
    }
    else
    {
        printf("Ko ph?i s? nguyên t?");
    }

    return 0;
}


