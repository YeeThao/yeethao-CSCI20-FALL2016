// Yee Thao
// October 19, 2016

#include <iostream>
using namespace std;

class RPSgame
{
    private:
        string computerDecision;
        string userDecision;
    public:
        RPSgame(){
            string computerDecision = " ";
            string userDecision = " ";
        }
        RPSgame(string compD, string userI){
            computerDecision = compD;
            userDecision = userI;
        }
        void SetRand(string computerDecision);
        void SetUserInput(string userDecision);
        double GetRandD() const;
        double GetUserIn() const;
        double GetWinner() const;
        double PrintGame() const;
};

void RPSgame::SetRand(string computerDecision)
{
    int compDec;
    srand(time(0));
    compDec = (rand()%(3-1) + 1);
    switch(compDec)
    {
        case 1:
            "Rock";
            break;
        case 2:
            "Paper";
            break;
        case 3:
            "Scissor";
            break;
    }
    return;
}

void RPSgame::SetUserInput(string userDecision)
{
    userDecision = userDecision;
}

double RPSgame::GetRandD() const
{
    return computerDecision;
}

double RPSgame::GetUserIn() const 
{
    return userDecision;
}

double RPSgame::GetWinner() const
{
    if(GetRand() = 'Rock' && GetUserIn() = 'Rock')
    {
        "Tie"
    }
    else if(GetRandD() = 'Rock' && GetUserIn() = 'Paper')
    {
        "You win"
    }
    else if(GetRandD() = )
}