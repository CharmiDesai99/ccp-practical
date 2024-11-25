#include<stdio.h>
void main()
{

    long PI,WI,MI,LMI,LWI,TLI,IM,IW;
    PI=1441981744;
    WI=(48.4/100)*PI;
    MI=PI-WI;
    LMI=(80.95/100)*MI;//value of literate men.
    LWI=(62.84/100)*WI;//value of literate women.
    TLI=(85.95/100)*PI;//total literate people.
    IW=WI-LWI;
    IM=MI-LMI;
    printf("value of Illiterate Women: %ld", IW);
    printf("\nvalue of Illiterate Men: %ld", IM);
    printf("\n24CE023__Desai Charmi.");
    return 0;
}
