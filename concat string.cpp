#include<iostream>
using namespace std;

class add{
    char *name;
    int l;
    public:
        add(){};
        add(int l){
            name=new char[l];
        }
        void getval(){
            cin>>name;
        }
        void showval(){
            cout<<name;
        }
        add operator+(add);
};

add add::operator+(add c){
    add t;
    t.l=l+c.l;
    t.name=new char[t.l];
    int i=0,j=0;
    while(name[i]!='\0'){
        t.name[i]=name[i];
        i++;
    }
    while(c.name[j]!='\0'){
        t.name[i]=c.name[j];
        i++,j++;
    }
    t.name[i]='\0';
    return t;
}

int main(){
    add a(10),b(10),c;
    cout<<"Enter 1st string\n";
    a.getval();
    cout<<"Enter 2nd string\n";
    b.getval();
    c=a+b;
    cout<<"Cancated String is ";
    c.showval();
}
