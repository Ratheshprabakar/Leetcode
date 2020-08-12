/*Squares of a Sorted Array
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Note:

    1 <= A.length <= 10000
    -10000 <= A[i] <= 10000
    A is sorted in non-decreasing order.
*/
#include<stdio.h>
int main()
{
	int n,i,flag=1,j;
	int *array,*temp;
	printf("Enter the number of elements\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	temp=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		temp[i]=array[i]*array[i];
	}
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i-1;j++)
		{
			if(temp[j]>temp[j+1])
			{
				temp[j]=temp[j]^temp[j+1];
				temp[j+1]=temp[j]^temp[j+1];
				temp[j]=temp[j]^temp[j+1];
				flag=1;	
			}		
		}
	}
	printf("The Output square of a sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",temp[i]);
	}
	free(array);
	free(temp);
		
}	
