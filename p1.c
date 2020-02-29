#include<stdio.h>
void tower(int n,char s,char d,char t1,char t2)
{
	if(n==0)
	return;
	if(n==1){
	printf("\nmove disk %d from rod %c to rod %c",n,s,d);
	return;
	}
	tower(n-2,s,t1,t2,d);
	printf("\n move disk %d from rod %c to rod %c",n-1,s,t2);
	printf("\n move disk %d from rod %c to rod %c",n,s,d);
	printf("\n move disk %d from rod %c to rod %c",n-1,t2,d);
	tower(n-2,t1,d,s,t2);
}
int main()
{
	int n=4;
	tower(n,'A','B','C','D');
	return 0;
}

	
