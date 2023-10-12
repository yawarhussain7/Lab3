
#include <stdio.h>

int main() {
  double totalGB,totaluse,reminder_data,average_use,max_Use;
    int current_day,remaning_day;
    
    printf("Enter the number of GB in the plan per 30 day period : ");
    scanf("%lf",&totalGB);
    printf("Enter the current day in 30 day period (1-30) : ");
    scanf("%i",&current_day);
    printf("The total number of GB used so far : ");
    scanf("%lf",&totaluse);
    
    reminder_data = totalGB - totaluse;
    
    average_use = totaluse/current_day;
    
    remaning_day = 30 - current_day;
    
    max_Use = reminder_data/remaning_day;
    
    if(average_use > max_Use)
    {
    printf("%i days used, %i days remaining\n",current_day,remaning_day);
    printf("You are EXCEEDING your average daily use (%lfGB/day).\n",average_use);
    printf("Continuing this high usage, you'll exceed your data plan by %lf GB.\n",(average_use - max_Use )* remaning_day);
    printf("To stay below your data plan, use no more than %lf GB/day.\n",max_Use);
    }
    else if(average_use == max_Use)
    {
     printf("%i days used, %i days remaining\n",current_day,remaning_day);   
     printf("You are EXCEEDING your average daily use (%lfGB/day).\n",average_use);
     printf("You are at or below your average daily use (%lf GB/day).\n",average_use);
printf("You can use up to %lf GB/day and stay below your data plan limit\n",max_Use);
    }
    else
    {
  
        printf("You are under your average daily use (%.3f GB/day).\n",max_Use);
        printf("You can use up to %.3f GB/day and stay below your data plan limit.\n",max_Use);
    }
    
    

    return 0;
}
