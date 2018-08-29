#include"myheader.h"

/////////////////////////////////////////////////////////////////////////////
//  Function Name: Divide
//  Descritpion: Returns answer of division of two numbers.
//  Input: int[IN,IN]
//  Output: double
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
int iAns=0;

if(iNo2>iNo1)
{
return ERR_INPUT_MISMATCH;
}

iAns=iNo1/iNo2;

return iAns;
}
