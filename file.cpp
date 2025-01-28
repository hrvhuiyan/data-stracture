#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std ;
class Bank{
private:
    int total;
    string id;
    struct person{
    string name,ID,address;
    int contact,cash;
}person[100];

public:
    Bank(){
        total=0;
    }
    void choice();
    void perData();
    void show();
    void search ();
    void del();

};
int main(){
    Bank b;
    b.choice();
    string name,id,address,contact,cash;
    ofstream file;
    file.open("project55.txt",ios::out|ios::app);

    getline(cin,name);
    file<<"Welcome"<<endl;
    file.close();
    return 0;
}
void Bank::choice(){
    char ch ;
    while(1){
        cout<<"\n\nPRESS..!!"<<endl;
        cout<<"1.Create new account"<<endl;
        cout<<"2.View customers list"<<endl;
        cout<<"3.Check the details of an account"<<endl;
        cout<<"4.Remove existing account"<<endl;
        cout<<"5.Exit"<<endl;
        ch=getch();
        system("CLS");

        switch(ch){
           case'1':
            Bank::perData();
            break;
           case'2':
            if(total==0){
               cout<<"No data is entered"<<endl;
            }else{
                Bank::show();
            }
            break;
           case'3':
               if(total==0)
                cout<<"No data is entered"<<endl;
               else
            Bank::search();
            break;
           case'4':
            if(total==0){
                cout<<"No data is entered"<<endl;
            }
            else
                Bank::del();
            case'5':
            exit(0);
            break;
            default:
            cout<<"Invalid input"<<endl;
            break;

        }
    }
}
void Bank::perData(){
    cout<<"Enter data of person"<<total+1<<endl;
    cout<<"Enter name:";
    cin>>person[total].name;
    cout<<"ID:";
    cin>>person[total].ID;
    cout<<"Address:";
    cin>>person[total].address;
    cout<<"Contact:";
    cin>>person[total].contact;
    cout<<"Total cash:";
    cin>>person[total].cash;
    total++;
}
void Bank::show(){
    for(int i=0;i<total;i++){
        cout<<"Data of person"<<i+1<<endl;
        cout<<"Name"<<person[i].name<<endl;
        cout<<"ID"<<person[i].ID<<endl;
        cout<<"Address"<<person[i].address<<endl;
        cout<<"Contact"<<person[i].contact<<endl;
        cout<<"Cash"<<person[i].cash<<endl;
    }
}
void Bank::search(){
    cout<<"Enter id of students those data you want to search"<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
      if(id==person[i].ID){
        cout<<"Name:"<<person[i].name<<endl;
        cout<<"ID:"<<person[i].ID<<endl;
        cout<<"Address:"<<person[i].address<<endl;
        cout<<"Contact:"<<person[i].contact<<endl;
        cout<<"Cash:"<<person[i].cash<<endl;
        break;
      }
      if(i==total-1){
        cout<<"No such record found"<<endl;
      }
}
}
void Bank::del(){
    char ch;
    cout<<"Press 1 to remove specific record"<<endl;
    cout<<"press 2 to remove full record"<<endl;
    ch=getch();
    switch(ch){
    case'1':
        cout<<"Enter id of students those data you want to remove"<<endl;
        cin>>id;
        for(int i=0;i<total;i++){
            if(id==person[i].ID){
                for(int j=i;j<total;j++){
                    person[j].name=person[j+1].name;
                    person[j].ID=person[j+1].ID;
                    person[j].address=person[j+1].address;
                    person[j].contact=person[j+1].contact;
                    person[j].cash=person[j+1].cash;
                    total--;
                    cout<<"Your required data i deleted"<<endl;
                    break;
                }
            }
            if(i=total-1){
                cout<<"No such data record found"<<endl;
            }
        }
        break;
    case'2':
        total=0;
        cout<<"All record is deleted"<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
}
