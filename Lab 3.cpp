#include "DataGenerator.cpp"

using namespace std;

void sift(int A[],int n,int right){
    
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

