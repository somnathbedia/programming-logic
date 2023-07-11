#include<iostream>
using namespace std;

void printValues(int arr[],int length){
    
    for (int i = 0; i < length; i++){
        cout << &arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int integers[5] = {1,2,3,4,5};
    int length = sizeof(integers) / sizeof(integers[0]);
    printValues(integers, length);

    return 0;
}