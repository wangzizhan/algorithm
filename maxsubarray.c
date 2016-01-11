#include<stdio.h>
#include<string.h>
#define MAXLEN 10
int MaxSubSum(int arr[],int len);
int main(void) {
	int arr[MAXLEN]={10,1,-7,6,2};
	int len = sizeof(arr)/sizeof(int);
	int max = MaxSubSum(arr,len);
	printf("max:%d\n",max);

	return 0;
}

int MaxSubSum(int arr[],int len)
{
  int i;
  int MaxSum = 0;
  int CurSum = 0;
  for(i=0;i<len;i++)
  {
    CurSum += arr[i];
    if(CurSum > MaxSum)
      MaxSum = CurSum;
    if(CurSum < 0)
      CurSum = 0;
  }
  return MaxSum;
}
