#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <windows.h>
#include<dos.h>
#include<stdbool.h>
#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<ctype.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define ESC_KEY 27
int height=5,width=6;
using namespace std;

class hellow
{
private: char sub2;
            int pos,i2,f2;
public:

             void helloww(string a)
             {
                char sub2[10000]="hellow";
    transform(a.begin(), a.end(), a.begin(), ::tolower);
                int pos,i2,f2=0;
           for(int i2=1;(pos=a.find(sub2)) != -1 ;i2++)
        {
                a=a.substr(++pos);
                f2++;
        }
		if(f2==1 ||  f2>1)
		{
		cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
		system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM MACK . I  AM  YOUR  VIRTUAL  ASISTANT.I AM UPDATED VERSION OF JACK.\n\nI AM TOTALLY RUN BY OBJECT CREATION.MY CODE IS DESIGNED BY OOP..."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
		}
		}

		 void digitalphabatespacereverse(string a)
        {
char kutta[1100]="digit";
int suyar,chagol=0;
for(int i=1;(suyar=a.find(kutta))!=-1;i++)
{
    a=a.substr(++suyar);
    chagol++;
}
if(chagol>0)
{
    system("cls");
    cout<<"\n\nreading...\n\n";
    Sleep(3000);
    system("cls");
   string str;
   int digitCounter = 0;
   cout << "\nEnter any string: ";
   getline(cin, str);
   cout<<"\n\nDigits are\n**********************************************************************************\n\n";
  for(int i = 0; str[i]!='\0'; i++)
    {
     if(isdigit(str[i])!=0)
      {
        digitCounter++;
        cout<<str[i];
        cout<<"\n";
     }
  }
  cout<<"\n**********************************************************************************";
  cout<<endl;
  cout << "\n\nDigits in String: " << digitCounter << endl<<"\n\n\n\n";
  system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";



}





char kutta1[1100]="alphabet";
int suyar1,chagol1=0;
for(int i=1;(suyar1=a.find(kutta1))!=-1;i++)
{
    a=a.substr(++suyar1);
    chagol1++;
}
if(chagol1>0)
{
    system("cls");
    cout<<"\n\nreading...\n\n";
    Sleep(3000);
    system("cls");
   string str1;
   int alphaCounter = 0;
   cout << "\nEnter any string: ";
   getline(cin, str1);
   cout<<"\n\n";
   cout<<"Alphabets are\n**********************************************************************************";
   cout<<"\n\n";
  for(int i = 0; str1[i]!='\0'; i++)
    {
     if(isalpha(str1[i])!=0)
      {
        alphaCounter++;
        cout<<str1[i];
        cout<<"\n";
     }
  }
  cout<<"\n**********************************************************************************";
  cout<<endl;
  cout << "\n\nAlphabets in String: " << alphaCounter << endl<<"\n\n\n\n";
  system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char kutta2[5000]="space";
int suyar2,chagol2=0;
for(int i=1;(suyar2=a.find(kutta2))!=-1;i++)
{
    a=a.substr(++suyar2);
    chagol2++;
}
if(chagol2>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    string str3;
    int spacecount=0;
    cout<<"enter the paragraph  :";
    getline(cin,str3);
    for(int y=0;str3[y]!='\0';y++)
    {
        if(isspace(str3[y])!=0)
        {
            spacecount++;
        }
    }
    cout<<"\n\n\n";
    cout<<"Result ->  "<<spacecount<<"  spaces are present in your paragraph\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char kutta3[5000]="reverse";
int suyar3,chagol3=0;
for(int i=1;(suyar3=a.find(kutta3))!=-1;i++)
{
    a=a.substr(++suyar3);
    chagol3++;
}
if(chagol3>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    cout<<"\n\nsay again apply for string or number\n*********************************************";
    string str4;
    cout<<"\n\n\n\n\n\n\nenter the choice :";
    getline(cin,str4);
    char d[100]="string";
    int suyarer,chagoler=0;
    for(int r=1;(suyarer=str4.find(d))!=-1;r++)
  {
    str4=str4.substr(++suyarer);
    chagoler++;
  }
  char f[100]="number";
    int suyareer,chagoleer=0;
    for(int r=1;(suyareer=str4.find(f))!=-1;r++)
  {
    str4=str4.substr(++suyareer);
    chagoleer++;
  }
  if(chagoler>0)
  {
      char s[1000];
      system("cls");
      cout<<"enter your string for reverse :";
      cin>>s;
      cout<<"\n\nReverse String :  "<<strrev(s);
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }

  if(chagoleer>0)
  {
      int s,rem=0,rev=0;
      system("cls");
      cout<<"enter your number for reverse :";
      cin>>s;
   while(s!=0)
      {
          rem=s%10;
          rev=(rev*10)+rem;
          s=s/10;
      }
         cout<<"\n\nReverse number :  "<<rev;
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }
}
        }

        void alphanumericpalindrome(string a)
        {
             char kutta8[5000]="alphanumeric";
int suyar8,chagol8=0;
for(int i=1;(suyar8=a.find(kutta8))!=-1;i++)
{
    a=a.substr(++suyar8);
    chagol8++;
}
if(chagol8>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK ALPHANUMERIC CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(isalnum(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" ALPHANUMERIC characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(isalnum(ch)==0)
        {
             cout<<"\n\nIT IS NOT A ALPHANUMERIC CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A ALPHANUMERIC CHARACTER";
            }


            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    }



char kutta9[5000]="paline";
int suyar9,chagol9=0;
for(int i=1;(suyar9=a.find(kutta9))!=-1;i++)
{
    a=a.substr(++suyar9);
    chagol9++;
}
if(chagol9>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    cout<<"\n\nsay again apply for string or number\n*********************************************";
    string str4;
    cout<<"\n\n\n\n\n\n\nenter the choice :";
    getline(cin,str4);
    transform(str4.begin(),str4.end(),str4.begin(),  ::tolower);
    char d[100]="string";
    int suyarer,chagoler=0;
    for(int r=1;(suyarer=str4.find(d))!=-1;r++)
  {
    str4=str4.substr(++suyarer);
    chagoler++;
  }
  char f[100]="number";
    int suyareer,chagoleer=0;
    for(int r=1;(suyareer=str4.find(f))!=-1;r++)
  {
    str4=str4.substr(++suyareer);
    chagoleer++;
  }
  if(chagoler>0)
  {
      system("cls");
	char x[1000],y[1000];
int i,len,j,f=0;
cout<<"ENTER YOUR STRING FOR CHECKING :";
cin>>x;
len=strlen(x);
strcpy(y,x);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x[i]!=x[j])
	{
		f=1;
		break;
	}
}
cout<<"\n\n\nReverse String :"<<strrev(x);
if(f==0)
{
	cout<<"\n\n"<<y<<" is pallindrome string";
}
else
{
		cout<<"\n\n"<<y<<" is not pallindrome string";
}
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }

  if(chagoleer>0)
  {
      int s,rem=0,rev=0,j;
      system("cls");
      cout<<"enter your number for checking :";
      cin>>s;
      j=s;
   while(s!=0)
      {
          rem=s%10;
          rev=(rev*10)+rem;
          s=s/10;
      }
         cout<<"\n\nReverse number :  "<<rev;
        cout<<"\n\n";
        if(rev==j)
        {
            cout<<"IT IS PALINEDROME NUMBER";
        }
        else
            {
            cout<<"IT IS NOT A PALINEDROME NUMBER";
        }
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }
}

        }


};

class mack : public hellow
{
private: char sub3[10000];
             int pos2,i3,f3;
public:
        void MACK(string a)
        {

         char sub3[10000]="mack";
         transform(a.begin(),a.end(),a.begin(), :: tolower);
        int f3=0;
        for (int i3=1;(pos2=a.find(sub3)) != -1 ;i3++)
        {
                a=a.substr(++pos2);
                f3++;
        }
	  if(f3==1 || f3>1)
        {
        cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
            cout<<"hello sir ....\n\n\n";
            cout<<"what is your name sir???\n\n";
            string s;
            getline(cin,s);
            char w1[100]="BISWA";
            transform(s.begin(),s.end(),s.begin(), ::toupper);
            int pos9,f9=0;
          for(int i9=1;(pos9=s.find(w1))!=-1;i9++)
          {
              s=s.substr(++pos9);
              f9++;
          }

            if(f9==1 || f9>1)
            {
                system("cls");
                system("color d");
                cout<<"\n********HELLO  BOSS********\n\n";
                cout<<"\n many many thanks BOSS for creating me \n\n love you BOSS\n\n";
                cout<<"BOSS, please give me a order.....\n\n\n";
            }

            if(f9==0)
            {
                cout<<"\n\nhello sir.....\n\n";
                cout<<"how can I help you??\n\n\n";
            }
        }
        }
        void pmhobbybosecretdesktopshutdownresart(string a)
        {

char words8[1000]="prime minister";
int red8,blue8=0;
for(int t=1;(red8=a.find(words8))!=-1;t++)
{
    a=a.substr(++red8);
    blue8++;
}
if( blue8==1 || blue8>1 )
{
    cout<<"\n\nfinding...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n";
   cout<<"-------------------------------->    Narendra Modi";
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words9[1000]="hobbies";
int red9,blue9=0;
for(int t=1;(red9=a.find(words9))!=-1;t++)
{
    a=a.substr(++red9);
    blue9++;
}
if( blue9==1 || blue9>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"I am a computer program,I have no feeling\nI have no hobby.....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words10[1000]="hobby";
int red10,blue10=0;
for(int t=1;(red10=a.find(words10))!=-1;t++)
{
    a=a.substr(++red10);
    blue10++;
}
if( blue10==1 || blue10>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"I am a computer program(created by BISWA(my BOSS)),I have no feeling\nSo,I have no hobby.....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words11[1000]="boss";
int red11,blue11=0;
for(int t=1;(red11=a.find(words11))!=-1;t++)
{
    a=a.substr(++red11);
    blue11++;
}
if( blue11==1 || blue11>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"My boss name is Biswarup Bhattarcharjee...he is a student,\n";
   cout<<"he is recently passed out HS exam,\nhe will joined in UEM(University Engineering Management)\nhis favourite language is   C++ &  JAVA &  #C....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words12[1000]="secret";
int red12,blue12=0;
for(int t=1;(red12=a.find(words12))!=-1;t++)
{
    a=a.substr(++red12);
    blue12++;
}
if( blue12==1 || blue12>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"BISWA'S(my BOSS) GIRLFRIEND NAME IS ROMI";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}



char words152[1000]="pan";
char words1529[486]="update";
int red152,red1529,blue152=0;
for(int t=1;(red152=a.find(words152))!=-1 && (red1529=a.find(words1529))!=-1;t++)
{
    a=a.substr(++red152);
    blue152++;
}
if( blue152>0 )
{
system("cls");
ofstream file;
char fname[100],bname[1163],baddrs[1100],name[1010],panno[10110], accno[1100],mobno[10011],subject[16161];
int year;
cout<<"\n-------------------------------------------------------------------------------\n\n";
cout<<"\t\t   SUB::PANCARD UPDATE IN YOUR BANK ACCOUNT\n\n-------------------------------------------------------------------------------\n\nIt is design for     ---->    MicrosoftOffice-Word(.doc)    <----";
cout<<"\n\n-------------------------------------------------------------------------------\n\n\n";
cout<<"enter the file name ::  ";
cin>>fname;
system("cls");
cout<<"\n\n-------------------------------------------------------------------------------\n";
cout<<"It is design for     ---->    MicrosoftOffice-Word    <----";
cout<<"\n\n-------------------------------------------------------------------------------\n\n";
cout<<"\n\nenter your bank  name  (without space) ::  ";
cin>>bname;
cout<<"\nenter your bank  address  (without space) ::  ";
cin>>baddrs;
cout<<"\nenter your subject  (without space, use '_' for gapping) ::  ";
cin>>subject;
cout<<"\nenter your name  (without space, use '-' for gapping)  ::  ";
cin>>name;
cout<<"\nenter your account number  (without space) ::  ";
cin>>accno;
cout<<"\nenter your PAN number  (without space)  ::  ";
cin>>panno;
cout<<"\nenter your mobile number  (without space) ::  ";
cin>>mobno;
cout<<"how many years you have a account in this bank "<<bname<<" ::  ";
cin>>year;
file.open(fname);
if(file.is_open())
{
file<<"To\nThe Branch Manager\n";
file<<bname;
file<<"\n\n";
file<<baddrs;
file<<"\n\nsub :  ";
file<<subject;
file<<"\n\nsir,\n\tMy name is  ";
file<<name;
file<<".I have a saving account at your branch with an account of  ";
file<<accno;
file<<" .I am using this account since "<<year<<" years.I want to update my PAN card number.So kindly update my  PAN card number ";
file<<panno;
file<<".I will be thankful to you.";
file<<"\n\n\n\t\t\t\t\t\t\t\t\tyour faithfully\n\t\t\t\t\t\t\t\t";
file<<name;
file<<"\n\t\t\t\t\t\t\t\tA/c No:-";
file<<accno;
file<<"\n\t\t\t\t\t\t\t\tMobile No:-";
file<<mobno;
}
cout<<"\n\ncreate your file....\n\n\n\n\n\n\n\n\n";
Sleep(2000);
file.close();
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words125[1000]="depress";
int red125,blue125=0;
for(int t=1;(red125=a.find(words125))!=-1;t++)
{
    a=a.substr(++red125);
    blue125++;
}
if( blue125==1 || blue125>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    system("cls");
   cout<<"\n\n\n";
   cout<<"kon bola , kon bola, mujhse na hopayega \n\n uth ja apna  rakh se  \n\n  uth ja ab taalash  main \n\n parwaaz  dekh parwane ki \n\nasshman  bhi  sar uthayga \n\n  ayeega  apna time ayeega \n\n mere jaisa sana lala tujhe na mil payega \n\n yeh  sabdooh  ka jala meri  beria philayega \n\n jinta  tune  boya hain to utna  hi to khayega \n\n aisa  mera  khawab  hai jo dar ko bhi satyega \n\n zinda mera khawab  ab kaise tu dafnayega\n\n ab hausle se jeene de \n\n ab kaulf nahi hain seene main\n\nhar raste  ko  chirenge har kamiyabi chinenggee \n\n sab kuch mila  pasinese matlab ab jeene main\n\nkiu?\nkiu ki, APNA TIME AYYEEGA \nTU NANGA HI TO  AYA  HAIN KIYA GHANTA LE KAR  JAI GA ";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words1258[1000]="flashtration";
int red1258,blue1258=0;
for(int t=1;(red1258=a.find(words1258))!=-1;t++)
{
    a=a.substr(++red1258);
    blue125++;
}
if( blue125==1 || blue125>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    system("cls");
   cout<<"\n\n\n";
   cout<<"kon bola , kon bola, mujhse na hopayega \n\n uth ja apna  rakh se  \n\n  uth ja ab taalash  main \n\n parwaaz  dekh parwane ki \n\nasshman  bhi  sar uthayga \n\n  ayeega  apna time ayeega \n\n mere jaisa sana lala tujhe na mil payega \n\n yeh  sabdooh  ka jala meri  beria philayega \n\n jinta  tune  boya hain to utna  hi to khayega \n\n aisa  mera  khawab  hai jo dar ko bhi satyega \n\n zinda mera khawab  ab kaise tu dafnayega\n\n ab hausle se jeene de \n\n ab kaulf nahi hain seene main\n\nhar raste  ko  chirenge har kamiyabi chinenggee \n\n sab kuch mila  pasinese matlab ab jeene main\n\nkiu?\n\nkiu ki, APNA TIME AYYEEGA \n\nTU NANGA HI TO  AYA  HAIN KIYA GHANTA LE KAR  JAI GA ";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words1352[1000]="guilty";
char words13529[486]="plead";
int red1352,red13529,blue1352=0;
for(int t=1;(red1352=a.find(words1352))!=-1 && (red13529=a.find(words13529))!=-1;t++)
{
    a=a.substr(++red1352);
    blue1352++;
}
if( blue1352>0 )
{
system("cls");
ofstream file;
char fnamee[100],bnamee[1163],baddrss[1100],namee[1010],pannoo[10110], accnoo[1100],subjectt[16161];
cout<<"\n-------------------------------------------------------------------------------\n\n";
cout<<"\t\t   SUB::GUILTY PLEAD\n\n-------------------------------------------------------------------------------\n\nIt is design for     ---->    MicrosoftOffice-Word(.doc)    <----";
cout<<"\n\n-------------------------------------------------------------------------------\n\n\n";
cout<<"enter the file name ::  ";
cin>>fnamee;
system("cls");
cout<<"\n\n-------------------------------------------------------------------------------\n";
cout<<"It is design for     ---->    MicrosoftOffice-Word    <----";
cout<<"\n\n-------------------------------------------------------------------------------\n\n";
cout<<"\n\nenter the GR number  (without space) ::  ";
cin>>bnamee;
cout<<"\nenter your TR number  (without space) ::  ";
cin>>baddrss;
cout<<"\nenter the date  (without space, use '_' for gapping) ::  ";
cin>>subjectt;
cout<<"\nenter  name  (without space, use '-' for gapping)  ::  ";
cin>>namee;
cout<<"\nenter under section  (without space) ::  ";
cin>>accnoo;
cout<<"\nenter statement after inter alia  (without space,use '_' for gapping)  ::  ";
cin>>pannoo;
file.open(fnamee);
if(file.is_open())
{
    file<<"\t\t\t\tGR:-";
    file<<bnamee<<"\n\t\t\t\tTR:-"<<baddrss<<"\n";
file<<"\nOrder dated "<<subjectt<<"\n\n";
file<<"The juvenile namely "<<namee<<" is present by filing hazira.\nThe record is taken up for plea on the prayer of the guardian /father of the CCL.\n";
file<<"The substance of the allegations against the juvenile in conflict with law under sections of "<<accnoo;
file<<"is read out and explained to him contending inter alia  ";
file<<pannoo<<" for which a prima facie offence u/s "<<accnoo<<" has appearently been established against  the juvenile, NAME within the cognizance of this board.\n\n";
file<<"The CCL ,  is asked whether he pleads guilty or has any defence to make.\nThe juvenile in conflict with law admitted/confessed his guilt by saying “Ami Doshi” and filed petition to this effect which be kept with the case record.\nUnder the coircumtances,the board is left with  no other options but to hold that the CCL,is found guilty under sections  "<<accnoo;
file<<"\n\nHence it is, \n\n\t\t\t\t";
file<<"FINALLY ORDERED\n\n\t\t\t\t---------------";
file<<"\n\nThat the juvenile in conflict with law namely "<<namee<<" is found guilty for offences punishable under sections "<<accnoo<<" on pieading guilty.";
file<<"\nKeeping in view the age of childs along with the principles of family responsibility , restoration  and fresh start under the juvenile justice system,let the juvenile be given an opportunity of a new beginning by erasure of the records/activities";
file<<"\nThe CCL, be released u/s.15(1)(a)  of juvenile justice (care & protection of children)Act,2005 by allowing him to go to home after proper advice / admonition and counseling to his mother who assured the board that this type of incident will never. The record is being dIsposed off. ";
}
cout<<"\n\ncreate your file....\n\n\n\n\n\n\n\n\n";
Sleep(2000);
file.close();
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}



char words132[1000]="bank";
int red132,blue132=0;
int red1321,blue1321=0;
char words1321[1000]="address";
int red13211,blue13211=0;
char words13211[1000]="change";
for(int t=1;(red1321=a.find(words1321))!=-1 && (red132=a.find(words132))!=-1 && (red13211=a.find(words13211))!=-1;t++)
{
    a=a.substr(++red1321);
    blue1321++;
}
if( blue1321>0)
    {
    system("cls");
cout<<"you mean to change the address in your bank......................";
Sleep(3000);
  system("cls");
    ofstream file;
char fname[100],bname[1163],baddrs[1100],name[1010],panno[10110], accno[1100],mobno[10011],subject[16161],city[10960],addr[15300],addr1[4212],addr2[1352],pincode[12021],country[3311],email[13213];
cout<<"\n-------------------------------------------------------------------------------\n\n";
cout<<"\t\t   SUB :: CHANGE YOUR ADDRESS IN YOUR BANK \n\n-------------------------------------------------------------------------------\n\nIt is design for     ---->    Text File(.txt)    <----";
cout<<"\n\n-------------------------------------------------------------------------------\n\n\n";
cout<<"enter the file name ::  ";
cin>>fname;
system("cls");
cout<<"\n\n-------------------------------------------------------------------------------\n";
cout<<"It is design for     ---->    Text Films(.txt)    <----";
cout<<"\n\n-------------------------------------------------------------------------------\n\n";
cout<<"\n\nenter your bank  name  (without space) ::  ";
cin>>bname;
cout<<"\n\nenter your bank  address  (without space) ::  ";
cin>>baddrs;
cout<<"\n\nenter your subject  (without space, use '_' for gapping) ::  ";
cin>>subject;
cout<<"\n\nenter your name  (without space, use '-' for gapping)  ::  ";
cin>>name;
cout<<"\n\nenter your account number  (without space) ::  ";
cin>>accno;
cout<<"\n\nenter your location name :: ";
cin>>addr;
cout<<"\n\nenter your address line 1 ( Flat no./ House no., Lane/Street/Road)  ::  ";
cin>>addr1;
cout<<"\n\nenter your address line 2 (Name of Colony, Area/ Landmark)  ::  ";
cin>>addr2;
cout<<"\n\nenter your mobile number  (without space) ::  ";
cin>>mobno;
cout<<"\n\nenter your country name  (without space) ::  ";
cin>>country;
cout<<"\n\nenter your pincode  (without space) ::  ";
cin>>pincode;
cout<<"enter your city name :: ";
cin>>city;
cout<<"Email ID :: ";
cin>>email;
file.open(fname);
if(file.is_open())
{
file<<"To\nThe Branch Manager\n";
file<<bname;
file<<"\n\n";
file<<baddrs;
file<<"\n\nsub :  ";
file<<subject;
file<<"\n\nsir,\n\tMy name is  ";
file<<name;
file<<".I have a saving account at your branch with an account of  ";
file<<accno;
file<<" in your bank's  "<<bname<<" branch "<<baddrs<<". \nI request you to change the communication address as well as mobile number and E-mail Id for the same.";
file<<"\nThe Account Details Are ::\n\n"<<name;
file<<"\nAccount no."<<accno;
file<<"\n\nNew Address : "<<addr;
file<<"\n"<<addr1;
file<<"\n"<<addr2;
file<<"\n"<<city;
file<<country<<","<<pincode<<"\nPhone number : "<<mobno<<"\nEmail Id :"<<email;
file<<"\nDocuments for identification proof are attached herewith for your ready reference.\nI request to change the effects immediately and update your records.\n A line of confirmation in this regard would be highly appreciated.";
file<<"\n\n\n\t\t\t\t\t\t\t\t\tThanking you\n\n\n\t\t\t\t\t\t\t\t\tyour faithfully\n\t\t\t\t\t\t\t\t";
file<<name;
file<<"\n\t\t\t\t\t\t\t\tA/c No:-";
file<<accno;
file<<"\n\t\t\t\t\t\t\t\tMobile No:-";
file<<mobno;
file<<"\n\t\t\t\t\t\t\t\tAddress for communication\n";
file<<"\nMost banks will accept the change of address request at the local branches. \nHowever, in case of new generation banks like Citibank etc, you may send the change of address request to their corporate office.";
file<<"\nUsually, the following documents are accepted as valid address proof:\n\n\t\t\t1. Drivers license\n2. Passport\n3. Aadhar card\n4. Election id card";
}
cout<<"\n\ncreate your file....\n\n\n\n\n\n\n\n\n";
Sleep(2000);
file.close();
 cout<<"\n\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words1222[1000]="desktop";
int red1222,blue1222=0;
for(int t=1;(red1222=a.find(words1222))!=-1;t++)
{
    a=a.substr(++red1222);
    blue1222++;
}
if( blue1222==1 || blue1222>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   HINSTANCE result;
   result=ShellExecute(NULL,NULL,"c:\\Users\\Biswa\\Desktop",NULL,NULL,SW_SHOWMAXIMIZED);
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart[1000]="shutdown";
int red12226,blue12226=0;
for(int t=1;(red12226=a.find(restart))!=-1;t++)
{
    a=a.substr(++red12226);
    blue12226++;
}
if( blue12226==1 || blue12226>1 )
{
char a;
cout<<"\n\nARE YOU SURE  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
	system("C:\\Windows\\System32\\shutdown.exe /s");
}
}

char romi[1200]="ascii";
int mark4=0,po;
for(int v=1;(po=a.find(romi))!=-1;v++)
{
    a=a.substr(++po);
    mark4++;
}
if(mark4==1 || mark4>1)
{
    system("cls");
    char ch;
    int i;
    for(i=1;i<255;i++)
    {
        ch=i;
        cout<<i<<"->"<<ch<<"\n";
    }
    system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";

}

char restart1[1000]="restart";
int red122261,blue122261=0;
for(int t=1;(red122261=a.find(restart1))!=-1;t++)
{
    a=a.substr(++red122261);
    blue122261++;
}
if( blue122261==1 || blue122261>1 )
{
char a;
cout<<"\n\nARE YOU SURE  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
	system("C:\\Windows\\System32\\shutdown.exe /r");
}
}
int p998,c998,flag998=0;
char s998[1112]="create";
char s999[4545]="file";
for(int s=1;(p998=a.find(s998))!=-1 && (c998=a.find(s999))!=-1;s++)
{
    a=a.find(++p998);
    flag998++;
}
if(flag998>0)
{
ofstream file;
  char n[500];
  cout<<"\n\n\nenter your file name :  ";
  cin>>n;
  file.open(n);
  cout<<"\n\ncreate your file....\n\n\n\n\n\n\n\n\n";
  file.close();
}
int p999,u998,o998=0;
char p11109[232]="delete";
char p11110[6556]="file";
for(int x=1;(p999=a.find(p11109))!=-1 && (u998=a.find(p11110))!=-1;x++)
{
    a=a.find(++p999);
    o998++;
}
if(o998>0)
{
	int status;
	char fname[20];
	cout<<"\n\n\nEnter name of file, you want to delete : ";
	cin.getline(fname,20);
	status=remove(fname);
	if(status==0)
	{
		cout<<"\n\nfile  "<<fname<<"  deleted successfully..!!\n";
	}
	else
	{
		cout<<"\n\n\nUnable to delete file "<<fname<<"\n";
		perror("Error Message ");
	}
	cout<<"\n\n\n\n\n";
}

        }

             void removereplacesplit(string a)
        {

char kutta91[5000]="remove";
int suyar91,chagol91=0;
for(int i=1;(suyar91=a.find(kutta91))!=-1;i++)
{
    a=a.substr(++suyar91);
    chagol91++;
}
if(chagol91>0)
{
char a[100000],b;
int i;
system("cls");
cout<<"reading";
 Sleep(5000);
system("cls");
cout<<"ENTER YOUR WORD IS= ";
cin>>a;
cout<<"\n\nenter the character which you need to REMOVE= ";
cin>>b;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
{
    a[i]=' ';
}
}
cout<<"\n\n\nupdated string is  :\n\n"<<a<<"\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart179721675[1000]="split";
int red12226179721675,blue12226179721675=0;
for(int t=1;(red12226179721675=a.find(restart179721675))!=-1;t++)
{
    a=a.substr(++red12226179721675);
    blue12226179721675++;
}
if( blue12226179721675==1 || blue12226179721675>1 )
{
system("cls");
cout<<"reading....";
Sleep(2000);
system("cls");
  char str[100] ;
  char  *point ;
  cout<<"\nenter the paragraph : ";
  cin.getline(str,1000);
  point = strtok (str," ,.!&$#()[{]}");
  system("cls");
  cout<<"\n";
  cout<<"spliting........";
  Sleep(4000);
  cout<<"\n\n";
  system("cls");
  cout<<"\n\n";
  while (point!= NULL)
  {
    cout<<"\t"<<point<<"\n\n";
    point = strtok (NULL, " ,.!&$#()[{]}");
  }
  cout<<"\n\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char haram[200]="replace";
int p,flaggg=0;
for(int y=1;(p=a.find(haram))!=-1;y++)
{
    a=a.substr(++p);
    flaggg++;
}
if(flaggg>0)
{
    system("cls");
    cout<<"reading......";
    Sleep(1000);
    cout<<"\n\n\n\nSIR, You mean replacing words..";
    Sleep(7000);
    system("cls");
    string main;
    char sub1[5000];
    char sub2[6000];
    cout<<"\nenter  your  paragraph :  ";
    getline(cin,main);
    cout<<"\n\nenter your word which is present in your paragraph to search :  ";
    cin>>sub1;
    cout<<"\n\nenter your replacing word : ";
    cin>>sub2;
    for(int r=1;(p=main.find(sub1))!=-1;r++)
    {
       main.replace(p,strlen(sub2),sub2);
    }
    cout<<"\n\n\nupdated string : "<<main<<"\n\n";
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


        }

        };
        class Fibonacci : public mack
        {
      private:      char sub[10000];
                        int pos3,i4,f;
        public:
            void fibonacci(string a)
            {
        char sub[10000]="fibonacci";
        transform(a.begin(),a.end(),a.begin(), ::tolower);
        int pos3,i4,f=0;
        for (int i4=1;(pos3=a.find(sub)) != -1 ;i4++)
        {
                a=a.substr(++pos3);
                f++;
        }
		 if(f==1 || f>1)
		{
        cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
		    cout<<"\n\n"<<"sure.....\n";
		    int n,i,f=0,s=1,ans;
            cout<<"\n\nenter the number of terms=";
            cin>>n;
            system("cls");
            system("color b");
            cout<<"\nFIBONACCI SERIZE";
            cout<<"\n******************\t";
            cout<<"\ncalculating.";
		    Sleep(1000);
		    cout<<"..";
		    Sleep(1000);
		    cout<<".";
		    Sleep(1000);
		    cout<<".";
		    Sleep(1000);
for(i=0;i<=n;i++)
{
 if(i<=1)
 {
 	ans=i;
 }
 else
 {
 ans=(f+s);
 f=s;
 s=ans;
 Sleep(1000);
 }

 cout<<endl<<" "<<ans;}
		    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
		}
 }
 void graphpunctuationcontrolprintable(string a)
 {

char kutta4[5000]="graph";
int suyar4,chagol4=0;
for(int i=1;(suyar4=a.find(kutta4))!=-1;i++)
{
    a=a.substr(++suyar4);
    chagol4++;
}
if(chagol4>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK GRAPHIC CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(isgraph(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" graphic characters are present.\n\n\n";
                 cout<<"Are you print all 'GRAPHIC CHARACTERS' ???\t\t";
    string s22;
    Sleep(5000);
    system("cls");
    cout<<"\n\n\nenter your choice(type 'yes' or 'no') :  ";
    cin>>s22;
    char kuttaa[5000]="yes";
int suyarr,chagoleeer=0;
for(int i=1;(suyarr=s22.find(kuttaa))!=-1;i++)
{
    s22=s22.substr(++suyarr);
    chagoleeer++;
}
    if(chagoleeer>0)
    {
        system("cls");
    cout<<"ALL GRAPHIC CHARACTERS ARE===>>\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    for(int o=1;o<=127;o++)
    {
        if(isgraph(o)!=0)
        {
            cout<<o<<endl;
        }
    }
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
        char kuttaaa[5000]="no";
int suyarrr,chagoleeerr=0;
for(int i=1;(suyarrr=s22.find(kuttaaa))!=-1;i++)
{
    s22=s22.substr(++suyarrr);
    chagoleeerr++;
}
    if(chagoleeerr>0)
    {
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }

    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(isgraph(ch)==0)
        {
             cout<<"\n\nIT IS NOT A GRAPHIC CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A GRAPHIC CHARACTER";
            }

               cout<<"\n\nAre you print all 'GRAPHIC CHARACTERS' ???\t\t";
    string s22;
    Sleep(5000);
    system("cls");
    cout<<"\n\n\nenter your choice(type 'yes' or 'no') :  ";
    cin>>s22;
    char kuttaa[5000]="yes";
int suyarr,chagoleeer=0;
for(int i=1;(suyarr=s22.find(kuttaa))!=-1;i++)
{
    s22=s22.substr(++suyarr);
    chagoleeer++;
}
    if(chagoleeer>0)
    {
        system("cls");
    cout<<"ALL GRAPHIC CHARACTERS ARE===>>\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    for(int o=1;o<=127;o++)
    {
        if(isgraph(o)!=0)
        {
            cout<<o<<endl;
        }
    }
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
         char kuttaaa[5000]="no";
int suyarrr,chagoleeerr=0;
for(int i=1;(suyarrr=s22.find(kuttaaa))!=-1;i++)
{
    s22=s22.substr(++suyarrr);
    chagoleeerr++;
}
    if(chagoleeerr>0)
    {
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
        }
    }


char kutta5[5000]="punctuation";
int suyar5,chagol5=0;
for(int i=1;(suyar5=a.find(kutta5))!=-1;i++)
{
    a=a.substr(++suyar5);
    chagol5++;
}
if(chagol5>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK PUNCTUATION CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(ispunct(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" punction characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";

    }

    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(ispunct(ch)==0)
        {
             cout<<"\n\nIT IS NOT A PUNCTUATION CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A PUNCTUATION CHARACTER";
            }
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }

    }
char kutta6[5000]="control";
int suyar6,chagol6=0;
for(int i=1;(suyar6=a.find(kutta6))!=-1;i++)
{
    a=a.substr(++suyar6);
    chagol6++;
}
if(chagol6>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK CONTROL CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(iscntrl(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" control characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(iscntrl(ch)==0)
        {
             cout<<"\n\nIT IS NOT A CONTROL CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A CONTROL CHARACTER";
            }


            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    }

char kutta7[5000]="printable";
int suyar7,chagol7=0;
for(int i=1;(suyar7=a.find(kutta7))!=-1;i++)
{
    a=a.substr(++suyar7);
    chagol7++;
}
if(chagol7>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK PRINTABLE CHARATERS IN\n\n(a)WORD\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(isprint(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" printable characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(isprint(ch)==0)
        {
             cout<<"\n\nIT IS NOT A PRINTABLE CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A PRINTABLE CHARACTER";
            }


            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    }
 }

 };

 class Bye : public Fibonacci
 {
     private:   char sub5[10000];
                        int pos5,i5,f5,pati5,pati6,pati1;

     public:
         void bye(string a)
        {
       char sub5[10000]="bye";
       char pati[1000]="tata";
       pati5=0;
       for(pati1=1;(pati6=a.find(pati))!=-1;pati1++)
       {
           a=a.substr(++pati6);
           pati5++;
       }
       transform(a.begin(),a.end(),a.begin(), ::tolower);
        f5=0;
        for (int i5=1;(pos5=a.find(sub5)) != -1 ;i5++)
        {
                a=a.substr(++pos5);
                f5++;
        }
		 if(f5==1 || f5>1 || pati5>0)
		{
		    cout<<"\n\ngood bye....have a nice day sir\n\n\n";
			exit(0);
		}
        }
  };

  class Evenodd : public Bye
  {
  		    private:      char sub6[10000];
                                char sub7[10000];
                                int pos6,i6,f6;
                                int pos7,i7,f7;
            public:
                void oddeven(string a)
                {
                char sub6[10000]="even ";
                f6=0;
                transform(a.begin(),a.end(),a.begin(), ::tolower);
        for (int i6=1;(pos6=a.find(sub6)) != -1 ;i6++)
        {
                a=a.substr(++pos6);
                f6++;
        }
		if(f6==1 || f6>1)
        {
            cout<<"\n\nmy pleasure to obey your order sir";
            int q;
            cout<<"\n\nsir,enter your number=   ";
            cin>>q;
            if(q%2==0)
            {
                cout<<"\n\nit's even number";
            }
            else
                {
                    cout<<"\n\n it's odd number";
                }
                                	char z1[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(type 'yes' or 'no')=  ";
	cin>>z1;
	char k1[1000]="yes";
	if(strcmp(k1,z1)==0)
    {
		int a,b,c,n;
	cout<<"\n\nENTER THE RANGE=  ";
	cin>>n;
    system("cls");
    cout<<"\n";
	cout<<"\nEVEN AND ODD NUMBERS=";
    cout<<"\n#######################################";
	cout<<"\n\n\n";
    for(c=1;c<=n;c++)
	{
		if(c%2==0)
        {
            cout<<"\n\nTHE EVEN NUMBER IS="<<c<<endl;
        }
        else
            {
            cout<<"\n\nTHE ODD NUMBER IS="<<c<<endl;
        }

	}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
    else
    {
			    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
        }
        }

        void evenodd(string a)
        {
             char sub7[10000]="odd";
                          f7=0;
                          transform(a.begin(),a.end(),a.begin(), ::tolower);
        for (int i7=1;(pos7=a.find(sub7)) != -1 ;i7++)
        {
                a=a.substr(++pos7);
                f7++;
        }
		if(f7==1 || f7>1)
        {
            cout<<"\n\nmy pleasure to obey your order sir";
            int q;
            cout<<"\n\nsir,enter your number=  ";
            cin>>q;
            if(q%2==0)
            {
                cout<<"\n\nit's even number";
            }
            else
                {
                    cout<<"\n\n it's odd number";
                }
                	char z1[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=  ";
	cin>>z1;
	char k1[1000]="yes";
	if(strcmp(k1,z1)==0)
    {
		int a,b,c,n;
	cout<<"\n\nENTER THE RANGE=   ";
	cin>>n;
	system("cls");
    cout<<"\n";
	cout<<"EVEN AND ODD NUMBERS=";
    cout<<"\n#######################################";
	cout<<"\n";
    for(c=1;c<=n;c++)
	{
		if(c%2==0)
        {
            cout<<"THE EVEN NUMBER IS="<<c<<endl;
        }
        else
            {
            cout<<"THE ODD NUMBER IS="<<c<<endl;
        }

	}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
    else
    {
			    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }

        }
        }

                void datetimechumu(string a)
        {
            char restart179[1000]="date";
int red12226179,blue12226179=0;
for(int t=1;(red12226179=a.find(restart179))!=-1;t++)
{
    a=a.substr(++red12226179);
    blue12226179++;
}
if( blue12226179==1 || blue12226179>1 )
{
    system("cls");
    cout<<"\n\n";
system("echo %date%");
cout<<"\n\n\n";
char biswachar;
cout<<"\n\nDo you  change date ?..?...? ('y' or 'n')  :";
cin>>biswachar;
if(biswachar=='y')
{
    system("cls");
    cout<<"\n\n";
    system("date");
    cout<<"\n\n";
    cout<<"\n\n";
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
if(biswachar=='n')
{
    cout<<"\n\n";
    cout<<"\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
else
{
      system("cls");
    cout<<"\n\nsorry sir I am not understand ............";
    Sleep(7000);
      system("cls");
      system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
}

char restart1797[1000]="time";
int red122261797,blue122261797=0;
for(int t=1;(red122261797=a.find(restart1797))!=-1;t++)
{
    a=a.substr(++red122261797);
    blue122261797++;
}
if( blue122261797==1 || blue122261797>1 )
{
    system("cls");
    cout<<"\n\n";
system("echo %time%");
system("pause");
  system("cls");
  time_t lt;
struct tm *local,*gm;
lt=time(NULL);
local=localtime(&lt);
gm=gmtime(&lt);
printf("\n\n");
printf("Local time ::   ");
printf(asctime(local));
printf("\n\n");
printf("UTC time   ::   ");
printf(asctime(gm));
printf("\n\n");
cout<<"\n\n\n";
cout<<"\n\n\n";
char biswachar2;
cout<<"\n\nDo you  change time ?..?...? ('y' or 'n')  :";
cin>>biswachar2;
if(biswachar2=='y')
{
    system("cls");
    cout<<"\n\n";
    system("time");
    cout<<"\n\n";
    cout<<"\n\n";
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
if(biswachar2=='n')
{
    cout<<"\n\n";
    cout<<"\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
else
{
      system("cls");
    cout<<"\n\nsorry sir I am not understand ............";
    Sleep(7000);
      system("cls");
      system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
}


char restart17972[1000]="chumu";
int red1222617972,blue1222617972=0;
for(int t=1;(red1222617972=a.find(restart17972))!=-1;t++)
{
    a=a.substr(++red1222617972);
    blue1222617972++;
}
if( blue1222617972==1 || blue1222617972>1 )
{
    system("cls");
    cout<<"\n\n\n";
  cout<<"Amake Chumu Dewar Jnno Dhonnobaadh "<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3);
cout<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3);
;
cout<<"\n\n\n\n\n\n\n\t\t\t\t";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
            char subst333[1022]="palinedrome string";
        int positi333,flago333=0;
        for(int x=1;(positi333=a.find(subst333))!=-1;x++)
        {
            a=a.substr(++positi333);
            flago333++;
        }
   if(flago333==1 || flago333>1)
{
system("cls");

	char x1[1000];
int i,len,j,f=0;
cout<<"ENTER YOUR STRING:    ";
cin>>x1;
len=strlen(x1);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x1[i]!=x1[j])
	{
		f=1;
		break;
	}
}
if(f==0)
{
	cout<<endl<<x1<<" is pallindrome string";
}
else
{
		cout<<endl<<x1<<" is not pallindrome string";
}

cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

     char alphabate[1000]="multiplication";
   int positions,mark3=0;
   for(int y=1;(positions=a.find(alphabate))!=-1;y++)
        {
       a=a.substr(++positions);
       mark3++;
   }
   if(mark3==1 || mark3>1)
   {
       system("cls");
       int i,n,numbers,mul=1;
       cout<<"enter the no of terms to multiplication ==> ";
       cin>>n;
       cout<<"\n\n";
       for(i=1;i<=n;i++)
       {
           cin>>numbers;
           mul=mul*numbers;
       }
       cout<<"\n\nMultiplication result is =  "<<mul<<"\n\n\n";
       system("pause");
       Beep(500,6000);
        system("cls");
		system("color b");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }


        }


};

 class THANK : public Evenodd
 {
     private: char word[10000],word1[10000];
                    int flag1,position1,constant1;
    public:

    void thankus(string a)
    {
        char word1[10000]="thank";
        flag1=0;
        transform(a.begin(),a.end(),a.begin(), ::tolower);
        for (int constant1=1;(position1=a.find(word1)) != -1 ;constant1++)
        {
                a=a.substr(++position1);
                flag1++;
        }
        if(flag1==1 || flag1>1)
        {
            system("cls");
            system("color b");
            cout<<"\t   ";
            cout<<"w";
            Sleep(1000);
            cout<<"e";
            cout<<"l";
            Sleep(1000);
            cout<<"l";
                       Sleep(1000);
            cout<<"c";
                       Sleep(1000);
            cout<<"o";
                               Sleep(1000);
            cout<<"m";
            cout<<"e\n\n\n";
              Sleep(1000);

        int i,j;
        	for(i=15/2;i<=15;i+=2)
	{
		for(j=1;j<(15-i);j+=2)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"#";
		}
		for(j=1;j<(15-i);j++)
		{
			cout<<" ";
		}
		for(j=1; j<=i;j++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	for(i=15;i>=1;i--)
    {

    for(j=i;j<15;j++)
    {
        cout<<" ";
    }
    for(j=1;j<=(i*2)-1;j++)
    {
        cout<<"#";
    }
    cout<<"\n";
    }

    cout<<"\n\n\n\t MY PLEASURE SIR";
    system("color a");
       cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        char subs333[1022]="krishnamurthy";
        int posit333,flag333=0;
        transform(a.begin(),a.end(),a.begin(),  ::tolower);
        for(int x=1;(posit333=a.find(subs333))!=-1;x++)
        {
            a=a.substr(++posit333);
            flag333++;
        }
   if(flag333==1 || flag333>1)
   {
       system("cls");
int n,rem=0,h=1,sum=0,p,i;
cout<<"\n\nenter the no(for checking of Krisjnamurthy number)= ";
cin>>n;
p=n;
while(n!=0)
{
rem=n%10;
for(i=1;i<=rem;i++)
{
h=h*i;
}
sum=h+sum;
n=n/10;
h=1;
}
if(p==sum)
cout<<"\n\n"<<p<<" is krishnamurthy no";
else
cout<<"boro carrow";

	char z3[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE('yes' or 'no')=   ";
	cin>>z3;
	char k3[1000]="yes";
	if(strcmp(k3,z3)==0)
    {
        		    cout<<"\n\n\n\n\n\n";
		     cout<<"calculating..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
int n,rem=0,h=1,sum=0,p,i,fi,la,g;
cout<<"enter the uper limit=  ";
cin>>fi;
cout<<"enter the lower limit=  ";
cin>>la;
for(g=fi;g<=la;g++)
{
rem=0;
sum=0;
    p=g;
    while(p!=0)
        {
                 rem=p%10;
                for(i=1;i<=rem;i++)
                    {
                        h=h*i;
                    }
                   sum=h+sum;
                   p=p/10;
                   h=1;
        }
                        if(sum==g)
                       cout<<g<<",";
                        continue;
}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }
    }
 };

       class autopoly : public  THANK
       {
        private:
                       char word1[1000];
                       int position1,flag1;
        public:

                    void aautopoly(string a)
                    {
                      char word1[1000]="autopolymorphic";
                      flag1=0;
                      transform(a.begin(),a.end(),a.begin(), ::tolower);
        for(int i=1;(position1=a.find(word1))!=-1;i++)
        {
            a=a.substr(++position1);
            flag1++;
        }
        if(flag1==1 || flag1>1)
        {
            system("cls");
	int a;
	cout<<"\nENTER THE no=";
	cin>>a;
		if((a*a)%10==a)
		{
		cout<<endl<<a<<" = is a autopollymorphic number";
		}
	else
	{
	cout<<endl<<a<<" = is not a autopollymorphic number";
	}
	char z[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=   ";
	cin>>z;
	char k[1000]="yes";
	if(strcmp(k,z)==0)
    {
		int a,b,c,n;
	cout<<"\n\nENTER THE RANGE=";
	cin>>n;
    cout<<"\n";
	cout<<"\n\nAUTOPOLYMORPHIC NUMBERS=";
    cout<<"\n#############################";
	cout<<"\n\n\n";
    for(c=1;c<=n;c++)
	{
		if((c*c)%10==c)
		cout<<"THE AUTOPOLYMORPHIC NUMBER IS="<<c<<endl;
	}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
    else
    {
			    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
        }
        }};
        class addition : public autopoly
        {
private :         char word2[1000]="addition";
                        int position2,flag2,position3,flag3;
                        char word22112[1000]="add ";
         int flag22112=0;
public:

        void add(string a)
        {
         char word2[1000]="addi",word3[1000];
         flag2=0;
         transform(a.begin(),a.end(),a.begin(), ::tolower);
        for(int i=0;(position2=a.find(word2))!=-1;i++)
        {
            a=a.substr(++position2);
            flag2++;
        }
               char word22112[1000]="add ";
         int flag22112=0,position22112;
        for(int i=0;(position22112=a.find(word22112))!=-1;i++)
        {
            a=a.substr(++position22112);
            flag22112++;
        }
        if(flag2==1 || flag2>1 || flag22112>0)
        {
            int a,b,t,sum=0;
    cout<<"\n\nenter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {

    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
            cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        }
                void sum(string a)
        {
         char word3[1000]="sum";
         flag3=0;
         transform(a.begin(),a.end(),a.begin(), ::tolower);
        for(int i=0;(position3=a.find(word3))!=-1;i++)
        {
            a=a.substr(++position3);
            flag3++;
        }
        if(flag3==1 || flag3>1)
        {
            int a,b,t,sum=0;
    cout<<"\n\nenter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {

    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
            cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        }
        };
        class morning : public addition
        {
            private :          char subs[1022];
                                    int posit,flag6;
            public:
                                void gm(string a)
    {
          char subs[1022]="morning";
        flag6=0;
        transform(a.begin(),a.end(),a.begin(),::tolower);
                for(int x=1;(posit=a.find(subs))!=-1;x++)
        {
            a=a.substr(++posit);
            flag6++;
        }
        if(flag6==1 || flag6>1)
        {
                                cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="       VERY VERY GOOD MORNING SIR        ";
    len2 = strlen(name);
system("color a");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
      cout<<"\n\n\n";
for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
  system("pause");

}

       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }
        }
};
class musicc : public morning
{
    private:
                    char arr[1400],brr[5200],crr[5800];
                    int  p,q,f1,f2,i1,i2,i3,f3,y;
    public:
                   void music(string a)
                   {
                       f1=0;
                       f2=0;
                       char arr[1400]="music";
                       char brr[1400]="song";
                        char crr[1400]="ganna";
                       transform(a.begin(),a.end(),a.begin(), ::tolower);
                       for(i1=1;(p=a.find(arr))!=-1;i1++)
                       {
                           a=a.substr(++p);
                          f1++;
                       }
                             for(i2=1;(q=a.find(brr))!=-1;i2++)
                       {
                           a=a.substr(++q);
                          f2++;
                       }
                                for(i3=1;(y=a.find(crr))!=-1;i3++)
                       {
                           a=a.substr(++y);
                          f3++;
                       }
                       if(f1>0  || f2>0 || f3>0)
                       {
                           system("cls");
                           system("color a");
                            cout<<"Sir,  I am playing songs online(In Opera).......";
                            Sleep(7000);
                            HWND hwnd = GetDesktopWindow();
                            ShellExecuteA(hwnd,"open","https://gaana.com",NULL,NULL,SW_SHOWMAXIMIZED);
                              cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
                       }
                   }
};
class  eveningg: public musicc
{
    private:         char subs1[1022];
                            int posit1,flag7;
    public:
void evening(string a)
{
        char subs1[1022]="evening";
        flag7=0;
        transform(a.begin(),a.end(),a.begin(), ::tolower);
                for(int x=1;(posit1=a.find(subs1))!=-1;x++)
        {
            a=a.substr(++posit1);
            flag7++;
        }
        if(flag7==1 || flag7>1)
        {

                                            cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="      VERY VERY GOOD EVENING SIR      ";
    len2 = strlen(name);
system("color b");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
       cout<<"\n\n\n";
   for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
printf("\n\n\t\t\t");
  system("pause");

}
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }
        }
          void vowelconsonant(string a)
        {
            char subs888[1022]="vowel";
        int posit888,flag888=0;
        for(int x=1;(posit888=a.find(subs888))!=-1;x++)
        {
            a=a.substr(++posit888);
            flag888++;
        }
   if(flag888==1 || flag888>1)
{
system("cls");
 char str[100];
 int m,d;
     cout<<"Vowels & Consonants are :  \n\n";
 for(m=65,d=97;m<=90,d<=122;m++,d++)
 {
if(m==85 || m==73 || m==65 || m==79 || m==69 || d==97 || d==105 || d==117 || d==101 || d==111 )
     {
         cout<<char(d)<<"  --> "<<char(m)<<"------------------------------------------------------------------->VOWEL"<<endl;
     }
     else
    {
        cout<<char(d)<<"  --> "<<char(m)<<"------>CONSONANT"<<endl;
    }
 }


   int vowelCounter = 0, consonantCounter = 0;
   cout << "\n\nEnter any string(FOR COUNTING VOWELS OR CONSONANTS): ";
   cin.getline(str, 150);
   //'\0 represent end of string
   for(int i = 0; str[i]!='\0'; i++)
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "\n\nVowels in String: " << vowelCounter << endl;
   cout << "\nConsonants in String: " << consonantCounter << endl;
cout<<"\n\n";
system("pause");
Beep(500,6000);
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

         char subst333[1022]="palinedrome string";
        int positi333,flago333=0;
        for(int x=1;(positi333=a.find(subst333))!=-1;x++)
        {
            a=a.substr(++positi333);
            flago333++;
        }
   if(flago333==1 || flago333>1)
{
system("cls");

	char x1[1000];
int i,len,j,f=0;
cout<<"ENTER YOUR STRING:    ";
cin>>x1;
len=strlen(x1);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x1[i]!=x1[j])
	{
		f=1;
		break;
	}
}
if(f==0)
{
	cout<<endl<<x1<<" is pallindrome string";
}
else
{
		cout<<endl<<x1<<" is not pallindrome string";
}

cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


           char subs999[1022]="consonant";
        int posit999,flag999=0;
        for(int x=1;(posit999=a.find(subs999))!=-1;x++)
        {
            a=a.substr(++posit999);
            flag999++;
        }
   if(flag999==1 || flag999>1)
{
system("cls");
 char str[100];
   int vowelCounter = 0, consonantCounter = 0;
     cout<<"Vowels  & Consonants are :  \n\n";
     int mm,dd;
 for(mm=65,dd=97;mm<=90,dd<=122;mm++,dd++)
 {
if(mm==85 || mm==73 || mm==65 || mm==79 || mm==69 || dd==97 || dd==105 || dd==117 || dd==101 || dd==111 )
     {
         cout<<char(dd)<<"  --> "<<char(mm)<<"------------------------------------------------------------------->VOWEL"<<endl;
     }
else
    {
        cout<<char(dd)<<"  --> "<<char(mm)<<"------>CONSONANT"<<endl;
    }
 }

   cout << "\n\n\nEnter any string(FOR COUNTING VOWELS OR CONSONANTS): ";
   cin.getline(str, 150);
   //'\0 represent end of string
   for(int i = 0; str[i]!='\0'; i++)
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "\n\nVowels in String: " << vowelCounter << endl;
   cout << "\nConsonants in String: " << consonantCounter << endl;
cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

        }


    void amstrongg(string a)
    {
        char biswa2[22133]="amstrong";
        char biswa3[22133]="logic";
        int bpos2,bpos3,bflag2=0,bflag3=0;
        for(int i=1;(bpos2=a.find(biswa2))!=-1;i++)
        {
            a=a.substr(++bpos2);
            bflag2++;
        }
                for(int j=1;(bpos3=a.find(biswa3))!=-1;j++)
        {
            a=a.substr(++bpos3);
            bflag3++;
        }
        if(bflag2>0 && bflag3>0)
        {
            system("cls");
        }
    }
         void cmdwhoareu(string a)
        {
char restart179721[1000]="who are you";
int red12226179721,blue12226179721=0;
for(int t=1;(red12226179721=a.find(restart179721))!=-1;t++)
{
    a=a.substr(++red12226179721);
    blue12226179721++;
}
if( blue12226179721==1 || blue12226179721>1 )
{
    system("cls");

Sleep(2000);
cout<<"\n\nI am a Computer Program.\n\nI am designed by c++ \n\nMy BOSS is Biswa";
cout<<"\n\n\n\n\n\n\n\t\t\t\t";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char restart1797216[1000]="cmd";
int red122261797216,blue122261797216=0;
for(int t=1;(red122261797216=a.find(restart1797216))!=-1;t++)
{
    a=a.substr(++red122261797216);
    blue122261797216++;
}
if( blue122261797216==1 || blue122261797216>1 )
{
system("cls");
Sleep(2000);
HINSTANCE result;
result=ShellExecute(NULL,NULL,"c:\\Windows\\system32\\cmd",NULL,NULL,SW_SHOWDEFAULT);
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char restart1797216i[1000]="iemcrp";
int red122261797216i,blue122261797216i=0;
for(int t=1;(red122261797216i=a.find(restart1797216i))!=-1;t++)
{
    a=a.substr(++red122261797216i);
    blue122261797216i++;
}
if( blue122261797216i==1 || blue122261797216i>1 )
{
system("cls");
cout<<"Now opening iemcrp............";
Sleep(2000);
HWND hwnd = GetDesktopWindow();
ShellExecuteA(hwnd,"open","https://www.iemcrp.com/iemEn/login.jsp",NULL,NULL,NULL);
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart17972167[1000]="command prompt";
int red1222617972167,blue1222617972167=0;
for(int t=1;(red1222617972167=a.find(restart17972167))!=-1;t++)
{
    a=a.substr(++red1222617972167);
    blue1222617972167++;
}
if( blue1222617972167==1 || blue1222617972167>1 )
{
system("cls");
Sleep(2000);
HINSTANCE result;
result=ShellExecute(NULL,NULL,"c:\\Windows\\system32\\cmd",NULL,NULL,SW_SHOWDEFAULT);
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

        }

        };

        class  n8 : public eveningg
        {
        private:
            char subs2[1022];
            int posit2,flag8=0;
        public:
             void night(string a)
             {
                         char subs2[1022]="night";
                         transform(a.begin(),a.end(),a.begin(), ::tolower);
        flag8=0;
                for(int x=1;(posit2=a.find(subs2))!=-1;x++)
        {
            a=a.substr(++posit2);
            flag8++;
        }
        if(flag8>0)
        {

                                            cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="     GOOD NIGHT  & SWEET DREAMS     ";
    len2 = strlen(name);
system("color 5");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
        cout<<"\n\n\n";
   for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
printf("\n\n\t\t\t");
  system("pause");

}
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }
             }

             };
             class afternoon : public n8
             {
            private:  int posit3,flag10;
            char subs3[1022];
             public:
             void noon(string a)
             {
       char subs3[1022]="afternoon";
       transform(a.begin(),a.end(),a.begin(), ::tolower);
        flag10=0;
        for(int x=1;(posit3=a.find(subs3))!=-1;x++)
        {
            a=a.substr(++posit3);
            flag10++;
        }

        if(flag10==1 || flag10>1)
        {

                                            cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="      GOOD AFTERNOON SIR      ";
    len2 = strlen(name);
system("color a");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
    cout<<"\n\n\n";
for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
printf("\n\n\t\t\t");
  system("pause");

}
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        }
        };

        class HOME : public afternoon
        {
        private:      char subs4[1022];
        int posit4,flag11;
        public:
        void home(string a)
        {
        char subs4[1022]="home";
        transform(a.begin(),a.end(),a.begin(), ::tolower);
      flag11=0;
        for(int x=1;(posit4=a.find(subs4))!=-1;x++)
        {
            a=a.substr(++posit4);
            flag11++;
        }
        if(flag11==1 || flag11>1)
        {
            system("cls");
            system("color C");
        }
        }
        };

        class hi : public HOME
{
     private:
        char subs5[1022];
        int posit5,flag12;
        public:
            void hii(string a)
            {
   char subs5[1022]="hi ";
   transform(a.begin(),a.end(),a.begin(), ::tolower);
       flag12=0;
        for(int x=1;(posit5=a.find(subs5))!=-1;x++)
        {
            a=a.substr(++posit5);
            flag12++;
        }
        if(flag12==1 || flag12>1)
        {
        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            system("cls");
        system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM MACK ."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
        }
        }
        };
class yoo : public hi
{
    private:               char subs6[1022];
                                  int posit6,flag13;
    public:
        void yo(string a)
          {
              char subs6[1022]="yo ";
        transform(a.begin(),a.end(),a.begin(), ::tolower);
              flag13=0;
        for(int x=1;(posit6=a.find(subs6))!=-1;x++)
        {
            a=a.substr(++posit6);
            flag13++;
        }
        if(flag13==1 || flag13>1)
        {
        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            system("cls");
        system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM MACK . I  AM  YOUR  VIRTUAL  ASISTANT."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
        }}};

        class loveu : public yoo
        {
        private:              char subs7[1022];
                                     int posit7,flag14;
        public:
        void lu(string a)
        {
            char subs7[1022]="love you";
                     flag14=0;
        transform(a.begin(),a.end(),a.begin(), ::tolower);
        for(int x=1;(posit7=a.find(subs7))!=-1;x++)
        {
            a=a.substr(++posit7);
            flag14++;
        }
        if(flag14==1 || flag14>1)
        {
        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            system("cls");
        system("color d");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="     ....#....I  LOVE YOU TOOO....#....      ";
    len2 = strlen(name);
system("color b");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
        cout<<"\n\n\n";

for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
  system("pause");

}

       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        }
        };

        class goog : public loveu
        {
            private:               char subs8[1022];
                                           int posit8,flag15;
            public:
            void google(string a)
            {
             char subs8[1022]="google";
                flag15=0;
        transform(a.begin(),a.end(),a.begin(),  ::tolower);
        for(int x=1;(posit8=a.find(subs8))!=-1;x++)
        {
            a=a.substr(++posit8);
            flag15++;
        }
        if(flag15==1 || flag15>1)
        {
            HWND hwnd=GetDesktopWindow();
            ShellExecuteA(hwnd,"open","http://www.google.com",NULL,NULL,NULL);
            cout<<"\n\n";
               system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }}};

        class multiplicationtable : public goog
        {
        private:        char subs9[1022];
                                int posit9,flag16;
            public:
       void mpt(string a)
                     {
                         char subs9[1022]="multiplication table";
                         transform(a.begin(),a.end(),a.begin(), ::tolower);
                        flag16=0;
        for(int x=1;(posit9=a.find(subs9))!=-1;x++)
        {
            a=a.substr(++posit9);
            flag16++;
        }
   if(flag16==1 || flag16>1)
        {

        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
int i,n,k;
cout<<"\nEnter the no=";
cin>>n;
for(i=0;i<=100;i++)
{
k=n*i;
cout<<"\n"<<n<<"*"<<i<<"="<<k;
}
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }}
        void zeesab(string a)
        {

char words1[1000]="zee tv";
int red1,blue1=0;
for(int t=1;(red1=a.find(words1))!=-1;t++)
{
    a=a.substr(++red1);
    blue1++;
}
if( blue1==1 || blue1>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.zee5.com/",NULL,NULL,NULL);
    Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words2[1000]="zee5";
int red2,blue2=0;
for(int t=1;(red2=a.find(words2))!=-1;t++)
{
    a=a.substr(++red2);
    blue2++;
}
if( blue2==1 || blue2>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.zee5.com/",NULL,NULL,NULL);
    Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words3[1000]="sab";
int red3,blue3=0;
for(int t=1;(red3=a.find(words3))!=-1;t++)
{
    a=a.substr(++red3);
    blue3++;
}
if( blue3==1 || blue3>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.sonyliv.com/",NULL,NULL,NULL);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
        }

   void amstrong(string a)
    {

    char subs777[1022]="amstrong";
        int posit777,flag777=0;
        for(int x=1;(posit777=a.find(subs777))!=-1;x++)
        {
            a=a.substr(++posit777);
            flag777++;
        }
   if(flag777==1 || flag777>1)
   {
       system("cls");
int n,s=0,d,rem=0;
cout<<"Enter The Number(for checking of Amstrong number)=";
cin>>n;
d=n;
for(;n!=0;n=n/10)
{
rem=n%10;
s=s+(rem*rem*rem);
}
if(s==d)
{
cout<<"\n\nit is a amstrong no";
}
else
cout<<"\n\nit is not a amstrong no";

	char z3[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE('yes' or 'no')=   ";
	cin>>z3;
	char k3[1000]="yes";
	if(strcmp(k3,z3)==0)
    {
        		    cout<<"\n\n\n\n\n\n";
		     cout<<"calculating..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
  int num1, num2, i, num, digit, sum;

  cout << "Enter upper limit: ";
  cin >> num1;

  cout << "Enter lower limit: ";
  cin >> num2;

  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl<<endl;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl<<endl;
        }

}
    cout<<"\n\n\n\n\n";
   system("pause");
   Beep(500,6000);
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
            system("pause");
            Beep(500,6000);
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }
        }




        };



class calc : public goog
{
    private:                    char subs10[1022];
                                        int posit10,flag17;
    public:
void calculator(string a)
{
                   char subs10[1022]="calculator";
                   transform(a.begin(),a.end(),a.begin(), ::tolower);
        flag17=0;
        for(int x=1;(posit10=a.find(subs10))!=-1;x++)
        {
            a=a.substr(++posit10);
            flag17++;
        }
   if(flag17==1 || flag17>1)
        {

                    cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		 system("cls");
            char a9;
cout<<"             MENU\n********************\n\na) BUSINESS\nb)SCIENTIFIC\n\n\n";
cout<<"type your choice(a or b)::  ";
cin>>a9;
if(a9=='a')
{
    system("cls");
    char op;
    int num1,num2;
    cout<<"\nNOW THIS CALCULATOR USED FOR 2 OPARANDS\n";
    cout << "\n\nEnter operator either + or - or * or /: ";
    cin >> op;
    cout << "\n\nEnter two operands(1st>2nd):  ";
    cin >> num1 ;
    cout<<"\t";
    cin>> num2;
    switch(op)
    {
        case '+':
            cout <<"\n\nResult :  " <<num1+num2;
            break;

        case '-':
            cout << "\n\nResult :  "<<num1-num2;
            break;

        case '*':
            cout << "\n\nResult :  "<<num1*num2;
            break;

        case '/':
            cout << "\n\nResult :  "<< num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "\n\n\nError! operator is not correct";
            break;
		}
    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
if(a9=='b')
{
    system("cls");
    HINSTANCE result;
    result=ShellExecute(NULL,NULL,"c:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Accessories\\calculator",NULL,NULL,SW_SHOWDEFAULT);

    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
}
}};

class factorial : public calc
    {
    private:          char subs11[1022];
                                int posit11,flag18;
    public:
    void fact(string a)
    {
       char subs11[1022]="factorial";
        flag18=0;
        transform(a.begin(),a.end(),a.begin(),  ::tolower);
        for(int x=1;(posit11=a.find(subs11))!=-1;x++)
        {
            a=a.substr(++posit11);
            flag18++;
        }
   if(flag18==1 || flag18>1)
   {
       system("cls");
       cout<<"\n\ncalculating....\n\n\n";
        cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		    cout<<"\n\n\n";
		    int i,a,l=1;
cout<<"\n\n\nenter the no= ";
cin>>a;
cout<<"\n\n\n";
if(a!=0)
{
for(i=1;i<=a;i++)
{
l=l*i;
cout<<"*"<<i;
}
cout<<"="<<l;
}
else if(a==0)
{
	cout<<a<<"!=1";
}
else if(a<0)
{
cout<<"\n\nthis no is not applicable";
}
		    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }}
    void majicsabtv(string a)
   {
       char subst444[1022]="majic number";
        int positi444,flago444=0;
        for(int x=1;(positi444=a.find(subst444))!=-1;x++)
        {
            a=a.substr(++positi444);
            flago444++;
        }
   if(flago444==1 || flago444>1)
        {
system("cls");
int n,s=0,r,p,q=0,t,w=0,f,e=0;
cout<<"CHEAK MAGIC NUMBER(MAXIMUM FOUR DIGITS NUMBERS)\n";
cout<<"***********************************************************\n";
cout<<"Enter the number=";
cin>>n;
while(n!=0)
{
	r=n%10;
	s=s+r;
	n=n/10;
	}
while(s!=0)
{
	p=s%10;
	q=q+p;
	s=s/10;
}
while(q!=0)
{
	t=q%10;
	w=w+t;
	q=q/10;
}
while(w!=0)
{
	f=w%10;
	e=e+f;
	w=w/10;
}
if(e==1)
cout<<"IT IS MAGIC NUMBER";
else
cout<<"IT IS NOT A MAGIC NUMBER";

cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char words[1000]="sab tv";
int red,blue=0;
for(int t=1;(red=a.find(words))!=-1;t++)
{
    a=a.substr(++red);
    blue++;
}
if( blue==1 || blue>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.sonyliv.com/",NULL,NULL,NULL);
    Beep(500,6000);
    cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
        }




   };


 class hay : public factorial
   {
private:       char subs12[1022];
                        int posit12,flag19;
    public:
   void howareyou(string a)
   {
        char subs12[1022]="how are you";
       flag19=0;
       transform(a.begin(),a.end(),a.begin(), ::tolower);
        for(int x=1;(posit12=a.find(subs12))!=-1;x++)
        {
            a=a.substr(++posit12);
            flag19++;
        }
   if(flag19==1 || flag19>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"..............I AM WORKING PERFECTLY NOW..................";
		     cout<<"\n\n\n\n\n\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }}};

class youtube : public hay
{
    private:           char subs13[1022];
                                int posit13,flag29;
    public:
   void youtubeon(string a)
    {
           char subs13[1022]="youtube";
           transform(a.begin(),a.end(),a.begin(), ::tolower);
        flag29=0;
        for(int x=1;(posit13=a.find(subs13))!=-1;x++)
        {
            a=a.substr(++posit13);
            flag29++;
        }
   if(flag29==1 || flag29>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","http://www.youtube.com",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }
}};

class movie : public youtube
{
    private:          char subs15[1022];
                            int posit15,flag59;
                            char subs16[1022];
                            int posit16,flag69;
                            char subs14[1022];

    public :
          void film(string a)
          {
              transform(a.begin(),a.end(),a.begin(), ::tolower);
        char subs15[1022]="film";
        flag59=0;
        for(int x=1;(posit15=a.find(subs15))!=-1;x++)
        {
            a=a.substr(++posit15);
            flag59++;
        }
   if(flag59==1 || flag59>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }

                 char subs16[1022]="movies";
       flag69=0;
        for(int x=1;(posit16=a.find(subs16))!=-1;x++)
        {
            a=a.substr(++posit16);
            flag69++;
        }
   if(flag69==1 || flag69>1)
   {
        system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }
                 char subs14[1022]="movie";
        int posit14,flag49=0;
        for(int x=1;(posit14=a.find(subs14))!=-1;x++)
        {
            a=a.substr(++posit14);
            flag49++;
        }
   if(flag49==1 || flag49>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }
   }
           void biswahellofashion(string a)
        {

 char sub2yyy[10000]="hello";
        int posyyy,i2yyy,f2yyy=0;
        for (int i2yyy=1;(posyyy=a.find(sub2yyy)) != -1 ;i2yyy++)
        {
                a=a.substr(++posyyy);
                f2yyy++;
        }

		if(f2yyy==1 ||  f2yyy>1)
		{
		cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
		system("color E");
		cout<<"\n\nhello sir"<<"\n\nI AM MACK . I  AM  YOUR  VIRTUAL  ASISTANT."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
		}


char haram1[200]="biswa";
int p111,flaggg1=0;
for(int y=1;(p111=a.find(haram1))!=-1;y++)
{
    a=a.substr(++p111);
    flaggg1++;
}
if(flaggg1>0)
{
system("cls");
cout<<"\n\n\t\t*** HELLO  BOSS  ***"<<"\n\t\t_______________________";
cout<<"\n\n\ngive me any order sir..............\n\n\n\n";
}

char haram11[200]="fashion";
int p1111,flaggg11=0;
for(int y=1;(p1111=a.find(haram11))!=-1;y++)
{
    a=a.substr(++p1111);
    flaggg11++;
}
if(flaggg11>0)
{
system("cls");
HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://Myntra.com",NULL,NULL,SW_SHOWMAXIMIZED);
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char haram111[200]="styl";
int p11111,flaggg111=0;
for(int y=1;(p11111=a.find(haram111))!=-1;y++)
{
    a=a.substr(++p11111);
    flaggg111++;
}
if(flaggg111>0)
{
system("cls");
HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://Myntra.com",NULL,NULL,SW_SHOWMAXIMIZED);
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

        }
   };
class game : public movie
   {
       private:                         char subs17[1022];
                                                int posit17,flag79;
                                                char subs18[1022];
                                                int posit18,flag89;
                                                char subs110[1022];
                                                int posit110,flag991;
                                                char subs111[1022];
                                                int posit111,flag111;
       public:
            void ggaammee(string a)
                {
                    char subs17[1022]=" games";
        int posit17,flag79=0;
        for(int x=1;(posit17=a.find(subs17))!=-1;x++)
        {
            a=a.substr(++posit17);
            flag79++;
        }
   if(flag79==1 || flag79>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://rgmechanicsgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
        else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n" ;
                char a1;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a1;
if(a1=='Y'||  a1=='y')
{
            system("snake.exe");
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }
                    char subs18[1022]=" game";
        int posit18,flag89=0;
        for(int x=1;(posit18=a.find(subs18))!=-1;x++)
        {
            a=a.substr(++posit18);
            flag89++;
        }
   if(flag89==1 || flag89>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","http://oceanofgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
        else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            if(k=='b')
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n ";
                char a1;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) : ---->";
cin>>a1;
if(a1=='Y' || a1=='y')
{
                 system("snake.exe");
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }

     char biswa1[15036]="krishnamurthy";
        char biswa4[22133]="logic";
         int bpos1,bpos4,bflag1=0,bflag4=0;
                 for(int i=1;(bpos1=a.find(biswa1))!=-1;i++)
        {
            a=a.substr(++bpos1);
            bflag1++;
        }
                for(int j=1;(bpos4=a.find(biswa4))!=-1;j++)
        {
            a=a.substr(++bpos4);
            bflag4++;
        }
        if(bflag1>0 && bflag4>0)
        {
            system("cls");
        }



                       char subs110[1022]="games";
        int posit110,flag991=0;
        for(int x=1;(posit110=a.find(subs110))!=-1;x++)
        {
            a=a.substr(++posit110);
            flag991++;
        }
   if(flag991==1 || flag991>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://rgmechanicsgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n ";
                char a;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a;
if(a=='Y' || a=='y')
{
       system("snake.exe");
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }




                       char subs111[1022]="game";
        int posit111,flag111=0;
        for(int x=1;(posit111=a.find(subs111))!=-1;x++)
        {
            a=a.substr(++posit111);
            flag111++;
        }
   if(flag111==1 || flag111>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","http://oceanofgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n ";
                char a;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a;
if(a=='Y' || a=='y')
{
            system("snake.exe");
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }

}
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

void facebooknotepadMSO(string a)
{
    	char words5[1000]="notepad";
int red5,blue5=0;
for(int t=1;(red5=a.find(words5))!=-1;t++)
{
    a=a.substr(++red5);
    blue5++;
}
if( blue5==1 || blue5>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HINSTANCE open;
   open= ShellExecute(NULL,NULL,"c:\\Windows\\notepad",NULL,NULL,SW_SHOWDEFAULT);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char strrr[1000]="database";
int ppposiii,ffffa=0;
for(int i=1;(ppposiii=a.find(strrr))!=-1;i++)
{
    a=a.substr(++ppposiii);
    ffffa++;
}
if(ffffa>0)
{
   system("SCHOOL.exe");
    cout<<"\n\n\n\n";
    system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char strrr1[1000]="bank";
int ppposiii1,ffffa1=0;
for(int i=1;(ppposiii1=a.find(strrr1))!=-1;i++)
{
    a=a.substr(++ppposiii1);
    ffffa1++;
}
if(ffffa1>0)
{
     system("BANK.exe");
    cout<<"\n\n\n\n";
    system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char words6[1000]="microsoft office";
int red6,blue6=0;
for(int t=1;(red6=a.find(words6))!=-1;t++)
{
    a=a.substr(++red6);
    blue6++;
}
if( blue6==1 || blue6>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HINSTANCE open;
   open= ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Office\\Office12\\WINWORD",NULL,NULL,SW_SHOWDEFAULT);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words7[1000]="facebook";
int red7,blue7=0;
for(int t=1;(red7=a.find(words7))!=-1;t++)
{
    a=a.substr(++red7);
    blue7++;
}
if( blue7==1 || blue7>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hnwd=GetDesktopWindow();
    ShellExecuteA(hnwd,"open","https://www.facebook.com/",NULL,NULL,NULL);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

       char s1[15200]="buy";
       char s2[150]="shop";
       int p1,p2,f3=0,f4=0;
       for(int i=1; (p2=a.find(s2))!=-1;i++)
       {

           a=a.substr(++p2);
           f3++;
       }
      for(int j=1;(p1=a.find(s1))!=-1;j++)
      {
          a=a.substr(++p1);
          f4++;
      }
       if(f3>0 || f4>0)
       {
           system("cls");
           cout<<"please don't off the screen....";
           Beep(500,5000);
              system("cls");
            cout<<"\n\nOpening.....\n\n\n\n";
            HWND hwnd = GetDesktopWindow();
           ShellExecuteA(hwnd,"open","http://www.amazon.com/",NULL,NULL,SW_SHOWMAXIMIZED);
 Sleep(5000);
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }

char s111[26663]="jee";
int p111,f111=0,p444,f444=0;
int p222,f222=0,p555,f555=0;
int p333,f333=0;
char s222[26326]="wbjee";
char s333[11131]="uem";
char s444[2121]="madhyamik";
char s555[1222]="hs";
for(int v=1;(p111=a.find(s111))!=-1;v++)
{
    a=a.substr(++p111);
    f111++;
}
for(int v=1;(p222=a.find(s222))!=-1;v++)
{
    a=a.substr(++p222);
    f222++;
}
for(int v=1;(p333=a.find(s333))!=-1;v++)
{
    a=a.substr(++p333);
    f333++;
}
if(f111>0)
{
    HWND hwnd = GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://jeemain.nic.in/",NULL,NULL,SW_SHOWMAXIMIZED);
     Sleep(5000);
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
if(f222>0)
{
    HWND hwnd = GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://wbjee.nic.in/",NULL,NULL,SW_SHOWMAXIMIZED);
         Sleep(5000);
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
if(f333>0)
{
       HWND hwnd = GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://uem.edu.in/",NULL,NULL,SW_SHOWMAXIMIZED);
         Sleep(5000);
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
for(int x=1;(p444=a.find(s444))!=-1;x++)
{
a=a.substr(++p444);
f444++;
}
for(int y=1;(p555=a.find(s555))!=-1;y++)
{
a=a.substr(++p555);
f555++;
}
if(f444>0 || f555>0)
{
    HWND hwnd = GetDesktopWindow();
    ShellExecuteA(hwnd,"open","http://wbresults.nic.in//",NULL,NULL,SW_SHOWMAXIMIZED);
    Sleep(5000);
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
    system("cls");
    system("color e");
    cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
    cout<<"please type your next command......\n\n\n";
}
int p666,f666=0;
char s777[232]="iem";
for(int k=1;(p666=a.find(s777))!=-1;k++)
{
    a=a.substr(++p666);
    f666++;
}
if(f666>0)
{
       HWND hwnd = GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://iem.edu.in/",NULL,NULL,SW_SHOWMAXIMIZED);
         Sleep(5000);
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
int p6166,f6166=0;
char s7177[232]="determinants";
for(int k=1;(p6166=a.find(s7177))!=-1;k++)
{
    a=a.substr(++p6166);
    f6166++;
}
if(f6166>0)
{
	int a,b,c,d,e,f,g,h,i,sum=0,f1=1,f2=1,f3=0,f4=1,f5=1,f6=1,f7=0,f8=1,f9=1,f10=1,f11=0,f12=1;
			cout<<"\n\n\n\nenter the values(positive integers) of this determinants(row-wise  taken)...\n\n\n";
			cin>>a;
			cin>>b;
			cin>>c;
			cin>>d;
			cin>>e;
			cin>>f;
			cin>>g;
			cin>>h;
		     cin>>i;
			cout<<" \n";
			cout<<"\n\nnow \n\n\n the determinants is------\n\n";
			cout<<"\n\n\t\t\t\t|     |"<<"\n\n\t\t\t\t|"<<a<<" "<<b<<" "<<c<<"|\n\n\t\t\t\t|"<<d<<" "<<e<<" "<<f<< "|\n\n\t\t\t\t|"<<g<<" "<<h<<" "<<i<<"|\n\n\t\t\t\t|     |"<<endl<<endl;
			printf("\n\n");
			f1=(e*i);
			f2=(f*h);
			f3=(f1-f2);
			f4=(a*f3);
			f5=(d*i);
			f6=(f*g);
			f7=(f5-f6);
			f8=((-1)*b*f7);
			f9=(d*h);
			f10=(e*g);
			f11=(f9-f10);
			f12=(c*f11);
			sum=(f4+f8+f12);
			cout<<"\n\nthe result of this determinants is=  "<<sum;
  cout<<"\n\n \n\n\n\n\n\n\n\n\n\n\n";
  system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
char words57[1000]="login";
int red57,blue57=0;
for(int t=1;(red57=a.find(words57))!=-1;t++)
{
    a=a.substr(++red57);
    blue57++;
}
if( blue57==1 || blue57>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hnwd=GetDesktopWindow();
    ShellExecuteA(hnwd,"open","http://192.168.182.201:9085/Kolkata15/WISHN/Login.jsp",NULL,NULL,NULL);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char words5117[1000]="wishnet";
int red5117,blue5117=0;
for(int t=1;(red5117=a.find(words5117))!=-1;t++)
{
    a=a.substr(++red5117);
    blue5117++;
}
if( blue5117==1 || blue5117>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hnwd=GetDesktopWindow();
    ShellExecuteA(hnwd,"open","http://192.168.182.201:9085/Kolkata15/WISHN/Login.jsp",NULL,NULL,NULL);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char words517[1000]="internet";
int red517,blue517=0;
for(int t=1;(red517=a.find(words517))!=-1;t++)
{
    a=a.substr(++red517);
    blue517++;
}
if( blue517==1 || blue517>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hnwd=GetDesktopWindow();
    ShellExecuteA(hnwd,"open","http://192.168.182.201:9085/Kolkata15/WISHN/Login.jsp",NULL,NULL,NULL);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char words51157[1000]="restuarent";
int red51157,blue51157=0;
for(int t=1;(red51157=a.find(words51157))!=-1;t++)
{
    a=a.substr(++red51157);
    blue51157++;
}
if( blue51157==1 || blue51157>1 )
{
    cout<<"\n\n\n\n\nopening...\n\n\n\n\n";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    system("cls");
system("Rb.exe");
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char fuck[1122]="integration";
int poti,gu=0;
for(int p=1;(poti=a.find(fuck))!=-1;p++)
{
    a=a.substr(++poti);
    gu++;
}
if(gu>0)
{
    system("cls");
    system("color f0");
    cout<<"\n\n\t\t\t  | Formulas |\n\t\t\t*______________*\n";
    cout<<endl<<endl<<"    "<<char(244)<<"\n1-->|sin(X)dx = (-1)cos(X) + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n2-->|cos(X)dx  = (+1)sin(X) + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
        cout<<endl<<endl<<"    "<<char(244)<<"\n3-->|tan(X)dx  = (-1)log|cos(X)| + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
       cout<<endl<<endl<<"    "<<char(244)<<"\n4-->|cosec(X)dx  = (+1)log|cosec(x)-cot(x)| + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n5-->|cosec(X)dx  = (+1)log|tan(X/2)| + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
         cout<<endl<<endl<<"    "<<char(244)<<"\n6-->|sec(X)dx  = (+1)log|sec(x)+tan(x)| + C  [C=Integrating Constant]";
        cout<<endl<<"    "<<char(245);
       cout<<endl<<endl<<"    "<<char(244)<<"\n7-->|sec(X)dx  = (+1)log|tan(x/2+(pai)/4| + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n8-->|cot(X)dx  = (+1)log|sin(x)| + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n9-->|sec(X)tan(X)dx  = (+1)sec(X) + C  [C=Integrating Constant]";
     cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n10->|cosec(X)cot(X)dx  = (-1)cosec(X) + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n11->| dx = x + C  [C=Integrating Constant]";
        cout<<endl<<"    "<<char(245);
  cout<<endl<<endl<<"    "<<char(244)<<"\n12->|sec^2(x)dx = tan(x) + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
      cout<<endl<<endl<<"    "<<char(244)<<"\n13->|cosec^2(x)dx = (-1)cot(x) + C  [C=Integrating Constant]";
      cout<<endl<<"    "<<char(245);
          cout<<endl<<endl<<"    "<<char(244)<<"\n14->|tan^2(x)dx = tan(x)-(x) + C  [C=Integrating Constant]";
      cout<<endl<<"    "<<char(245);
         cout<<endl<<endl<<"    "<<char(244)<<"\n15->|cot^2(x)dx = (-1)cot(x)-(x) + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
     cout<<endl<<endl<<"    "<<char(244)<<"\n16->|sin^2(x)dx = (x/2)-(sin2x/4) + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
      cout<<endl<<endl<<"    "<<char(244)<<"\n17->|cos^2(x)dx = (x/2)+(sin2x/4)  + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
        cout<<endl<<endl<<"    "<<char(244)<<"\n18->|sin(mx)dx = (-1){cos(mx)/m} + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
     cout<<endl<<endl<<"    "<<char(244)<<"\n19->|cos(mx)dx = sin(mx)/m  + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
         cout<<endl<<endl<<"    "<<char(244)<<"\n20->|f(x)f'(x)dx = [{f(x)}^2]/2  + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
             cout<<endl<<endl<<"    "<<char(244)<<"\n21->|dx/(x^2+a^2) = (1/a)*{tan^-1(x/a)} + C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                cout<<endl<<endl<<"    "<<char(244)<<"\n22->|dx/root(x^2+a^2) = log|x+root(x^2+a^2)|+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                    cout<<endl<<endl<<"    "<<char(244)<<"\n23->|dx/root(x^2-a^2) = log|x+root(x^2-a^2)|+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                        cout<<endl<<endl<<"    "<<char(244)<<"\n24->|dx/(x^2-a^2) = (1/2a)*log|(x-a)/(x+a)|+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                        cout<<endl<<endl<<"    "<<char(244)<<"\n25->|dx/(a^2-x^2) =  (1/2a)*log|(a+x)/(a-x)|+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                            cout<<endl<<endl<<"    "<<char(244)<<"\n26->|uvdx = u"<<char(244)<<"vdx-"<<char(244)<<"[{d(u)/dx}*"<<char(244)<<"vdx]+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245)<<"        "<<char(245)<<"    "<<char(245)<<"           "<<char(245);
                               cout<<endl<<endl<<"    "<<char(244)<<"\n27->|e^mx=  (e^mx)/m+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                                 cout<<endl<<endl<<"    "<<char(244)<<"\n28->|a^mx=  (a^mx)/{mlog(a)}+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                                     cout<<endl<<endl<<"    "<<char(244)<<"\n29->|e^x[f(x)+f'(x)]dx=  {e^x*f(x)}+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
                            cout<<endl<<endl<<"    "<<char(244)<<"\n30->|dx/root(a^2-x^2) =  sin^-1(x/a)+ C  [C=Integrating Constant]";
    cout<<endl<<"    "<<char(245);
       cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

 char chopsi1[12321]="diagram";
 char chopsi2[12321]="pattern";
 int cutlet,lolipop=0;
 for(int i=1;(cutlet=a.find(chopsi1))!=-1 || (cutlet=a.find(chopsi2))!=-1;i++)
 {
     a=a.substr(++cutlet);
     lolipop++;
 }
 if(lolipop>0)
 {
system("cls");
SetColor(44);
main:
    system("cls");
cout<<"MENU\n------->\n\n";
SetColor(46);
cout<<"1  ->  Square\n\n";
cout<<"2  ->   Right Triangles\n\n";
cout<<"3  ->   Pyramids\n\n";
cout<<"4  ->   Pascal Triangle\n\n";
int choice;
cout<<"Enter your choice :: ";
cin>>choice;
switch(choice)
{
        case 1:  { system("cls");
     SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);

int r=0;
            printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";
}
   SetColor(44);
   printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
int go=0;
    while(1)
{
    r=0;
    switch((r=getch()))
    {
    case KEY_DOWN : go++;
     if(go==1)
     {
         pod:
             system("cls");
              SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


         printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(45);
cout<<"*";
}
cout<<"\n\t\t\t\t";
}
   SetColor(44);
      printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf( "%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   int n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the range ::  ";
    cin>>n;
      cout<<"\n\t\t\t\t";
        for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
SetColor(45);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }
          if(go==2)
     {
          system("cls");
               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                 printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";
}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(45);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
    system("cls");
    char ch;
     SetColor(47);
    cout<<"\n\n\tenter the last alphabate in capital :: ";
    cin>>ch;
    printf("\n\t\t\t\t");
    for(char i='A';i<=ch;i++)
{
for(char j='A';j<=ch;j++)
{
    SetColor(45);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
cout<<"\n\n\n\t\t\t\t";
system("pause");
goto pod;
}
     }

                    if(go==3)
     {
          system("cls");

               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(45);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
    char n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last capital alphabet  ::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
        for(char i=n;i>='A';i--)
{
for(char j=n;j>='A';j--)
{
SetColor(45);
printf(" %c",i);
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }


                    if(go==4)
     {
          system("cls");
               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(45);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   char n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last capital alphabet ::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
        for(char i='A';i<=n;i++)
{
for(char j='A';j<=n;j++)
{
SetColor(47);
cout<<j;
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }

         if(go==5)
     {
          system("cls");

               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(45);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   char n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last capital alphabet ::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
 for(char i=n;i>='A';i--)
{
for(char j=n;j>='A';j--)
{
    SetColor(45);
printf(" %c ",j);
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }

     if( go==6)
     {
          system("cls");

               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(45);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   int n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last number::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
 for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
    SetColor(45);
printf(" %d ",j);
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }
     if(go==7)
     {
     system("cls");

               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(45);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   int n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last number::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
 for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
    SetColor(45);
printf(" %d ",i);
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }

     if(go==8)
     {
         system("cls");
               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(45);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   int n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last integer ::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
for(int i=n;i>=1;i--)
{
for(int j=1;j<=n;j++)
{
    SetColor(45);
printf("%d ",i);
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }

     if(go==9)
     {
         system("cls");
               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(47);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(45);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   int n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last integer value ::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
for(int i=1;i<=n;i++)
{
for(int j=n;j>=1;j--)
{
    SetColor(45);
printf("%d ",j);
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }

               if(go==10)
     {
          system("cls");
          go=1;
               SetColor(46);
     cout<<"\t\t\t\tSquare Patterns";
      SetColor(42);
     cout<<"\n\t\t\t*_____________________________*\n\n\t\t\t";
     SetColor(44);


                  printf("1. ---> ");
     for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
SetColor(45);
cout<<"*";
}
cout<<"\n\t\t\t\t";

}
   SetColor(44);
         printf("\n\t\t\t2. ---> ");
for(char i='A';i<='E';i++)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t3. ---> ");
for(char i='E';i>='A';i--)
{
for(char j=1;j<=5;j++)
{
    SetColor(47);
printf("%c ",i);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t4. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='A';j<='E';j++)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t5. ---> ");
for(char i='E';i>='A';i--)
{
for(char j='E';j>='A';j--)
{
    SetColor(47);
printf("%c ",j);
}
printf("\n\t\t\t\t");
}

SetColor(44);
   printf("\n\t\t\t6. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t7. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t8. ---> ");
for(int i=5;i>=1;i--)
{
for(int j=1;j<=5;j++)
{
    SetColor(47);
printf("%d ",i);
}
printf("\n\t\t\t\t");
}
SetColor(44);
   printf("\n\t\t\t9. ---> ");
for(int i=1;i<=5;i++)
{
for(int j=5;j>=1;j--)
{
    SetColor(47);
printf("%d ",j);
}
printf("\n\t\t\t\t");
}
if(getch()==13)
{
   char n;
    system("cls");
         SetColor(47);
    cout<<"\n\nenter the last capital alphabet ::  ";
    cin>>n;
    cout<<"\n\t\t\t\t";
        for(char i=n;i>='A';i--)
{
for(char j=n;j>='A';j--)
{
SetColor(47);
cout<<i;
}
cout<<"\n\t\t\t\t";

}
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod;
}
     }
     break;
    case ESC_KEY :
        {
            goto main;

}
break;
    }

    }
}
        break;
            case 2:          {
   system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
int r1=0;
int go3=0;
SetColor(42);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(42);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(42);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(42);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(42);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");
    while(1)
{
    r1=0;
    switch((r1=getch()))
    {
    case KEY_DOWN : go3++;
                                            if(go3==1)
                                            {
                                                 pod1:
                                                   system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
SetColor(44);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(42);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(42);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(42);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(42);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");
if(getch()==13)
{
    int n;
    system("cls");
    printf("ENTER  THE  RANGE  ::  ");
    scanf("%d",&n);
    printf("\n\n\n\t\t\t\t");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        cout<<endl<<"\t\t\t\t";
    }
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod1;
}
                                            }
                                                 if(go3==2)
                                            {

                                                                                                 system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
SetColor(42);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(44);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(42);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(42);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(42);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");
if(getch()==13)
{
     int n;
    system("cls");
    printf("ENTER  THE  RANGE  ::  ");
    scanf("%d",&n);
    printf("\n\n\n\t\t\t\t");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        cout<<endl<<"\t\t\t\t";
    }
    cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod1;
}
                                            }
                                                 if(go3==3)
                                            {

                                                                                                 system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
SetColor(42);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(42);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(44);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(42);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(42);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");
if(getch()==13)
{
            system("cls");
       char n;
       printf("enter the last charater(in capital) to create Lower Triangle of this format ::  ");
       scanf("%c",&n);
       printf("\n\n\t\t\t");
for(char i='A';i<=n;i++)
{
    for(char j='A';j<=i;j++)
    {
        printf("%c ",i);
    }
    printf("\n\t\t\t");
}
    cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod1;
}
                                            }
                                                 if(go3==4)
                                            {

                                                                                                 system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
SetColor(42);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(42);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(42);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(44);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(42);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");
if(getch()==13)
   {
            int n;
    system("cls");
    printf("ENTER  THE  RANGE  ::  ");
    scanf("%d",&n);
    printf("\n\n\n\t\t\t\t");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        cout<<endl<<"\t\t\t\t";
    }
       cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod1;}
                                            }
                                                 if(go3==5)
                                            {
                                                                                                 system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
SetColor(42);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(42);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(42);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(42);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(44);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");
    if(getch()==13)
   {
       system("cls");
       char n;
       printf("enter the last charater(in capital) to create Lower Triangle of this format ::  ");
       scanf("%c",&n);
       printf("\n\n\t\t\t");
for(char i='A';i<=n;i++)
{
    for(char j='A';j<=i;j++)
    {
        printf("%c ",j);
    }
    printf("\n\t\t\t");
}
       cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod1;}
                                            }
                                            if(go3==6)
                                            {

                                                go3=1;
                                                                                                 system("cls");
     SetColor(47);
     cout<<"\t\t\t\tLower Triangle Patterns";
      SetColor(45);
     cout<<"\n\t\t\t*______________________________________*\n\n\t\t\t";
     SetColor(44);
SetColor(44);
printf(" 1>--> ");
SetColor(46);
printf("*\n\t\t\t       **\n\t\t\t       ***\n\t\t\t       ****\n\t\t\t       *****");
SetColor(42);
printf("\n\n\t\t\t 2>-->");
SetColor(46);
printf(" 1\n\t\t\t       22\n\t\t\t       333\n\t\t\t       4444\n\t\t\t       55555");
SetColor(42);
printf("\n\n\t\t\t 3>--> ");
SetColor(46);
printf("A\n\t\t\t       BB\n\t\t\t       CCC\n\t\t\t       DDDD\n\t\t\t       EEEEE");
SetColor(42);
printf("\n\n\t\t\t 4>--> ");
SetColor(46);
printf("1\n\t\t\t       12\n\t\t\t       123\n\t\t\t       1234\n\t\t\t       12345");
SetColor(42);
printf("\n\n\t\t\t 5>-->");
SetColor(46);
printf(" A\n\t\t\t       AB\n\t\t\t       ABC\n\t\t\t       ABCD\n\t\t\t       ABCDE");

if(getch()==13)
{
    int n;
    system("cls");
    printf("ENTER  THE  RANGE  ::  ");
    scanf("%d",&n);
    printf("\n\n\n\t\t\t\t");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        cout<<endl<<"\t\t\t\t";
    }
cout<<"\n\n\n\t\t\t\t\t";
system("pause");
goto pod1;
}

                                            }
                                            break;
     case ESC_KEY :
        {
            goto main;

}
break;


    }

   }
   }
        break;
            case 3: {HWND hwnd=GetDesktopWindow();
                ShellExecuteA(hwnd,NULL,"https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-c/",NULL,NULL,SW_MAXIMIZE) ;
                       cout<<"\n\n";
system("pause");
goto main;
            }
        break;
            case 4:
                {
                                  system("cls");
                    int rows;
cout<<"Rows ==> ";
cin>>rows;
int n=rows;
int sp,dis,value=1;
for(int i=0;i<rows;i++)
{
    cout<<"\t\t\t";
    for(int sp=0;sp<n;sp++)
    {
        cout<<" ";
    }
    n--;
    for(dis=0;dis<=i;dis++)
    {
        if(rows==0 || dis==0)
        value=1;
        else
            value=value*(i-dis+1)/dis;
        cout<<value<<" ";
    }
    cout<<"\n"<<"\n";
}
cout<<"\n\n\n\n\n";
system("pause");
goto main;
                }
        break;
            case ESC_KEY :
                 system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
break;
}


       cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";



}
char hcf1[522]="hcf";
char hcf2[622]="highest common factor";
char hcf3[722]="gosagu";
int jaiga,jaiga2,jaiga3;
int potaka1=0,potaka2=0,potaka3=0;
for(int i=1;(jaiga=a.find(hcf1))!=-1;i++)
{
      a=a.substr(++jaiga);
      potaka1++;
}
for(int i=1;(jaiga2=a.find(hcf2))!=-1;i++)
{
    a=a.substr(++jaiga2);
potaka2++;
}
    for(int i=1;(jaiga3=a.find(hcf3))!=-1;i++)
{
    a=a.substr(++jaiga3);
    potaka3++;
}
if(potaka1>0 || potaka2>0 || potaka3>0)
{
     int i,j,h,n,a[100];

    printf("\n\nEnter how many numbers :  ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
        {
            printf("\n\nEnter a Number :  ");
            scanf("%d",& a[i]);
        }
            for(i=0;i<n-1;i++)
                {
                     h=hcf(a[i],a[i+1]);
                     a[i+1]=h;
                }
                     printf("\n\nThe HCF is :  %d",h);
                     cout<<endl<<endl<<endl;
 system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
}
                   int hcf(int o,int p)
         {
              if(o%p==0)
               {
                      return p;
               }
              else
              {
                      return(hcf(p,o%p));
              }
         }

};


        void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}




int main()
{
    hellow ob;
    mack ob1;
    Fibonacci ob2;
    Bye ob3;
    Evenodd ob4;
    THANK ob5;
    autopoly ob6;
    addition ob7;
    morning ob8;
    musicc ob9;
    eveningg ob10;
    n8 ob11;
    afternoon ob12;
    HOME ob13;
    hi ob14;
    yoo ob15;
    loveu ob16;
    goog ob17;
    multiplicationtable ob18;
    calc ob19;
    factorial ob20;
    hay ob21;
    youtube ob22;
    movie ob23;
    game ob24;
 char password1[1000]="BISWA";
    char majicc1[2112];
    int r1;
    label_2:
    system("color a");
    cout<<"\n********************************************************************************\n\n\t\t     Enter the password to activate MACK ";
    cout<<"\n\n\n********************************************************************************\n";
   cout<<"\n\n\t\t\t  PASSWORD ::--> ";
     scanf("%s",majicc1);
       r1=strcmp(majicc1,password1);
    if(r1==0)
    {
        system("color b");
        cout<<"\n\n\n\n\n\t\t\t   password match!!!!";
          Sleep(2000);
        system("cls");
         system("color C");
	cout<<"\n\n\n\n\n"<<"                .....   Wellcome  Sir   ..... ";
	Sleep(1000);
	cout<<"\n\n            "<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
    Sleep(2000);
	cout<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	    Sleep(1000);
	cout<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	    Sleep(1000);
	cout<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	 Sleep(2000);
	system("cls");
	    system("mode 1000");
cout<<"\n\n\n\n\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
cout<<"\n\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<"\t\t\t"<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<char(178);
for(int i=0;i<2;i++)
{
Beep(150,1000);
system("color BA");
Beep(250,1000);
system("color CB");
Beep(350,1000);
system("color DC");
Beep(450,1000);
system("color ED");
Beep(550,1000);
system("color FE");
Beep(650,1000);
system("color 1F");
Beep(750,1000);
system("color 21");
Beep(850,1000);
system("color 32");
Beep(950,1000);
system("color 43");
Beep(900,1000);
system("color 54");
Beep(800,1000);
system("color 65");
Beep(700,1000);
system("color 76");
Beep(600,1000);
system("color 87");
Beep(500,1000);
system("color 98");
Beep(400,1000);
system("color A9");
Beep(300,1000);
system("color BA");
Beep(200,1000);
system("color DB");
Beep(100,1000);
system("color ED");
Beep(80,1000);
system("color FE");
Beep(150,1000);
system("color 0F");
}
system("cls");

    system("title MACK");
    system("mode 1000");
    printf("\n\n\t\t\t");
int i,j;
for(i=0;i<=height;i++)
{
for(j=0;j<=width;j++)
{
if(i==0 || i==height || j==0 || j==width)
{
 SetColor(44);
printf("%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177);
SetColor(43);
}
else
{
SetColor(46);
printf(" M A C K ");
SetColor(44);
}
}
    printf("\n\t\t\t");
}

printf("\n\n\n\n");
cout<<"\n\t\t\t\tMACK IS ACTIVATE..........................\n\n\n\n\t\t\t\t...HELLO SIR....";
Sleep(5000);
system("cls");
    system("mode 1000");
    while(1)
    {
        string a;
        getline(cin,a);
        transform(a.begin(),a.end(),a.begin(),  ::tolower);
        ob.helloww(a);
        ob1.MACK(a);
        ob2.fibonacci(a);
        ob3.bye(a);
        ob4.oddeven(a);
        ob4.evenodd(a);
        ob5.thankus(a);
       ob6.aautopoly(a);
       ob7.add(a);
       ob7.sum(a);
       ob8.gm(a);
       ob9.music(a);
        ob10.evening(a);
        ob11.night(a);
        ob12.noon(a);
        ob13.home(a);
        ob14.hii(a);
        ob15.yo(a);
        ob16.lu(a);
        ob17.google(a);
        ob18.mpt(a);
        ob19.calculator(a);
        ob20.fact(a);
        ob21.howareyou(a);
        ob22.youtubeon(a);
        ob23.film(a);
        ob24.ggaammee(a);
        ob18.amstrong(a);
        ob10.vowelconsonant(a);
        ob18.amstrongg(a);
        ob20.majicsabtv(a);
        ob18.zeesab(a);
        ob24.facebooknotepadMSO(a);
        ob1.pmhobbybosecretdesktopshutdownresart(a);
        ob4.datetimechumu(a);
        ob10.cmdwhoareu(a);
        ob.digitalphabatespacereverse(a);
        ob2.graphpunctuationcontrolprintable(a);
        ob.alphanumericpalindrome(a);
        ob1.removereplacesplit(a);
       ob23.biswahellofashion(a);
    }
    }
    else
    {
        system("color c");
        cout<<"\n\n\n\n\t\t\t\t\t\tpassword not match !!!\a\a\a";
        Sleep(1000);
        system("cls");
        goto label_2;
    }



    return 0;
        }


