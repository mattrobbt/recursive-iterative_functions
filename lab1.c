#include <stdio.h>

int main()
{
	int choice;
	printf("Welcome to recursive and iterative functions!\n");
	printf("Please choose [e.g 1,2,3,4]:\n");
	printf("1. Factorial Function\n");
	printf("2. Exponential Function\n");
	printf("3. GCD Function\n");
	printf("4. Odd Number Finder\n");
	printf("5. Sum of Array\n");
	scanf("%d", &choice);

	if(choice==1)
	{
		int count,num, fact=1;
		printf("Enter number to calculate factorial\n");
		scanf("%d", &num);
		printf("%d\n", factorial(num));
	}
	else if(choice==2)
	{
		int base,exp;
		printf("Enter the base\n");
		scanf("%d", &base);
		printf("Enter the power\n");
		scanf("%d", &exp);
		printf("%d\n", exponential(base,exp));
	}
	else if(choice==3)
	{
		int num1,num2;
		printf("Enter the first number\n");
		scanf("%d", &num1);
		printf("Enter the second number\n");
		scanf("%d", &num2);
		printf("The gcd is %d\n", gcd(num1,num2));
	}
	else if(choice==4)
	{
		int num;
		printf("Enter the maximum number\n");
		scanf("%d", &num);
		
		oddTo_n(num);
	}
	else if (choice ==5)
	{
		int nums[] = {6,4,8,2,9};
		printf("%d\n", arraySum(nums,4) );
	}

	

}
int factorial(num)
{
	if (num<=1){
		return 1;
	}
	else{
		return num * factorial(num-1);
	}

}

int exponential(int base, int exp)
{
	if(exp==0)
		return 1;
	else if(exp % 2)
		return base * exponential(base, exp - 1);
	else {
		int out = exponential(base, exp / 2);
		return out * out;
	}
}

int gcd(int num1,int num2)
{
	if (num2!=0)
	{
		return gcd(num2,num1%num2);
	}
	else
	{
		return num1;
	}
}

int oddTo_n(int num)
{
	if (num<=1)
	{
		printf("%d\n", num);
		return;
	}
	
	if (num % 2 != 0)
	{
		printf("%d\n", num);
		oddTo_n(num-2);
	}
	else
	{
		oddTo_n(num-1);
	}
	
}
int arraySum(int nums[],int n){
	if (n < 0)
	{
		return 0;
	}
	else
	{
		return nums[n] + arraySum(nums,n-1);
	}
}