#include <iostream>
#include <time.h>

using namespace std;

void Print(int* b, const int k) {
	for (int i = 0; i < k; i++) {
		cout << b[i] <<" ";
	}
}
void proces(int*& b, const int k, int &count, int &sum) {
	
	for (int n = 0; n < k; n++) {

		if ((b[n] < 0) && (b[n] % 2 == 0)) {
			sum += b[n];
			count++;
			b[n] = 0;
		}
	}


}

void imputE(int k, int*& b) {
	for (int i = 0; i < k; i++) {
		b[i] = - 15 + rand() * 90 / RAND_MAX;
		
	}
	
}

int main() {
	srand((unsigned)time(NULL));
	int k = 24, sum = 0, count = 0;
	int i;
	int* b = new int[k];
	imputE(k, b);
	Print(b, k);
	proces(b, k, count, sum);
	
	cout << endl <<  "sum " << sum;

	cout << endl << "count " << count << endl;
	Print(b, k);
	
	delete [] b;
	return 0;
}
