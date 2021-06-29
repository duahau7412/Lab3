#include "DataGenerator.cpp"

using namespace std;

void sift(int A[],int left,int right){
    int i = left;
    int j = 2 *i;
    int x = A[i];

    while (i <= right){
        if(j < right)
            if(A[j] > A[j + 1]) j++;
        if(x == A[j]) break;
        A[i] = A[j];
        i = j;
        j = 2 * i;
    }
    
    A[i] = x;
}

void printArray(int *A,int n){
    for (int i = 0; i < n; i++){
        cout << A[i] <<" ";
    }
    cout << endl;
}

int main(int argc, char *argv[]){
    int n = 100;
	int *A = new int [n];
    GenerateData(A,n,3);
    printArray(A,n);
    return 0;
}

