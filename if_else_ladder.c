#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >=100 )
    {
        printf("burger khabo ");
    }else if( tk >=50)
    {
        printf("fuska khabo");
    } else if(tk >30)
    {
        printf("anda khabo ");
    }
    else
    {
        printf("kichui khabo na ");
    }
}