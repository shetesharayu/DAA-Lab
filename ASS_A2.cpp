#include <iostream>

#include <vector>

using namespace std;



// function to move all zeros to the end

void pushZerosToEnd(vector<int> &arr) {

    int n = arr.size();

    vector<int> temp(n);



    // to keep track of the index in temp[]

    int j = 0;



    // Copy non-zero elements to temp[]

    for (int i = 0; i < n; i++) {

        if (arr[i] != 0)

            temp[j++] = arr[i];

    }



    // Fill remaining positions in temp[] with zeros

    while (j < n) {

        temp[j++] = 0;

    }



    // Copy all the elements from temp[] to arr[]

    for (int i = 0; i < n; i++)

        arr[i] = temp[i];

}



int main() {

    int n;

    cout << "Enter the number of elements in the array: ";

    cin >> n;



    vector<int> arr(n); // Declare the array with size n



    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }



    pushZerosToEnd(arr);



    // Print the modified array

    cout << "Array after moving zeros to the end: ";

    for (int num : arr) {

        cout << num << " ";

    }



    return 0;

}
