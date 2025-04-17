#include <iostream>
using namespace std;
#include <string>
int arr[20], B[20]; //Membuat array dengan panjang data 20

int n; // membuat variable inputan n

void input(){
    while (true){
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;

        if(n <= 20){
            break;
        }
        else{
            cout << "Inputan Element Maksimal 20";
        }

        cout << "\n=========================";
        cout << "\nInputan Isi Element Array";
        cout << "\n=========================";

        for ( int i=0 ; i<n ; i++ ){
            cout << "Array Index Ke-" << i << " : ";
            cin >> arr[i];
        }
    }
};
void MergeSort(int low,int high){
    
}

void Output(){
    cout << "\n Data setelah diurutkan (Merge Sort) : ";
    for( int i = 0; i < n ; i++ ){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    input();
    Output();
}