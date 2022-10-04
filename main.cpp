#include <iostream>
#include<cstdlib>
using namespace std;

int Test();


	// 숫자 비교
int NumCompare()
{
	while (true)
	{
		// 임의의 숫자를 지정 
		srand((unsigned int)time(NULL));
		// 컴퓨터의 숫자
		int Num_C = rand();
		// 유저의 숫자
		int Num_U = 0;
		cin >> Num_U;
		cout << "컴퓨터의 수 : " << Num_C << ", 유저의 수 : " << Num_U << endl;
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



	// 숫자야구
int Baseball()
{
		// 테스트
	// 3가지 수 맞추기(한자리)
	// 숫자,위치 = S, 숫자만 = B, X = Out
	// 임의의 숫자를 지정 

	// 1. 변수 지정
	int Num_C = 0;
	int Num_Cs[3] = { 0, };
	int Num_U = 0;
	int Num_Us[3] = { 0, };
	int Strike = 0;
	int Ball = 0;
	int Out = 0;
	srand((unsigned int)time(NULL));

	// 2. 컴퓨터의 숫자
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
	// 확인
	cout << "0배열 : " << Num_Cs[0] << endl;
	cout << "1배열 : " << Num_Cs[1] << endl;
	cout << "2배열 : " << Num_Cs[2] << endl;



	// 3. 유저의 숫자
	cout << "세자리 수 입력하세요" << endl;
	while (true)
	{
		cin >> Num_U;
		if (Num_U < 100 || Num_U > 999)
		{
			cout << "다시 입력하세요" << endl;
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
					cout << "i : " << i << ", j : " << j << ", 숫자 : " << Num_Us[i] << ", " << Num_Cs[j] << endl;
					Strike++;
				}
				else
				{
					cout << "Ball!" << endl;
					cout << "i : " << i << ", j : " << j << ", 숫자 : " << Num_Us[i] << ", " << Num_Cs[j] << endl;
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

	// 비교 간단 예시
	/*cout << "컴퓨터의 수 : " << Num_C << ", 유저의 수 : " << Num_U << endl;
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
		// 숫자 비교
	//NumCompare();
		// 야구게임
	Baseball();


	return 0;
}


