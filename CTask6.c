#include<stdio.h>
int main(){
	int original = 1234;
	int user;
	
	
	do{
		printf("Enter the password: ");
		scanf("%d" , &user);
		
	} while (user != original);
	
	printf("Access granted");
	return 0;
}
