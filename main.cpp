#include <iostream>
#include<cstdlib>
using namespace std;

int Test();


	// ���� ��
int NumCompare()
{
	while (true)
	{
		// ������ ���ڸ� ���� 
		srand((unsigned int)time(NULL));
		// ��ǻ���� ����
		int Num_C = rand();
		// ������ ����
		int Num_U = 0;
		cin >> Num_U;
		cout << "��ǻ���� �� : " << Num_C << ", ������ �� : " << Num_U << endl;
		if (Num_U > Num_C)
		{
			cout << "High" << endl;
		}
		else if (Num_U < Num_C)
		{
			cout << "Low" << endl;
		}
		else if (Num_U == Num_C)
		{
			cout << "Correct" << endl;
			break;
		}
	}
	return 0;
}



	// ���ھ߱�
int Baseball()
{
		// �׽�Ʈ
	// 3���� �� ���߱�(���ڸ�)
	// ����,��ġ = S, ���ڸ� = B, X = Out
	// ������ ���ڸ� ���� 

	// 1. ���� ����
	int Num_C = 0;
	int Num_Cs[3] = { 0, };
	int Num_U = 0;
	int Num_Us[3] = { 0, };
	int Strike = 0;
	int Ball = 0;
	int Out = 0;
	srand((unsigned int)time(NULL));

	// 2. ��ǻ���� ����
	while (true)
	{
		Num_C = rand() % 1000 + 1;
		if (Num_C < 100)
		{
			continue;
		}
		else
		{
			Num_Cs[0] = Num_C / 100;
			Num_C = Num_C - (Num_C / 100 * 100);
			Num_Cs[1] = Num_C / 10;
			Num_C = Num_C - (Num_C / 10 * 10);
			Num_Cs[2] = Num_C;
			break;
		}
	}
	// Ȯ��
	cout << "0�迭 : " << Num_Cs[0] << endl;
	cout << "1�迭 : " << Num_Cs[1] << endl;
	cout << "2�迭 : " << Num_Cs[2] << endl;



	// 3. ������ ����
	cout << "���ڸ� �� �Է��ϼ���" << endl;
	while (true)
	{
		cin >> Num_U;
		if (Num_U < 100 || Num_U > 999)
		{
			cout << "�ٽ� �Է��ϼ���" << endl;
		}
		else
		{
			Num_Us[0] = Num_U / 100;
			Num_U = Num_U - (Num_U / 100 * 100);
			Num_Us[1] = Num_U / 10;
			Num_U = Num_U - (Num_U / 10 * 10);
			Num_Us[2] = Num_U;
			break;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Num_Us[i] == Num_Cs[j])
			{
				if (i == j)
				{
					cout << "Strike!" << endl;
					cout << "i : " << i << ", j : " << j << ", ���� : " << Num_Us[i] << ", " << Num_Cs[j] << endl;
					Strike++;
				}
				else
				{
					cout << "Ball!" << endl;
					cout << "i : " << i << ", j : " << j << ", ���� : " << Num_Us[i] << ", " << Num_Cs[j] << endl;
					Ball++;
				}
			}
		}
		if (Strike == 0 && Ball == 0)
		{
			cout << "Out!" << endl;
			Out++;
		}
	}

	// �� ���� ����
	/*cout << "��ǻ���� �� : " << Num_C << ", ������ �� : " << Num_U << endl;
	if (Num_U > Num_C)
	{
		cout << "High" << endl;
	}
	else if (Num_U < Num_C)
	{
		cout << "Low" << endl;
	}
	else if (Num_U == Num_C)
	{
		cout << "Correct" << endl;
	}*/

	return 0;
}



int main()
{
		// ���� ��
	//NumCompare();
		// �߱�����
	Baseball();


	return 0;
}


