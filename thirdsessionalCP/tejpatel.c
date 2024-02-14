#include<stdio.h>
struct cricket
{
    char teamName[20];
    char captianName[20];
    struct players
    {
        int runs;
        int wickets;
        char playerName[20];
    } player[11];

} team[8];

int main()
{
    int i,j,k=0,max=-1,maxindex[11];
    for(i=0;i<8;i++)
    {
        printf("Enter Team Name:");
        scanf("%s",&team[i].teamName);
        printf("Enter Captian Name:");
        scanf("%s",&team[i].captianName);
        printf("Enter Details Of Players:\n");
        for(j=0;j<11;j++)
        {
            printf("Enter Name of Player %d:",j+1);
            scanf("%s",&team[i].player[j].playerName);
            printf("Enter Wickets Taken By Player:");
            scanf("%d",&team[i].player[j].wickets);
            printf("Enter Runs By Player:");
            scanf("%d",&team[i].player[j].runs);
            printf("\n");

        }

    }
    for(i=0;i<8;i++)
    {
        printf("Information of Highest Run Scorer of Team %s:\n",team[i].teamName);
        for(j=0;j<11;j++)
        {
            if(team[i].player[j].runs>max)
            {
                max=team[i].player[j].runs;
            }


        }
        for(j=0;j<11;j++)
        {
            if(team[i].player[j].runs==max)
            {

            printf("Player Name:%s\n",team[i].player[j].playerName);
            printf("Runs By Player:%d\n",team[i].player[j].runs);
            printf("Wickets By Player:%d\n\n",team[i].player[j].wickets);
            }

        }
        max=-1;

    }

    return 0;

}