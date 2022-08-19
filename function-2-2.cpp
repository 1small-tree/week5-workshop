#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length){
    int n_count = 0;
    int max = 0;
    for(int i=0 ; i<length ; ++i){
        int sum = 0;
        if(nums[i]<0){
            n_count++;
        }
        for(int j=0 ; j<length ; ++j){
            sum +=nums[i+j];
            if(sum>max){
                max=sum;
            }
        }
    }
    return (n_count == length) ? 0 : max;

}