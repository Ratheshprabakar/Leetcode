/*Given an array nums of integers, return how many of them contain an even number of digits.

 

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.

 

Constraints:

    1 <= nums.length <= 500
    1 <= nums[i] <= 10^5
*/
#include<stdio.h>
int main()
{
	int n,i,count=0,value,result=0;
	int *array;
	printf("Enter number of numbers\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=0;i<n;i++)
	{
		count=0;
		value=array[i];
		while(value>0)
		{
			count++;
			value=value/10;	
		}
		if(count%2==0)
			result++;	
	}
	free(array);
	printf("Numbers with even number of digits are %d",result);
}
