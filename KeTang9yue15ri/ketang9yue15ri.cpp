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
		cout<<"=======欢迎注册=======\n"<<"请输入用户名:";
		cin>>yhm;
		cout<<"请输入密码：";
		cin>>mm1;
		cout<<"请再次输入密码：";
		cin>>mm2;
		if(yhm.length()>=3&&mm1.length()>=6)
		{
			if(mm1==mm2)
			{
				cout<<"注册成功！请记住用户名和密码！"<<endl;
				break;
			}
			else
			{
				cout<<"两次输入的密码不一致！"<<endl;
			}
		}else
		{
			cout<<"用户名长度不能小于3，密码长度不能小于6"<<endl;
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
					cout<<"注册成功！请记住用户名和密码！\n\n"<<endl;
					
				}
				else
				{
					cout<<"两次输入的密码不一致！\n\n"<<endl;
				}
			}else
			{
				cout<<"用户名长度不能小于3，密码长度不能小于6\n\n"<<endl;
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
		cout<<"=======欢迎注册=======\n"<<"请输入用户名:";
			cin>>names;
			cout<<"请输入密码：";
			cin>>pwd1s;
			cout<<"请再次输入密码：";
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
			cout<<"=======欢迎注册=======\n"<<"请输入身份证:";
			cin>>sfz;
			cout<<"请输入手机号：";
			cin>>sjh;
			cout<<"请输入邮箱：";
			cin>>email;
			if(sfz.length()==18)
			{
				if(sjh.length()==11)
				{
					if(email.find('@') !=- 1 && email.find('.')  >  email.find('@'))
					{
						cout<<"注册成功！"<<endl;
						break;
					}else
					{
						cout<<"邮箱地址不正确！"<<endl;
					}
				}
				else
				{
					cout<<"手机号必须是11位！"<<endl;
				}
			}else
			{
				cout<<"身份证号码必须是18位"<<endl;
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