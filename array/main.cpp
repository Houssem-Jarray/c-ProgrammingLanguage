#include <iostream>
using namespace std;

void printTensor(int arr[][3][3], int n, int m, int k){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int p=0; p<k; p++){
                cout << arr[i][j][p] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void setTensor(int arr[][3][3], int n, int m, int k){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int p=0; p<k; p++){
                cout << "T[" << i << "][" << j << "][" << p << "] : ";
                cin >> arr[i][j][p];
            }
        }
    }
}

int main(){
    int n, m, k;
    cout << "Enter n, m, k: ";
    cin >> n >> m >> k;

    int T[n][3][3];
    setTensor(T, n, m, k);
    printTensor(T, n, m, k);

    return 0;
}
