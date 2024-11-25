#include<stdio.h>

int totalmarks(int[],int);
float avg(int[],int);
int max(int[],int);
int min(int[],int);
void main()
{
    int n;
    printf("enter number of students=%d",n);
    scanf("%d",&n);
    int marks[n],i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter marks[%d]=",i);
        scanf("%d",&marks[i]);
    }
    printf("\ntotal marks=%d",totalmarks(marks,n));
    printf("\navg marks=%.2f",avg(marks,n));
    printf("\nmaximum marks=%d",max(marks,n));
    printf("\nminimum marks=%d",min(marks,n));
    printf("\n24CE023__Desai Charmi.");

}
    int totalmarks(int m[],int s)
    {
        int sum=0,i;
        for(i=0;i<s;i++)
        {
            sum=sum+m[i];
        }
        return sum;
    }
    float avg(int m[],int s)
    {
        int average=0,i;
        for(i=0;i<s;i++)
        {
            average=(average+ m[i])/s;
        }
        return average;
    }
    int max(int m[],int s)
    {
        int maximum,i;
        maximum=m[0];
        for(i=0;i<s;i++)
        {
            if (m[i]>maximum)
            {
                maximum=m[i];
            }
        }
        return maximum;
    }
    int min(int m[],int s)
    {
        int minimum,i;
        minimum=m[0];
        for(i=0;i<s;i++)
        {
            if(m[i]<minimum)
            {
                minimum=m[i];
            }
        }
        return minimum;
    }





