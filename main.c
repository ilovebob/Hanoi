#include<stdio.h>
int main()
{
	void move(int n,char x,char y);
	void hanoi(int n,char one,char two,char three);
	int n;
	printf("please input the number of the plates\n");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
void move(int i,char x,char y)
{
	static int step=1;
	printf("%d:%d from %c to %c\n",step++,i,x,y);
}

void hanoi(int n,char one,char two,char three)
{
	if(n==1){
		move(n,one,three);
	}
	else {
		hanoi(n-1,one,three,two);
		move(n,one,three);
		hanoi(n-1,two,one,three);
	}
}
