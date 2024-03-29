#include < iostream>
using namespace std;
//array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "masukkan panjang elemnt arry: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nmaksium panjang array adalah 20" << endl;

	}

	cout << "\n-----------------" << endl;
	cout << "\nenter arry element" << endl;
	cout << "\n-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}

}

void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;

}

void q_short(int low, int high)
{
	int temp;
	int pivot, i, j;
	if (low > high) {
		return;
	}

	pivot = arr[low];
	i = low + 1;
	j = high;

	while (i <= j)
	{
		while ((arr[i] <= pivot) && (i <= high))
		{
			i++;
			cmp_count++;
		}
		cmp_count++;
		while ((arr[j]) <= pivot && (i <= high))
		{
			j--;
			cmp_count++;
		}
		cmp_count++;
		if (i < j)
		{
			swap(i, j);
		}
	}
	if (low < j) {
		swap(low, j);
	}

	q_short(low, j - 1);
	q_short(j + 1, high);
}

void display() {

	cout << "\n----------------" << endl;
	cout << "sorted array" << endl;
	cout << "------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nnumber of comparasions: " << cmp_count << endl;
	cout << "number of data movements: " << mov_count << endl;
}

int main()
{
	char ch;
}