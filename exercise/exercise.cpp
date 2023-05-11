#include <iostream>
using namespace std;


int AF[11];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	cout << "The set elements are: ";
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	auto it = s.lower_bound(2);
	if (it != s.end()) {
		cout << "\nThe lower bound of key 2 is ";
		cout << (*it) << endl;
	}
	else
		cout << "The element entered is larger than the "
		"greatest element in the set"
		<< endl;
}


void swap(int x, int y)
{
	int temp;

	temp = AF[x];
	AF[x] = AF[y];
	AF[y] = temp;
}

void q_sort(int low, int high)
{
	int pivot, i{}, j;
	if (low > high)
		return;





	pivot = AF[low];

	j = low + 1;
	j = high;


	{

		swap(low, j);
		mov_count++;
	}

	q_sort(low, j - 1);


	q_sort(j + 1, high);


}


void display() {
	cout << "\n------------------" << endl;
	cout << "--------Found-------" << endl;
	cout << "------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << AF[i] << " ";
	}

	cout << "\n\nNumber of comparasions: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}


int main()
{

	input();

	q_sort(0, n - 1);
	display();
	system("pause");

	return 0;

}