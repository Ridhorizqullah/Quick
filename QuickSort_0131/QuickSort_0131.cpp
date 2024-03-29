include < iostream>
using namespace std;
//array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
		cout << "masukkan panjang elemnt arry; ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout < , "\nmaksium panjang array adalah 20" << endl;
}

	