#include <iostream>

using namespace std;

// method

void copy_integers(int old_array[],int new_array[],int length) {

for(int i=0; i<length; i++){

// accessing using pointer

*(new_array + i) = *(old_array + i);

}

}

