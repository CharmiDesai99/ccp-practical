#include<stdio.h>
void main()
{
    int matchSticks=21,i,c;//i=user stcks,c=computer sticks
    label1:while(matchSticks!=1)
{
    printf("\nuser choose no. of sticks to pick :");
    scanf("%d",&i);
    if(i!=1&&i!=2&&i!=3&&i!=4)
{
    printf("enter no.from 1-4 only");
    goto label1;
}
    c=5-i;
    printf("\ncomputer choose no. sticks to pick :%d",c);
    matchSticks=matchSticks-(c+i);
    if(matchSticks==1)
{
    printf("\noops! user lost the game:(");
}
}
    printf("\n24CE023__Desai Charmi.");
}
