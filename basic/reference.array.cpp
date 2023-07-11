#include<iostream>
using namespace std;

void printNums(int* arr,int length){
     
    for (int i = 0; i < length; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int* manipulateArray(int* arr,int length,int newValue,int index){
    if(index<0){
        cout << "Please Enter valid index";
    }
    for (int i = 0; i < length; i++){
        if(i == index){
            arr[i] = newValue;
        }
    }

    return arr;
}

void printManipulateArray(int* array,int length){
    for (int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
    cout << a << " " << b << endl;
}

int* deleteArrayItem(int* arr,int &length,int index){
    if(index < 0 && index > length){
        cout << "Please enter valid index!!"<<endl;
    }
    for (int i = 0; i < length - 1; i++){
        if(i >= index){
            arr[i] = arr[i + 1];
        }
    }
    length--;
    return arr;
}

int main(){
    int evenNums[] = {2,4,6,8,10,16,20,24,42};
    int length = sizeof(evenNums)/sizeof(evenNums[0]);
    

    return 0;
}