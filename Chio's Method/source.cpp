#include<iostream>

using namespace std;


int **matrisOlustur(int boyut)
{
	// heap bellek b�lgesinde istenilen miktarda satir olusturuldu.
	int **matris = new int*[boyut];

	// bellek b�lgesindeki pointer dizinin her bir indexsine boyut b�y�kl���nde bir dizi atand�(s�t�nlar olusturuldu)
	for (int i = 0; i < boyut; i++)
	{
		matris[i] = new int[boyut];
	}

	cout << "lutfen matrisi olusturunuz." << endl;

	for (int i = 0; i < boyut; i++)
	{
		for (int j = 0; j < boyut; j++)
		{
			cout << i + 1 << ".satir " << j + 1 << ".sutun:";
			cin >> matris[i][j];
		}
	}
	cout << endl << endl;
	for (int i = 0; i < boyut; i++)
	{
		for (int j = 0; j < boyut; j++)
		{
			cout << matris[i][j];
		}
		cout << endl;
	}
	return matris;
}

void chioMethod(int **matris , int boyut)
{

	// indirgenmi� matris i�in bellekte yer ayr�l�yor.
	int **sonMatris = new int*[boyut - 1];
	for (int i = 0; i < boyut - 1 ; i++)
	{
		sonMatris[i] = new int[boyut - 1];
	}


	int a = 0;
	for (int i = 0; i < boyut; i++)
	{
		int b = 0;
		for (int j = 0; j < boyut; j++)
		{
			sonMatris[a][b] = matris[i][j];
		}
	}







}







int main()
{

	// pointer ile n x n lik bir dizi olu�turmak

	int boyut;
	cout << "kaclik bir kare matris olusturmak istersiniz :";
	cin >> boyut;


	matrisOlustur(boyut);




	system("PAUSE");
	return 0;
}