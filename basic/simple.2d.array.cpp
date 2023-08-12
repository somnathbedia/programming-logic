#include<iostream>
using namespace std;

void printSpecial(int array[][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j <= 2; j++){
            if(i== 0 && j== 2){
                cout<<array[i][j]<<endl;
            }
            if(i== 1 && j==2){
                cout << array[i][j] << endl;
            }
        }
    }
}

int main()
{
    int matrix[2][3] = {1, 2, 3, 4, 5, 6};
    printSpecial(matrix);

    return 0;
}
