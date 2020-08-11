/*Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:

Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.

Note:

    The input array will only contain 0 and 1.
    The length of input array is a positive integer and will not exceed 10,000*/
#include<stdio.h>
int main()
{
	int n,i,count=0,max=0;
	int *array;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]==1)
			count++;
		if(array[i]==0 || i==n-1)
		{
				if(count>max)
					max=count;
				count=0;	
		}
	}
	free(array);
	printf("The Maximum consecutive 1s in this array is %d",max);
}

