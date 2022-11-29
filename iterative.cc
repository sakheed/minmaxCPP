#include <iostream>
using namespace std;


void iterative(int A[], int n){
	int min = A[0];
	int max = A[0];

	for (int i=0; i<=n; i++){
		if( A[i] <min){
			min = A[i];
		}

		if (A[i]>max){
			max = A[i];
		}
	}

	cout << "Max is: " << max << "\n";
	cout << "Min is : " << min << "\n";

}

int main(){

	int n;
	cout << "Enter your desired array size: " ;
	cin >> n;

	int A[n];

	for (int i =0; i<n; i++){
		cout << "Enter the element for index " << i << " : ";
		cin >> A[i];
	}

	iterative(A,n);
}

