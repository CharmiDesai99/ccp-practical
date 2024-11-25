#include<stdio.h>
void main()
{
    int  i,even=0,odd=0,pos=0,neg=0,number[25];//pos=positive number,neg=negative number
    for(i=0;i<25;i++)
   {
       printf("enter the number:");
    scanf("%d",&number[i]);
    if(number[i]>0)
    {
        pos++;
    }
    else
    {
        neg++;
    }
    if(number[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;

    }
   }
    printf("posive numbers:%d",pos);
    printf("\nnegative numbers: %d",neg);
    printf("\neven numbers:%d",even);
    printf("\nodd numbers:%d",odd);
    printf("\n 24CE023__Desai Charmi.");
}

