#include<iostream>

#include<string>

using namespace std;


/*
void main()
{
	string yhm;
	string mm1;
	string mm2;
	do
	{
		cout<<"=======��ӭע��=======\n"<<"�������û���:";
		cin>>yhm;
		cout<<"���������룺";
		cin>>mm1;
		cout<<"���ٴ��������룺";
		cin>>mm2;
		if(yhm.length()>=3&&mm1.length()>=6)
		{
			if(mm1==mm2)
			{
				cout<<"ע��ɹ������ס�û��������룡"<<endl;
				break;
			}
			else
			{
				cout<<"������������벻һ�£�"<<endl;
			}
		}else
		{
			cout<<"�û������Ȳ���С��3�����볤�Ȳ���С��6"<<endl;
		}
	}while(true);




	system("pause");
}*/


/*
class Register 
{
public:
	string name;
	string pwd1;
	string pwd2;
	bool verify(string name,string  pwd1,string pwd2)
	{
			bool bl=false;
			if(name.length()>=3&&pwd1.length()>=6)
			{
				if(pwd1==pwd2)
				{
					bl=true;
					cout<<"ע��ɹ������ס�û��������룡\n\n"<<endl;
					
				}
				else
				{
					cout<<"������������벻һ�£�\n\n"<<endl;
				}
			}else
			{
				cout<<"�û������Ȳ���С��3�����볤�Ȳ���С��6\n\n"<<endl;
			}
			return bl;
	}

};

	void main()
{
	Register zhuce;
	string names,pwd1s,pwd2s;
	
	do
	{
		cout<<"=======��ӭע��=======\n"<<"�������û���:";
			cin>>names;
			cout<<"���������룺";
			cin>>pwd1s;
			cout<<"���ٴ��������룺";
			cin>>pwd2s;
			if(zhuce.verify( names, pwd1s,pwd2s))
			{
				break;
			}

	}while(true);
	system("pause");
}*/


/*
void main()
{
	string a="sfwfe";
	string b="eioijrj";
	string c=a+b;
	cout<<c<<endl;


	system("pause");
}
*/


class zhuce
{
public:
	string sfz;
	string sjh;
	string email;
	void huiyuan()
	{
		do
		{
			cout<<"=======��ӭע��=======\n"<<"���������֤:";
			cin>>sfz;
			cout<<"�������ֻ��ţ�";
			cin>>sjh;
			cout<<"���������䣺";
			cin>>email;
			if(sfz.length()==18)
			{
				if(sjh.length()==11)
				{
					if(email.find('@') !=- 1 && email.find('.')  >  email.find('@'))
					{
						cout<<"ע��ɹ���"<<endl;
						break;
					}else
					{
						cout<<"�����ַ����ȷ��"<<endl;
					}
				}
				else
				{
					cout<<"�ֻ��ű�����11λ��"<<endl;
				}
			}else
			{
				cout<<"���֤���������18λ"<<endl;
			}
		}while(true);
	}

};

void main()
{

	zhuce shenji;
	shenji.sfz;
	shenji.sjh;
	shenji.email;
	shenji.huiyuan();


	system("pause");
}