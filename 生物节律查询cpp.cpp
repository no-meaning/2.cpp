#include<stdio.h>
#include<iostream>
int main()
{int y1,y2,y,m1,m2,d1,d2,i=0,p,x,k,sum;
printf("请输入测定年月日(例1999.9.05):");
scanf("%d.%d.%d",&y1,&m1,&d1);
fflush(stdin);
printf("请输入出生年月日(例1954.12.11):");
scanf("%d.%d.%d",&y2,&m2,&d2);
y=y2;
while((y<=y1)&&(y>=y2))
    {if((y%4==0&&y%100!=0)||(y%400==0))  
	    i=i+1;
	else i=i+0;y=y+1;}
printf("闰年数为%d\n",i);
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
printf("1月1日至测试日有%d天\n",x);
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
if((y2%4==0&&y2%100!=0)||(y2%400==0))    //求1月1日至生日天数y
	k=k+1;
else k=k;
printf("1月1日至生日有%d天\n",k);
sum=(y1-y2)*365+i-k+x;
printf("经历总天数为%d天\n",sum);
p=(sum)%28;
printf("情绪余数为%d\n",p);
if(p=0) printf("您的情绪节律处于周期日.\n");
else if(p<14) printf("您的情绪节律处于高潮期.\n");
else if(p=14) printf("您的情绪节律处于临界日.\n");
else printf("您的情绪节律处于低潮期.\n");
system("pause");
}