#include <iostream>
#include <vector>
using namespace std;

void Arr1() {
	// Arr1.Дан массив чисел.Нужно его сдвинуть циклически на K позиций влево, не используя других массивов.
	int k;
	cin >> k;
	int *arr = new int[k];
	for (int i = 0; i < k; i++)
		cin >> arr[i];
	int s;
	cin >> s;
	for (int i = 0; i < s; i++) {
		int a = arr[0];
		for (int i = 0; i < k; i++)
			arr[i] = arr[i + 1];
		arr[k - 1] = a;
	}
	cout << endl;
	for (int i = 0; i < k; i++)
		cout << arr[i] << " ";
	delete[] arr;

}


void Col1() {
	int k;
	cin >> k;
	vector<int> vec(k);
	for (int u = 0; u < k; u++)
		cin >> vec[u];
	int Q;
	cin >> Q;
	for (int u = 0; u < Q; u++) {
		int i, j, s;
		s = 0;
		cin >> i >> j;
		for (int u = i - 1; u < j; u++)
			s += vec[u];
		cout << s << endl;

	}
}

int main()
{
	Arr1();
	cout << endl;
	Col1();
}