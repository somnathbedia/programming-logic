#include<iostream>
using namespace std;

void printNums(int* arr,int length){
     
    for (int i = 0; i < length; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void manipulateArray(int* arr,int length,int newValue,int index){
    if(index<0){
        return;
    }
    for (int i = 0; i < length; i++){
        if(i == index){
            arr[i] = newValue;
        }
    }
}

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
    cout << a << " " << b << endl;
}

int main(){
    int evenNums[5] = {2,4,6,8,10};
    int length = sizeof(evenNums)/sizeof(evenNums[0]);
    int val,index;
    cout << "Enter value to be inserted: ";
    cin >> val;
    cout << "Enter index: ";
    cin >> index;

    manipulateArray(evenNums, length, 100, 2);
    cout << "Array manipulate successfully!!!" << endl;
    
    return 0;
}