#include <stdio.h>
int main()
{
    double data_package, remaning_package, average_use, package_use;
    int current_date, month = 30, remaning_days;
    float warrning = 20;
    printf("Please enter how many GB you want to use : ");
    scanf("%lf", &data_package);
    printf("Enter the current date : ");
    scanf("%i", &current_date);
    printf("Enter the how many GB used : ");
    scanf("%lf", &package_use);

    average_use = package_use / current_date;

    remaning_package = data_package - package_use;
    remaning_days = month - current_date;
    printf("\n\n");

      if (package_use < data_package )
    {
        printf("You use %0.03lf  GB and remaning %0.03lf GB \n", package_use, remaning_package);
        printf("Your average use is : %0.03lfGB /day \n ", average_use);
        printf("Your remaning data package is : %0.03lfGB \n", remaning_package);
        printf("Your remaning days is %d\n", remaning_days);
        printf("Your data limits is %0.03lf GB and you use %0.03lf GB  \n", data_package, data_package / 30);
        printf("Alert your use your average data ......!!\n");
    }

    else if (package_use == (data_package - (0.5*warrning)))
    {
        printf("You use %0.02lf  GB and remaning %0.02lf GB \n", package_use, remaning_package);
        printf("Your average use is : %0.02lfGB / day\n ", average_use);
        printf("Your data limits is %0.02lf GB and you use %0.02lf GB  \n", data_package, package_use);
        printf("Your remaning data package is : %0.02lfGB \n", remaning_package);
        printf("Your remaning days is %d\n", remaning_days);
        printf("Alert You cross your averge use data limit.....  \n ");
    }
   
    else if(remaning_package == 0)
    {
        printf("You use %0.01lf  GB and remaning %0.01lf GB \n", package_use, remaning_package);
        printf("Your average use is : %0.01lfGB /day \n ", average_use);
        printf("Your data limits is %0.01lf GB and you use %0.01lf GB  \n", data_package, data_package / 30);
        printf("Your remaning data package is : %0.01lfGB \n", remaning_package);
        printf("Your remaning days is %d\n", remaning_days);
        printf("Warning Your Data package is Expired ......! \n It is recommended you to recharge your Data Package Other wise we charge 20 ruppes for 200MB\n ");
    }
    else
    printf("Invalid Please follow the instruction : ");
    return 0;
}