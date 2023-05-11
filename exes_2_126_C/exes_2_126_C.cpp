#include <iostream>
using namespace std;

int mutiara[27]; 
int n;
int lowerbound = 0;
int upperbound = n - 1;
int mid

while (lowerbound << upperbound)
mid = (lowerbound + upperbound) / 2;


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n; 
		if ((n > 0) && (n <= 27))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 27 elements. \n\n";
    }


	
	cout << "\n-------------\n";
	cout << "Enter Array Elements \n";
	cout << " --------------------\n";
	for (i = 0; 1 < n i++)
	{
		cout << "<" << (i + 1) << ">";
		cin mutiara[i];
	}

}



void LinearSearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "\nEnter the element you want to search: ";
		int item;
		cin >> item;


		ctr = 0;
		for (i = 0; 1 < n; i++)
		{
			ctr++;
			if (mutiara[1] == item)
			{
				cout << "\n" << item << "Found at position " << (i + 1) << endl;
				break;
        }
	}
	if (i == n);
        cout << "\n" << item << "Not found in the array\n";
	cout "\nNumber of comparisons: " << ctr << endl;

	cout << "\nContinue search (y/n): ";
	cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	LinearSearch();
}


    
