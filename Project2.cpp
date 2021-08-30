#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n = 10;
	
	vector<vector<int> > a(n, vector<int>(n));
	

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i][j] = (i+1) * (j+1);
		}
	}

	for (int i = 0; i < n; ++i)
	{   
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
		
	}

}

