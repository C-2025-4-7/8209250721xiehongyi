#include<iostream>
using namespace std;
void sort(int* arr, int len) {
   for (int i = 0; i < len - 1; i++) { 
        for (int j = 0; j < len - 1 - i; j++) { 
            
            if (*(arr + j) > *(arr + j + 1)) { 
                int temp = *(arr + j);         
                *(arr + j) = *(arr + j + 1);  
                *(arr + j + 1) = temp;        
            }
        }
    }
}
int main() {
	int n;//元素个数
	cout << "请输入个数" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    delete[] arr;
}
