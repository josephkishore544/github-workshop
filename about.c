#include<stdio.h>
#include<conio.h>
int main () {
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	int i;
	for(i = 0;i<n;i++)
		printf("%d ",i);
	printf("\n");
	for(i = n;i>0;i--)
		printf("%d ",i);
	//Feature1 branch addition
	int j;
	for(i=0;i<n;i++) {
		for(j=0;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
}

