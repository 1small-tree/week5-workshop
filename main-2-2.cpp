
#include<iostream>
using namespace std;
int main()
{
    int max_sub_sum(int *nums,int length);
    int arr1[] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    printf("Test1: %d\n", max_sub_sum(arr1, 10));
    int arr2[] = {-1, -2, -3, -4};
    printf("Test2: %d\n", max_sub_sum(arr2, 4));
    int arr3[] = {};
    printf("Test3: %d\n", max_sub_sum(arr3, 0));
    return 0;
}
