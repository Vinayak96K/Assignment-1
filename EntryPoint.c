#include"myheader.h"

int main(int argc, char const *argv[])
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter Two Numbers:");
    scanf("%d%d",&iValue1,&iValue2);

    iRet=Divide(iValue1,iValue2);

    if(iRet==ERR_INPUT_MISMATCH)
    {
        printf("\nError:Divisor is greater than Quetient.");
    }
    else
    {
        printf("\nAnswer:%d",iRet);
    }

    return 0;
}
