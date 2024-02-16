/* 5
WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
*/

#include <stdio.h>              



int main()                        
{
	int a[100],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: ");
        
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)                     
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}  
		}
	}
	printf("\n\nAscending : ");                     //Printing message
	for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++)                     
	{
		for (int j = 0; j < n; j++)             
		{
			if (a[j] < a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}
		}
	}
	printf("\n\nDescending : ");                    
	for (int i = 0; i < n; i++)  {
	}printf(" %d ", a[i]);                

	
		
	
