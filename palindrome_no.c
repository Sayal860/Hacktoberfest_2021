#include<stdio.h>

int main(){
	int num,reverse=0,n;
	printf("enter a number:");
	scanf("%d",&num);
	n=num;
	while(n!=0){
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("the reverse of %d is %d\n",num,reverse);
	if(num==reverse){
		printf("%d is a palindrome no.\n",num);
	}
	else{
		printf("the number is not a palindrome no.");
	}
	return 0;
}
