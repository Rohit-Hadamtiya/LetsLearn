#include<iostream>
#include<fstream>
using namespace std;     //To read and write data in file //
class Fl
{ 
    ifstream inf;
    ofstream outf;
    string str;
    string name;
    public:
    Fl()
    {
        inf.open("A.txt",ios::in);
        outf.open("A.txt",ios::app);
    }
    void read()
    {
        if(inf.is_open())
        {
            while(getline(inf,str))
            {
                cout<<str<<endl;
            }
        }
        inf.clear();
        inf.seekg(0,ios::beg);
    }
    void write()
    {
        if(outf.is_open())
        {
            cout<<"Enter the name";
            cin>>name;
            outf<<name;
            outf<<endl;
        }
    }
    ~Fl()
    {
        inf.close();
        outf.close();
    }
};
int main()
{
    int ch;
    char choice;
    Fl ob;
    do
    {
       cout<<"Press 1 for read data"<<endl;
       cout<<"Press 2 for write data"<<endl;
       cin>>ch;
       switch(ch)
       {
        case 1:
        ob.read();
        break;
        case 2:
        ob.write();
        break;
       }
       cout<<"Press y to continue......";
       getchar();
       cin>>choice;
    } while (choice=='y' || choice=='Y');
}