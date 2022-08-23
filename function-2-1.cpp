#include <iostream>

using namespace std;

int *readNumbers(){

int *array = new int[15];

for (int i=0 ; i<15 ; ++i){

cin >> *(array + i);

}

 return array;

}

void printNumbers(int *numbers,int length){

    for (int i=0 ; i<length ; ++i){
        cout << i << " " << *(numbers + i) << endl;
    }
}

void hexDigits(int *numbers,int length){

  for(int i=0 ; i<length ; ++i){
    if(numbers[i]<10){
        cout << i << " " << numbers[i] << " " << numbers[i] << endl;

    }else{
        switch(numbers[i]){
            numbers[i]=10;
            cout << i << " " << numbers[i] << " " << "A" << endl;
            break;

            numbers[i]=11;
            cout << i << " " << numbers[i] << " " << "B" << endl;
            break;

            numbers[i]=12;
            cout << i << " " << numbers[i] << " " << "C" << endl;
            break;

            numbers[i]=13;
            cout << i << " " << numbers[i] << " " << "D" << endl;
            break;

            numbers[i]=14;
            cout << i << " " << numbers[i] << " " << "E" << endl;
            break;

            numbers[i]=15;
            cout << i << " " << numbers[i] << " " << "F" << endl;
            break;


        }
    }

  }
     
 }
