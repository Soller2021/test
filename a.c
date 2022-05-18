#include<stdio.h> 
int main()
{
int x;
printf("请输入输入的元素个数\n");
scanf("%d",&x);
int array[x];
printf("请输入整数元素\n");
int i;
for(i=0;i<x;i++){
	printf("请输入第%d个元素\n",i+1);
	scanf("%d",&array[i]);
}

for(i=0;i<x;i++)
printf("第%d个元素为%d\n",i+1,array[i]);
	int max=0;
	int arraynow;
	for(i=0;i<x;i++){
		arraynow+=array[i];
		if(arraynow>max)
		max=arraynow;
		else if(arraynow<0)
		arraynow=0;
	}
	printf("最大子数组为%d\n",max);
}
