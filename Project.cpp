#include<iostream>
#include<unistd.h>
#include<fstream>
using namespace std;
#include<string>
#include<windows.h>
class Login
{
	protected:
		string username;
		string password;
		public:
			void virtual login()=0;
};
class Admin: public Login
{
	string adminname;
	public:
		void login()
		{
			int o,t,p;
			cout<<"USERNAME: "<<" ";
			cin>>adminname;
			cout<<"\nPASSWORD: "<<" ";
			cin>>password;
			cout<<"\nEnter Captcha"<<endl;
 			cout<<"Enter Odd Digits Divisible By 7"<<endl;
 			cout<<"21 25 97"<<endl;
 			cout<<"35 87 22"<<endl;
 			cout<<"58 49 30"<<endl;
 			cin>>o>>t>>p;
 			if(o==21&&t==35&&p==49)
 			{
				if(adminname=="Admin" && password=="FAST123")
				{
				cout<<"\nLOGIN SUCCESSFUL!"<<endl;
				}
				else
				{
					cout<<"Sorry! Incorrect password or username";
					login();
				}
			}
	}
};
class User: public Login
{
	public:
		void login()
		{
			cout<<"USERNAME: "<<" ";
			cin>>username;
			cout<<"\nPASSWORD: "<<" ";
			cin>>password;
			if(username=="User" && password=="Fast123")
			{
				cout<<"\nLOGIN SUCCESSFUL!"<<endl;
			}
			else
			{
				cout<<"Sorry! Incorrect password or username";
				login();
			}
		}
};
class Physical
{
	protected:
		string first_name;
		string last_name;
		const string NIC;
		int Age;
		public:
			Physical()
			{
				first_name="";
				last_name="";
				Age=0;
			}
			Physical(string f, string l, string N, int a ):NIC(N)
			{
				first_name=f;
				last_name=l;
				Age=a;	
			}
			void setfirst_name(string f)
			{
				first_name=f;
			}
			void setlast_name(string l)
			{
				last_name=l;
			}
			void setage(int a)
			{
				Age=a;
			}
			string getfirst_name()
			{
				return first_name;
			}
			string getlast_name()
			{
				return last_name;
			}
			int getage()
			{
				return Age;
			}
			string getNIC()
			{
				return NIC;
			}
			void Output()
			{
				cout<<"FIRST NAME: "<<getfirst_name()<<endl;
				cout<<"LAST NAME: "<<getlast_name()<<endl;
				cout<<"AGE: "<<getage()<<endl;
				cout<<"NIC: "<<getNIC()<<endl;
			}
			
};
class Blind: public Physical
{
	bool hear;
	static int no_of_blind;
	public:
		Blind():Physical()
		{
			hear=1;
			no_of_blind++;
		}
		Blind(string f, string l, string N, int a ,bool h):Physical(f,l,N,a)
		{
			hear=h;
			no_of_blind++;
		}
		Blind(Blind &b)
		{
			b.first_name=first_name;
			b.last_name=last_name;
			b.Age=Age;
			b.hear=hear;
		}
		void Output()
			{
				cout<<"FIRST NAME: "<<getfirst_name()<<endl;
				cout<<"LAST NAME: "<<getlast_name()<<endl;
				cout<<"AGE: "<<getage()<<endl;
				cout<<"NIC: "<<getNIC()<<endl;
				cout<<"HEAR(Yes/No): "<<hear<<endl;
			}
			void filewrite(Physical P)
			{
				ofstream fout;
				fout.open("Blind.txt", ios::app);
				fout.write((char*)&P,sizeof(P));
				fout.close();	
			}	
			void sound_keyboard()
			{
				char a;
				std::string phrase25="Press the keyboard letter keys and hear their sound to get the alphabet";
				std::string command25="espeak \""+phrase25+"\"";
				const char* charCommand25=command25.c_str();
				system(charCommand25);
				for(int i=0;i<3;i++)
				{
					cin>>a;
					if(a>96 && a<123)
					{
						switch(a)
					{
						case 'a':
							cout<<"\a\a\a\a\a";
							break;
						case 'b':
							cout<<"\a\a\a\a";
							sleep(2);
							break;
						case 'c':
							cout<<"\a\a\a";
							sleep(2);
							cout<<"\a";
							break;		
						case 'd':
							cout<<"\a\a\a";
							break;
						case 'e':
							cout<<"\a\a";
							sleep(2);
							cout<<"\a\a";
							break;
						case 'f':
							cout<<"\a\a";
							sleep(2);
							cout<<"\a";
							break;
						case 'g':
							cout<<"\a\a";
							sleep(4);
							cout<<"\a";
							break;
						case 'h':
							cout<<"\a\a";
							break;
						case 'i':
							cout<<"\a";
							sleep(2);
							cout<<"\a\a\a";
							break;
						case 'j':
							cout<<"\a";
							sleep(2);
							cout<<"\a\a";
							break;
						case 'k':
							cout<<"\a";
							sleep(2);
							cout<<"\a";
							sleep(2);
							cout<<"\a";
							sleep(2);
							break;
						case 'l':
							cout<<"\a";
							sleep(2);
							cout<<"\a";
							sleep(3);
							break;
						case 'm':
							cout<<"\a";
							sleep(4);
							cout<<"\a\a";
							break;
						case 'n':
							cout<<"\a";
							sleep(4);
							cout<<"\a";
							break;
						case 'o':
							cout<<"\a";
							sleep(4);
							cout<<"\a";
							break;
						case 'p':
							cout<<"\a";
							break;
						case 'q':
							cout<<"\a\a\a\a";
							break;
						case 'r':
							cout<<"\a\a\a";
							break;
						case 's':
							cout<<"\a\a";
							sleep(2);
							cout<<"\a";
							break;
						case 't':
							cout<<"\a\a";
							break;
						case 'u':
							cout<<"\a";
							sleep(2);
							cout<<"\a\a";
							break;
						case 'v':
							cout<<"\a";
							sleep(2);
							cout<<"\a";
							break;
						case 'w':
							cout<<"\a";
							sleep(4);
							cout<<"\a";
							break;
						case 'x':
							cout<<"\a";
							break;
						case 'y':
							cout<<"\a\a";
							break;
						case 'z':
							cout<<"\a";
							break;
						default:
							std::string phrase26="Choose your choice! Press alphabet keys only.";
							std::string command26="espeak \""+phrase26+"\"";
							const char* charCommand26=command26.c_str();
							system(charCommand26);																							
					}	
					}
					else cout<<"Input valid value!"<<endl;		
				}
			}
};
int Blind::no_of_blind=0;
class Deaf:public Physical
{
	bool device;
	static int no_of_deaf;
	public:
		Deaf():Physical()
		{
			device=0;
			no_of_deaf++;
		}
		Deaf(string f, string l, string N, int a ,bool d):Physical(f,l,N,a)
		{
			device=d;
			no_of_deaf++;
		}
		Deaf(Deaf &d)
		{
			d.first_name=first_name;
			d.last_name=last_name;
			d.Age=Age;
			d.device=device;
		}
		void Output()
			{
				cout<<"FIRST NAME: "<<getfirst_name()<<endl;
				cout<<"LAST NAME: "<<getlast_name()<<endl;
				cout<<"AGE: "<<getage()<<endl;
				cout<<"NIC: "<<getNIC()<<endl;
				cout<<"DEVICE(Yes/No): "<<device<<endl;
			}
		void filewrite(Physical P)
			{
				ofstream fout;
				fout.open("Deaf.txt", ios::app);
				fout.write((char*)&P,sizeof(P));
				fout.close();	
			}	
};
int Deaf::no_of_deaf=0;
class Dumb: public Physical
{
	bool write;
	static int no_of_dumb;
	public:
		Dumb():Physical()
		{
			write=1;
			no_of_dumb++;
		}
		Dumb(string f, string l, string N, int a ,bool w):Physical(f,l,N,a)
		{
			write=w;
			no_of_dumb++;
		}
		Dumb(Dumb &d)
		{
			d.first_name=first_name;
			d.last_name=last_name;
			d.Age=Age;
			d.write=write;
		}
		void Output()
			{
				cout<<"FIRST NAME: "<<getfirst_name()<<endl;
				cout<<"LAST NAME: "<<getlast_name()<<endl;
				cout<<"AGE: "<<getage()<<endl;
				cout<<"NIC: "<<getNIC()<<endl;
				cout<<"WRITE(YES/NO): "<<write<<endl;
			}
		void filewrite(Physical P)
			{
				ofstream fout;
				fout.open("Dumb.txt", ios::app);
				fout.write((char*)&P,sizeof(P));
				fout.close();	
			}	
};
int Dumb::no_of_dumb=0;
template<class T>
void TextToSpeech(T a)
{
	cout<<"BLIND PERSON: "<<endl;
	int n;
	std::string phrase="Tell your original Location: Press 1 for Computer Science Building.  2 for EE building and 3 for New building";
	std::string command="espeak \""+phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
	cin>>n;
	if(n==1)
	{
		std::string phrase2="Where do you want to go? Press 1 for New building. 2 for EE building: ";
		std::string command2="espeak \""+phrase2+"\"";
		const char* charCommand2=command2.c_str();
		system(charCommand2);
		cin>>n;
		if(n==1)
		{
			std::string phrase3="Come to the Ground floor Exit Staircase to the right";
			std::string command3="espeak \""+phrase3+"\"";
			const char* charCommand3=command3.c_str();
			system(charCommand3);
			sleep(2);
			std::string phrase4="Move right 10 steps then turn left 10 steps";
			std::string command4="espeak \""+phrase4+"\"";
			const char* charCommand4=command4.c_str();
			system(charCommand4);
			sleep(2);
			std::string phrase5="You have arrived at the New Building";
			std::string command5="espeak \""+phrase5+"\"";
			const char* charCommand5=command5.c_str();
			system(charCommand5);
		}
		else if(n==2)
		{
			std::string phrase6="Come to the Ground floor Exit Staircase to the left";
			std::string command6="espeak \""+phrase6+"\"";
			const char* charCommand6=command6.c_str();
			system(charCommand6);
			sleep(2);
			std::string phrase7="Move straight 20 steps then turn left the fountain and again turn right with straight 10 steps";
			std::string command7="espeak \""+phrase7+"\"";
			const char* charCommand7=command7.c_str();
			system(charCommand7);
			sleep(2);
			std::string phrase8="You have arrived at the EE Building";
			std::string command8="espeak \""+phrase8+"\"";
			const char* charCommand8=command8.c_str();
			system(charCommand8);
		}
	}
	else if (n==2)
	{
		std::string phrase9="Where do you want to go? Press 1 for New building. 2 for CS building: ";
		std::string command9="espeak \""+phrase9+"\"";
		const char* charCommand9=command9.c_str();
		system(charCommand9);
		cin>>n;
		if(n==1)
		{
			std::string phrase10="Come to the Ground floor Exit gate at the center.";
			std::string command10="espeak \""+phrase10+"\"";
			const char* charCommand10=command10.c_str();
			system(charCommand10);
			sleep(2);
			std::string phrase11="Move straight 20 steps then turn left the fountain and take right and straight 10 steps. Then take the corridor of the CS building and move 50 steps straight and turn right 10 steps and turn left 10 steps";
			std::string command11="espeak \""+phrase11+"\"";
			const char* charCommand11=command11.c_str();
			system(charCommand11);
			sleep(2);
			std::string phrase12="You have arrived at the New Building";
			std::string command12="espeak \""+phrase12+"\"";
			const char* charCommand12=command12.c_str();
			system(charCommand12);
		}
		else if(n==2)
		{
			std::string phrase13="Come to the Ground floor Exit gate at the center";
			std::string command13="espeak \""+phrase13+"\"";
			const char* charCommand13=command13.c_str();
			system(charCommand13);
			sleep(2);
			std::string phrase14="Move straight 20 steps then turn left the fountain and again turn right with straight 10 steps";
			std::string command14="espeak \""+phrase14+"\"";
			const char* charCommand14=command14.c_str();
			system(charCommand14);
			sleep(2);
			std::string phrase15="You have arrived at the CS Building";
			std::string command15="espeak \""+phrase15+"\"";
			const char* charCommand15=command15.c_str();
			system(charCommand15);
		}
	}
	else if(n==3)
	{
		std::string phrase16="Where do you want to go? Press 1 for CS building. 2 for EE building: ";
		std::string command16="espeak \""+phrase16+"\"";
		const char* charCommand16=command16.c_str();
		system(charCommand16);
		cin>>n;
		if(n==1)
		{
			std::string phrase17="Come to the Exit Staircase";
			std::string command17="espeak \""+phrase17+"\"";
			const char* charCommand17=command17.c_str();
			system(charCommand17);
			sleep(2);
			std::string phrase18="Move right 10 steps then turn left 10 steps";
			std::string command18="espeak \""+phrase18+"\"";
			const char* charCommand18=command18.c_str();
			system(charCommand18);
			sleep(2);
			std::string phrase19="You have arrived at the CS Building";
			std::string command19="espeak \""+phrase19+"\"";
			const char* charCommand19=command19.c_str();
			system(charCommand19);
		}
		else if(n==2)
		{
			std::string phrase20="Come to the Exit Staircase";
			std::string command20="espeak \""+phrase20+"\"";
			const char* charCommand20=command20.c_str();
			system(charCommand20);
			sleep(2);
			std::string phrase21="Turn right ten steps then turn left ten steps. Pass the corridor of CS building with 50 steps straight then use the staircase to walk straight 20 steps, then turn right to the fountain and turn left with 10 steps straight walk";
			std::string command21="espeak \""+phrase21+"\"";
			const char* charCommand21=command21.c_str();
			system(charCommand21);
			sleep(2);
			std::string phrase22="You have arrived at the EE Building";
			std::string command22="espeak \""+phrase22+"\"";
			const char* charCommand22=command22.c_str();
			system(charCommand22);
		}
	}
}
int main()
{
	string f,l,nic;
	bool hear, write, device,age;
	cout<<"DETAILS OF THE BLIND PERSON: "<<endl;
	Blind B("Talha","Waheed", "42101-111",45,1);
	B.filewrite(B);
	B.Output();
	B.sound_keyboard();
	//TextToSpeech(B);
}
