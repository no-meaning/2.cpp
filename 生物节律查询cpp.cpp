#include<stdio.h>
#include<iostream>
int main()
{int y1,y2,y,m1,m2,d1,d2,i=0,p,x,k,sum;
printf("������ⶨ������(��1999.9.05):");
scanf("%d.%d.%d",&y1,&m1,&d1);
fflush(stdin);
printf("���������������(��1954.12.11):");
scanf("%d.%d.%d",&y2,&m2,&d2);
y=y2;
while((y<=y1)&&(y>=y2))
    {if((y%4==0&&y%100!=0)||(y%400==0))  
	    i=i+1;
	else i=i+0;y=y+1;}
printf("������Ϊ%d\n",i);
if(m1==1) x=d1;
else if(m1==2) x=d1+31;
else if(m1==3) x=d1+59;
else if(m1==4) x=d1+90;
else if(m1==5) x=d1+120;
else if(m1==6) x=d1+151;
else if(m1==7) x=d1+181;
else if(m1==8) x=d1+212;
else if(m1==9) x=d1+243;
else if(m1==10) x=d1+273;
else if(m1==11) x=d1+304;
else if(m1==12) x=d1+334;
if((y1%4==0&&y1%100!=0)||(y1%400==0))   
	x=x+1;
else x=x;
printf("1��1������������%d��\n",x);
if(m2==1) k=d2;
else if(m2==2) k=d2+31;
else if(m2==3) k=d2+59;
else if(m2==4) k=d2+90;
else if(m2==5) k=d2+120;
else if(m2==6) k=d2+151;
else if(m2==7) k=d2+181;
else if(m2==8) k=d2+212;
else if(m2==9) k=d2+243;
else if(m2==10) k=d2+273;
else if(m2==11) k=d2+304;
else if(m2==12) k=d2+334;
if((y2%4==0&&y2%100!=0)||(y2%400==0))    //��1��1������������y
	k=k+1;
else k=k;
printf("1��1����������%d��\n",k);
sum=(y1-y2)*365+i-k+x;
printf("����������Ϊ%d��\n",sum);
p=(sum)%28;
printf("��������Ϊ%d\n",p);
if(p=0) printf("�����������ɴ���������.\n");
else if(p<14) printf("�����������ɴ��ڸ߳���.\n");
else if(p=14) printf("�����������ɴ����ٽ���.\n");
else printf("�����������ɴ��ڵͳ���.\n");
system("pause");
}