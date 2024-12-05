#include<stdio.h>
struct Coach
{
    char name[30];
    int age;
    float experience;
};
struct Team
{
    char teamname[35];
    char sporttype[40];
    struct Coach coach;
};
int addTeam(struct Team teams[],int teamcount)
{
    printf("enter team name:");
    fflush(stdin);
    gets(teams[teamcount].teamname);
    printf("\nEnter sport type:");
    fflush(stdin);
    gets(teams[teamcount].sporttype);
    printf("\nEnter the coach name:");
    fflush(stdin);
    gets(teams[teamcount].coach.name);
    printf("\nEnter coach age:");
    fflush(stdin);
    scanf("%d",&teams[teamcount].coach.age);
    printf("\nEnter coach experience:");
    fflush(stdin);
    scanf("%f",&teams[teamcount].coach.experience);
    return teamcount+1;
}
void displayTeam(struct Team teams[],int teamcount)
{
    if(teamcount==0)
    {
        printf("NO TEAM AVAILABLE FOR DISPLAY\n");
        return;
    }
    printf("Team list--");
    for(int i=0;i<teamcount;i++)
    {
        printf("\nTeam %d is \n",i+1);
        printf("\nTeam name=%s",teams[i].teamname);
        printf("\nTeam sports=%s",teams[i].sporttype);
        printf("\nCoach name=%s",teams[i].coach.name);
        printf("\nCoach age=%d",teams[i].coach.age);
        printf("\nCoach experience=%f",teams[i].coach.experience);
    }

}
void searchTeam(struct Team teams[],int teamcount)
{
    if(teamcount==0)
    {
        printf("NO TEAM AVAILABLE FOR SEARCH");
        return;
    }
    printf("Enter search team:");
    char searchname[10];
    fflush(stdin);
    gets(searchname);
    int found=0;
    printf("teamlist");
    for(int i=0;i<teamcount;i++)
    {
        if(strcmp(teams[i].teamname,searchname)==0)
        {
            printf("\nTeam %d is \n",i+1);
        printf("\nTeam name=%s",teams[i].teamname);
        printf("\nTeam sports=%s",teams[i].sporttype);
        printf("\nCoach name=%s",teams[i].coach.name);
        printf("\nCoach age=%d",teams[i].coach.age);
        printf("\nCoach experience=%f",teams[i].coach.experience);
        found=1;
        }
    }
    if(found==0)
    {
        printf("NO SUCH TEAM NAME FOUND");
    }
}
void main()
{
    struct Team teams[30];
    int teamcount=0;
    int choice;
    do
    {
        printf("Enter 1 to 4");
        printf("\nEnter 1 to add teams:");
        printf("\nEnter 2 to display teams:");
        printf("\nEnter 3 to search teams:");
        printf("\nEnter 4 to exit the program:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            teamcount=addTeam(teams,teamcount);
            break;
        case 2:
            displayTeam(teams,teamcount);
            break;
        case 3:
            searchTeam(teams,teamcount);
            break;
        case 4:
            printf("\nExiting the program.");
            break;
        }
    }
    while(choice!=4);
    printf("24CE023__Desai Charmi.");
}
