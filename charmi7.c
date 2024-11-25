#include<stdio.h>
void main()
{
    int Raman_Bngw,Raman_plot,Raman_car,Raman_totalwealth,Suman_totalwealth,Suman_apmt,Suman_hotel,Suman_car;
    Raman_Bngw=12000000;
    Raman_plot=6000000;
    Raman_car=3000000;
    Suman_apmt=11000000;
    Suman_hotel=8000000;
    Suman_car=8000000;
    Raman_totalwealth=Raman_Bngw+Raman_car+Raman_plot;
    Suman_totalwealth=Suman_apmt+Suman_car+Suman_hotel;
    printf("Raman's total wealth is %d",Raman_totalwealth);
    printf("\nSuman's total wealth is %d",Suman_totalwealth);
    if(Raman_totalwealth<Suman_totalwealth)
    {
        printf("\n Suman's total wealth is greater than Raman's total wealth");
    }
    else if(Raman_totalwealth>Suman_totalwealth)
    {
        printf("\n Raman's total wealth is greater than Suman's total wealth");
    }
    else
    {
        printf("\n Both have same wealth.");
    }
    printf("\n24CE023__Desai Charmi.");
}
