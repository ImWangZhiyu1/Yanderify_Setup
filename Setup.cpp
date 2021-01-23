#include <windows.h>
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

void Auto()
{
	cout << "--+--Setup--+--" << endl;
	system("pause");
	cout << "-----Start...<[1|3]>" << endl;
	Sleep(1);
	cout << "-----Copy Files...<[2|3]>" << endl;
	cout << "Copy [App]" << endl;
	system(" md %SystemDrive%\\Users\\%UserName%\\.torch\\models" );
	system("xcopy App\\Yanderify C:\\Yanderify\\ /s /e");
	system("xcopy App\\Start.lnk %SystemDrive%\\Users\\%UserName%\\Desktop\\ /s /e");
	system("xcopy App\\s3fd-619a316812.pth %SystemDrive%\\Users\\%UserName%\\.torch\\models /s /e");
	system("xcopy App\\2DFAN4-11f355bf06.pth.tar %SystemDrive%\\Users\\%UserName%\\.torch\\models /s /e");
	Sleep(1);
	cout << "-----Complete...<3|3>" << endl;
	Sleep(1);
	cout << "Complete!" << endl; 
}
void Uninst()
{
		cout << "--+--Uninst--+--" << endl;
	system("pause");
	cout << "-----Start...<[1|3]>" << endl;
	Sleep(1);
	cout << "-----Delete Files...<[2|3]>" << endl;
	cout << "Wait..." << endl;
	system("rd /s/q %SystemDrive%\\Users\\%UserName%\\.torch\\models" );
	system("rd /s/q C:\\Yanderify\\");
	system("rd /s/q  %SystemDrive%\\Users\\%UserName%\\Desktop\\Start.lnk");
	Sleep(1);
	cout << "-----Complete...<3|3>" << endl;
	Sleep(1);
	cout << "Complete!" << endl; 
}

int main()
{
	string CMD;
	cout << "|Welcome to Yanderify Setup|By WangZhiyu|imwangzhiyu@outlook.com|" << endl;
	system("pause");
	system("cls");
	cout << "--+--Whit can I do for you?--+--" << endl;
	cout << "Help:" << endl;
	cout << "A - Setup" << endl; 
	cout << "U - Uninst" << endl;
	cout << "S - CMD" << endl; 
	cout << "E - Exit" << endl;
	cout << endl;
	while(true)
	{
		cout << "$>";
		cin >> CMD;
		if (CMD != "A" && CMD != "U" && CMD != "S" && CMD != "E" )
		{
			cout << "Try Again" << endl;
		}
		if (CMD == "A")
		{
			Auto();
		}
		if (CMD == "U")
		{
			Uninst();
		}
		if (CMD == "S")
		{
			system("CMD");
		}
		if (CMD == "H")
		{
			//install_help();
		}
		if (CMD == "E")
		{
			exit(0);
		}
	}
	return 0;
}
