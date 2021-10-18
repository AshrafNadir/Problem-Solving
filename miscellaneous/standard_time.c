#include<stdio.h>

int main()
{
    int number;
    printf("Enter The Country Number: ");
    scanf("%d",&number);

    switch (number) {
            case 1:
                printf("Afghanistan: +04:30");
                break;
            case 2:
                printf("Adelaide: +10:30");
                break;
            case 3:
                printf("Brazil: -03:00");
                break;
            case 4:
                printf("Denmark: +01:00");
                break;
            case 5:
                printf("England: +0:00");
                break;
            case 6:
                printf("New York: -04:00");
                break;
            case 7:
                printf("Pakistan: +05:00");
                break;
            case 8:
                printf("South Africa: +02:00");
                break;
            case 9:
                printf("Malaysia: +08:00");
                break;
        }


    return 0;
}
