

#include <iostream>

using namespace std;

int main()
{
	int n =6;

	for (int l = 1; l <= n; l++)
	{

		
		for (int l = 1; l <= n; l++)
		{

			cout << l << " ";
		}

		cout << endl;
	}

	cout << endl << endl;

	for
		(int l = 1; l <= n; l++)
	{


		for (int j = n; j >= 1; j--)
		{
			cout << j << " ";
		}
		cout << endl;

	}


	cout << endl << endl;

	int m=1;
	for 
		(int l=1;l<= n;l++)
	{
		for
			(int j = 1; j <= n; j++)
		{
			cout << m << " ";
			m++;
		}
		cout << endl;
	}
	cout << endl << endl;


	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << l * j << " ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << l << " " << j << " ";

		}
		cout << endl;
	}
	cout << endl << endl;


	int t = n;
	for (int l = 1; l <= n; l++)
	{
		int to = t;
		for (int j = n; j >= 1; j--)
		{

			cout << to << " ";
			to += n;
		}
		t--;
		cout << endl;
	}
	cout << endl << endl;




	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((l + j) % 2 == 0)
			{
				cout << 0 << " ";
			}
			else
				cout << 1 << " ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int l = 65; l <= 64 + n;l++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << (char)l << " ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int l = 1; l <= n;l++)
	{
		for (int j = 1; j <=l; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl << endl;



	for (int l = 1; l <= n;l++)
	{
		for (int j = 1; j <=l; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int l = 1;l<= n; l++)
	{
		for (int j = 1; j <=l; j++)
		{
			cout << j * l << " ";
		}
		cout << endl;
	}
	cout << endl << endl;





	for (int l = 64 + n; l >= 65; l--)
	{
		for (int j = l; j >= 65; j--)
		{
			cout << (char)j << " ";
		}
		cout << endl;
	}
	cout << endl << endl;





	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j >= l)
			{
				cout << "* ";
			}
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j >= l)
			{
				cout << j << " ";
			}
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl << endl;



	for (int l = 1;l<= n; l++)
	{
		for (int j = 1; j <= n - l; j++)
		{
			cout << " ";
		}
		for (int v = 1; v <= l; v++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	cout << endl << endl;





	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= n - l; j++)
		{
			cout << " ";
		}
		for (int v = 1; v <= l; v++)
		{
			cout << l << " ";
		}
		cout << endl;
	}
	cout << endl << endl;



	for (int l = 1; l <= n; l++)
	{
		for (int j = 1; j <= l; j++)
		{
			cout << " ";
		}
		for (int v = 1; v <= n - l + 1; v++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
}
