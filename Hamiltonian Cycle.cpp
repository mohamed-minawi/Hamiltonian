#include <iostream>
#include <vector>
#include <string>

using namespace std;

int count = 0;
vector <string> permutate(string x)
{
	vector<string> perm;
	if (x.length() == 1)
	{
		perm.push_back(x);
		return perm;
	}
	else
	{
		for (int i = 0; i < x.length(); i++)
		{
			string rest = x;
			rest = rest.erase(i, 1);

			vector <string> permtemp = permutate(rest);
			
			for (int j=0 ; j < permtemp.size(); j++)
				perm.push_back(x[i] + permtemp[j]);
		}
		return perm;
	}

	
}

int main()
{
	int  size;
	string arrayx ="";
	vector <string> stringvec;

	cout << "Please enter size: ";
	cin >> size;

	for (int i = 0; i < size; i++)
		arrayx += to_string(i + 1);

	stringvec = permutate(arrayx);
	for (int i = 0; i < stringvec.size(); i++)
		cout << stringvec[i] << stringvec[i][0] <<endl;

	system("pause");
	return 0;
}

