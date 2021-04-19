//


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g1;
	for (int i = 1; i <= 5; i++)
		g1.push_back(i);
	g1.insert(g1.begin(), 61);
	cout << "numbers in vector: ";
	for (int i = 0; i < g1.size(); i++)
		cout << g1[i] << "  ";
	cout << "\n\nNumbers in reverse:";
	for (int i = g1.size() - 1; i >= 0; i--)
		cout << g1[i] << "  ";
	cout << "\n\nEnd of Program\n\n";
	system("Pause");
	return 0;
}

