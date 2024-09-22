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


        if(move =="rock" && element =="rock"){
        cout<<"Rock"<<endl;
        cout<<"Oops!"<<endl;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }

    else if(move =="scissors" && element =="scissor"){
        cout<<"Scissors"<<endl;
        cout<<"Oops!"<<endl;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;

    }

    else if(move =="paper" && element =="paper"){
        cout<<"Paper"<<endl;
        cout<<"Oops!"<<endl;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;

    }

    else if(move =="rock" && element =="paper"){
        cout<<"Paper"<<endl;
        cout<<"Haha ! Gotcha "<<endl;

        computer ++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }

    else if(move =="rock" && element =="scissor"){
        cout<<"scissor"<<endl;
        cout<<"Shit ! you got me"<<endl;

        user ++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }

    else if(move =="paper" && element =="rock"){
        cout<<"rock"<<endl;
        cout<<"Shit ! you got me"<<endl;

        user ++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    
    }

    else if(move =="paper" && element =="scissor"){
        cout<<"scissor"<<endl;
        cout<<"Haha ! Gotcha"<<endl;

        computer++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    }

   
    else if(move =="scissor" && element =="rock"){
        cout<<"rock"<<endl;
        cout<<"Haha ! Gotcha"<<endl;

        computer++;

        cout<<"The scores are :"<<endl;
        cout<<"You: "<<user <<endl;
        cout<<"Me: "<<computer<<endl;
    
    }

    else if(move =="scissor" && element =="paper"){
        cout<<"paper"<<endl;
        cout<<"Shit ! you got me"<<endl;

        user++;

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