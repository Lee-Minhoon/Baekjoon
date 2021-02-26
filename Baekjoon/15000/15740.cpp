#include <iostream>
#include <vector>

bool sumFunc(std::vector<int>&, std::string&, std::string&);
bool minusFunc(std::vector<int>&, std::string&, std::string&);

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string str[2];
	std::vector<int> vec;
	std::cin >> str[0] >> str[1];
	int strlen_a = str[0].length();
	int strlen_b = str[1].length();
	int strlen = str[0].length() >= str[1].length() ? str[0].length() : str[1].length();
	bool check = false;

	if ((str[0][0] == '0' && str[1][0] == '0'))
	{
		std::cout << 0;
	}
	else if ((str[0][0] == '-' && str[1][0] == '-') || (str[0][0] != '-' && str[1][0] != '-'))
	{
		check = sumFunc(vec, str[0], str[1]);
	}
	else
	{
		int big = 0, a, b;
		if (str[0][0] == '-')
		{
			strlen_a--;
			a = 1;
			b = 0;
			
		}
		if (str[1][0] == '-')
		{
			strlen_b--;
			a = 0;
			b = 1;
		}
		if (strlen_a > strlen_b) big = 1;
		else if (strlen_b > strlen_a) big = 2;
		else
		{
			int index = 0;
			while (true)
			{
				if (index == strlen - 1) break;
				if (str[0][index + a] > str[1][index + b]) big = 1;
				else if (str[1][index + b] > str[0][index + a]) big = 2;
				if (big != 0) break;
				index++;
			}
		}

		if (big == 0) std::cout << 0;
		else if (big == 1) check = minusFunc(vec, str[0], str[1]);
		else check = minusFunc(vec, str[1], str[0]);
	}

	int vecsize = vec.size() - 1;
	bool zero = false;

	if (check) std::cout << '-';
	for (int i = vecsize; i >= 0; i--)
	{
		if (vec[i] != 0)
		{
			zero = true;
		}
		if (zero)
		{
			std::cout << vec[i];
		}
	}

	return 0;
}

bool sumFunc(std::vector<int>& vec, std::string& a, std::string& b)
{
	int strlen_a = a.length() - 1;
	int strlen_b = b.length() - 1;
	int strlen = a.length() >= b.length() ? a.length() : b.length();

	int temp_a;
	int temp_b;

	int plus;
	int next = 0;
	bool check = false;

	if (a[0] == '-' && b[0] == '-')
	{
		a[0] = '0';
		b[0] = '0';
		strlen--;
		check = true;
	}
	for (int i = 0; i < strlen; i++)
	{
		temp_a = i > strlen_a ? 0 : a[strlen_a - i] - '0';
		temp_b = i > strlen_b ? 0 : b[strlen_b - i] - '0';

		plus = (temp_a + temp_b + next) % 10;
		next = (temp_a + temp_b + next) / 10;

		vec.push_back(plus);
		if (i == strlen - 1 && next != 0) vec.push_back(next);
	}

	return check;
}

bool minusFunc(std::vector<int>& vec, std::string& a, std::string& b)
{
	int strlen_a = a.length() - 1;
	int strlen_b = b.length() - 1;
	int strlen = a.length() >= b.length() ? a.length() : b.length();

	int temp_a;
	int temp_b;

	int minus;

	bool check = false;

	if (a[0] == '-')
	{
		a[0] = '0';
		check = true;
		strlen--;
	}
	else
	{
		b[0] = '0';
		check = false;
	}
	for (int i = 0; i < strlen; i++)
	{
		temp_a = i > strlen_a ? 0 : a[strlen_a - i] - '0';
		temp_b = i > strlen_b ? 0 : b[strlen_b - i] - '0';

		minus = temp_a - temp_b;
		int temp = 1;
		if (minus < 0)
		{
			while (true)
			{
				if (a[strlen_a - i - temp] > 0)
				{
					a[strlen_a - i - temp]--;
					minus += 10;
					break;
				}
				else
				{
					a[strlen_a - i - temp] = 9;
					temp++;
				}
			}
		}

		vec.push_back(minus);
	}

	return check;
}