#include<stdio.h>
union CricketTeam
{
char PlayerName[50];
int jerseyNumber;
float battingAvg;
};
int main()
{
union CricketTeam team;
printf("enter PlayerName:");
scanf("%s",team.PlayerName);
printf("PlayerName:%s\n",team.PlayerName);
printf("enter jersey number:");
scanf("%d",&team.jerseyNumber);
printf("jerseynumber:%d\n",team.jerseyNumber);
printf("enter batting average:");
scanf("%f",&team.battingAvg);
printf("Batting Average:%.2f\n",team.battingAvg);
return 0;
}
