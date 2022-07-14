#include <stdio.h>

int addFunction(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    printf("Ashraful \n");
    int a = 0;
    // while (a < 10)
    // {
    //     printf("The result is => %d  \n", a);
    //     a++;
    // };
    int count = 14;
    // for (int i = 1; i <= count; i++)
    // {
    //     if (i==10) break;
    //     if (i==10) continue;;
    //     printf("The result is => %d  \n", i);
    // };'
    // switch (count)
    // {
    // case 1:
    //     printf("Okay ......... \n");
    //     break;
    // case 10:
    //     printf("Noting ......  \n");
    //     break;
    // case 14:
    //     printf("Your are okay \n");
    //     break;

    // default:
    //     printf("Not Found... \n");
    //     break;
    // }
    printf("%d", addFunction(4, 6));
};
