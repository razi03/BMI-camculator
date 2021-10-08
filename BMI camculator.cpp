#include <iostream>
using namespace std;
int main()
{
	float age;
	float height;
	float weight;
	cout << "Enter your age: \n";
	cin >> age;
	cout << "Enter your height: \n";
	cin >> height;
	cout << "Enter your weight: \n";
	cin >> weight;
	float BMI = 703 * ((weight) / (height * height));
	if (BMI<=18.5)
	{
		cout << "You are thin!";
		return 0;
	}
	else
	{
		if (BMI<=24.9)
		{
			cout << "You are healthy!";
			return 0;
		}
		else
		{
			if (BMI>=29.9)
			{
				cout << "You are overweight!";
				return 0;

			}
			else
			{
				if (BMI>=30)
				{
					cout << "You are obese!";
					return 0;
				}
			}
		}
	}
}