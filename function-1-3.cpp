#include <iostream>

using namespace std;

void copy_integers(int old_array[],int new_array[],int length){
    int *old_ptr = old_array;
    int *new_ptr = new_array;
    for(int i=0 ; i<length ; ++i){
        (*new_ptr++) = (*old_ptr++);
    }
}



