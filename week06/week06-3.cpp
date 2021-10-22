#include <stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);

    if(a>c){
    temp=a;
    a=c;
    c=temp;
    }

    if(b>c){
    temp=b;
    b=c;
    c=temp;
    }

    if(b>a){
    temp=b;
    b=a;
    a=temp;
    }

    printf("你看，最大邊在c:%d",c);
}
