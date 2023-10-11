#include <stdio.h>

int main() {
    float totalGB, currentDay, totalUsedGB;
    
    printf("Enter number of GB in the plan per 30 day period: ");
    scanf("%f", &totalGB);
    
    printf("Enter the current day in the 30 day period (1 to 30): ");
    scanf("%f", &currentDay);
    
    printf("Enter the total number of GB used so far: ");
    scanf("%f", &totalUsedGB);
    
    float remainingDays = 30 - currentDay;
    float averageDailyUse = totalUsedGB / currentDay;
    float remainingGB = totalGB - totalUsedGB;
    float maxDailyUsage = remainingGB / remainingDays;
    
    printf("%.0f days used, %.0f days remaining\n", currentDay, remainingDays);
    printf("Average daily use: %.3f GB/day\n", averageDailyUse);
    
    if (averageDailyUse > maxDailyUsage) {
        printf("You are EXCEEDING your average daily use (%.3f GB/day).\n", maxDailyUsage);
        printf("Continuing this high usage, you'll exceed your data plan by %.0f GB.\n", (averageDailyUse - maxDailyUsage) * remainingDays);
        printf("To stay below your data plan, use no more than %.3f GB/day.\n", maxDailyUsage);
    } else if (averageDailyUse == maxDailyUsage) {
        printf("You are at your average daily use (%.3f GB/day).\n", averageDailyUse);
        printf("You can use up to %.3f GB/day and stay below your data plan limit.\n", maxDailyUsage);
    } else {
        printf("You are under your average daily use (%.3f GB/day).\n",maxDailyUsage);
        printf("You can use up to %.3f GB/day and stay below your data plan limit.\n", maxDailyUsage);
    }

    return 0;
}
