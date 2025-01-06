#include <stdio.h>

int main()
{
    int subject;
    printf("enter subject code : ");
    scanf("%d", &subject);

    switch (subject)
    {
    case 1:
        printf("physics\n");
        break;
    case 2:
        printf("maths\n");
        break;
    case 3:
        printf("BEE\n");
        break;
    case 4:
        printf("CAEG\n");
        break;
    case 5:
        printf("HVAS\n");
        break;
    case 6:
        printf("Human values\n");
        break;
    case 7:
        printf("PHY lab\n");
        break;
    case 8:
        printf("BEE lab\n");
        break;
    case 9:
        printf("PBL\n");
        break;
    case 10:
        printf("Master your communication\n");
        break;
        default : printf("not valid code for subject");
    }
    return 0;
}