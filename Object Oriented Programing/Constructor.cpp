
//this is constructor overloding which is compile time polymorphism...
#include<iostream>
using namespace std;
class student{
public:    
    string name;
    int rollno;
    double score;
    student(){//Non Paramaterised Constructer
        cout<<"I am constructor"<<endl;
    }
    student(string name,int rollno,double score){// Paramaterised Constructer
        this->name=name;
        this->rollno=rollno;
        this->score=score;
    }
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"rollno :"<<rollno<<endl;
        cout<<"score :"<<score;
    }
};
int main(){
    student s1("sourav pan",137,9);
    student ();//called this because first called parameterised constructor
    s1.getInfo();
    return 0;
}