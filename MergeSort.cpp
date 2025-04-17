#include <iostream>
using namespace std;
#include <string>
int arr[20], B[20]; // Membuat array dengan panjang data 20

int n; // membuat variable inputan n

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Inputan Element Maksimal 20";
        }

        cout << "\n=========================";
        cout << "\nInputan Isi Element Array";
        cout << "\n=========================";

        for (int i = 0; i < n; i++)
        {
            cout << "Array Index Ke-" << i << " : ";
            cin >> arr[i];
        }
    }
}
void MergeSort(int low, int high){
    //step 1
    if (low >= high)
    {
        return; // step 1.a
    }
    // step 2
    int mid = (low + high) / 2;

    // step 3
    MergeSort(low, mid);
    MergeSort(mid + 1, high);
    
    // step 4
    int i, j;
    i = low;     // step 4.a
    j = mid + 1; // step 4.b

    int k = low;                  // step 4.c
    while (i <= mid && j <= high) // step 4.d
    {
        if (arr[i] <= arr[j])
        { // step 4.d.i
            B[k] = arr[i];
            i++;
        }
        else
        {
            {
                B[k] = arr[j];
                j++;
            }
            k++; // step4.d.ii
        }

        // step 4.e
        while (j <= high)
        {
            B[k] = arr[j];
            j++;
            k++;
        }
        // step 4.f
        while (i <= mid)
        {
            B[k] = arr[i];
            i++;
            k++;
        }
}

void Output()
{
    cout << "\nData setelah diurutkan (Merge Sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

}