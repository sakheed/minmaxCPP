#include <iostream>
using namespace std;

int* findMinMax(int A[], int start, int end){
	static int result[2];
	int* left;
	int* right;
	int mid;
	int rightMin, rightMax, leftMin, leftMax;


	if (start==end){
		result[0] = A[start];
		result[1] = A[start];
		return result;
	}

	else if (start == end-1){
		if (A[start] > A[end]){
			result[0] = A[end];
			result[1] = A[start];
		}
		else{
			result[0] = A[start];
			result[1] = A[end];
		}

		return result;
	}
		mid  = (start+end)/2;
		
		right = findMinMax (A, mid+1, end);

		rightMin = right[0];
		rightMax = right[1];
		
		left = findMinMax (A, start, mid);


		leftMin = left[0];
		leftMax = left[1];


		if (leftMin < rightMin){
			result[0] = leftMin;
		}
		else{
			result[0] = rightMin;
		}

		if (leftMax > rightMax){
			result[1] = leftMax;
		}
		else{
			result[1] = rightMax;
		}

	return result;

	}

int main(){

	int n;
	int min;
	int max;
	
	cout << "Enter your desired array size: " ;
	cin >> n;

	int A[n];

	for (int i =0; i<n; i++){
		cout << "Enter the element for index " << i << " : ";
		cin >> A[i];
	}

	int *result = findMinMax(A,0,n-1);

	min = result[0];
	max = result[1];


	cout <<"The min is: " << min <<"\n";
	cout <<"The max is: " << max << "\n";

	return 0;
}

