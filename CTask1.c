#include<stdio.h>
int main(){
	int i;
	int n;
	int product=1;
	
	printf("Enter the number: ");
	scanf("%d" , &n);
	
	for(i=1; i<=n ; i++){
		product*=i;		
	}
	printf("Factorial: %d" , product);
	
	return 0;
}
