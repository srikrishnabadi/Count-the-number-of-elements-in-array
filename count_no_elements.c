#include<stdio.h>
#include<stdlib.h>
int count=0;
int main()
{
    int a[10],arr[10],n,j,num,i;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements int array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        num=arr[i];
        for(j=0;j<n;j++)
        {
            if(num==arr[j])
                count++;
        }
        a[i]=count;
        count=0;
    }
    for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(int k = j; k < n; k++)
    			{
    				arr[k] = arr[k + 1];
    				a[k]=a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
    for(i=0;i<n;i++)
        printf("The %d has count of %d\n",arr[i],a[i]);
    return 0;
}
