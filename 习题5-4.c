#include <stdio.h>
int main()
{
    char x;
    int a,b,c,d;
    a=0;
    b=0;
    c=0;
    d=0;
    printf("������һ���ַ� ");
    while((x=getchar())!='\n')
    {
        if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
        {
        	a=a+1;
        }
        else if (x>='0'&&x<='9')
        {
        	b=b+1;
        }
        else if(x==32)
        {
        	c=c+1;
        }
        else
        d=d+1;
    }
    printf("��ĸ����Ϊ%d\n",a);
    printf("���ָ���Ϊ%d\n",b);
    printf("�ո����Ϊ%d\n",c);
    printf("�����ַ�����Ϊ%d\n",d);
	return 0;
}
