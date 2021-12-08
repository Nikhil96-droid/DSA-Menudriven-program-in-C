#include<stdio.h>
int main()
{   
    int n,value,a[10];
    printf("\n Enter the element in array:");
    scanf("%d",&n);
    for(int i=0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to be search:");
    scanf("%d",&value);
    
    int mid; 
    int lb=0;
    int ub=n-1;
    int check=0;
    while(lb <= ub)
    {
        mid=(ub+lb)/2;
        if(a[mid]==value)
        {
            printf("%d",mid);
            check =1;
            break;
        }
        else if(a[mid]>value)
        {
            ub=mid-1;
        }
        else if(a[mid]<value)
        {
            lb=mid+1;
        }
    }
    if(check==0)
    {
        printf("\n Elememt not found!");
    }
    return 0;
}
