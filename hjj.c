//void rotate(int* nums, int numsSize, int k) {
//    int arr[numsSize];
//    for (int i = 0; i < numsSize; ++i) {
//        arr[(i + k) % numsSize] = nums[i];
//    }
//    for (int i = 0; i < numsSize; ++i) {
//        nums[i] = arr[i];
//    }
//}
//int missingNumber(int* nums, int numsSize) {
//    int i = 0;
//    int sum1 = 0;
//    int sum2 = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        sum1 += nums[i];
//    }
//    for (i = 0; i < numsSize + 1; i++)
//    {
//        sum2 += i;
//    }
//    return sum2 - sum1;
//}
#include<stdio.h>
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}
#define MAX_SIZE A+B
struct _Record_Struct
{
	unsigned char Env_Alarm_ID : 4;
	unsigned char Para1 : 2;
	unsigned char state;
	unsigned char avail : 1;
}*Env_Alarm_Record;
struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);