#include<iostream>
using namespace std;
class car{
    public:
   virtual void start(){
        cout<<"car started";
    }
    void stop(){
        cout<<"car stoped";
    }
};
class inovva:public car{
    void start(){
        cout<<"inova started";
    }
    void stop(){
        cout<<"inova stoped";
    }
};
class swift:public car{
    void start(){
        cout<<"swift started";
    }
    void stop(){
        cout<<"swift stoped";
    }
};
int main(){
    car *p=new inovva();
    p->start();
    cout<<endl;
    p=new swift();
    p->start();

}