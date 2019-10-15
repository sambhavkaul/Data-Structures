#include<stdio.h>
int main()
{
    int array[5],i,ele,n;
    for(i=0;i<5;i++)
    {
    printf("Enter the element %d\n",i+1);
    scanf("%d",&array[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    for(i=0;i<5;i++)
    {
        if(array[i]==ele){
            printf("Element is found at index %d",i);
        break;}
    }
    if(i==5)
    {
        printf("Element not found\n");
    }
    return 0;
}
