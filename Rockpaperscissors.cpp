#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout<<"Let's play rock papers and scissors!"<<endl;
   

    string move;
    

    string elements[3]= {"rock","paper","scissor"};
    
    int user = 0;
    int computer = 0;

    srand(time(0));


    while(user < 3 && computer < 3){

        cout<<"Let's start and play your move!"<<endl;
        cin>>move;
        string element = elements[rand()%3 ];


        if(move == element ){
        cout<<element<<endl;
        cout<<"Oops!"<<endl;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }

    else if((move =="rock" && element =="paper")||
           (move =="paper" && element =="scissor")||
           (move =="scissor" && element =="rock"))
            {
        cout<<element<<endl;
        cout<<"Haha ! Gotcha "<<endl;

        computer ++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }

    else if((move =="rock" && element =="scissor")||
           (move =="paper" && element =="rock")||
           (move =="scissor" && element =="paper"))
           {
        cout<<element<<endl;
        cout<<"Shit ! you got me"<<endl;

        user ++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }
    
    if(user==3){
        cout<<"You win! congrats !";

    }

    if(computer==3){
        cout<<"You lose :( , better luck next time !";
    }

    }
}
