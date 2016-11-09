// Yee Thao
// October 19, 2016

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class RPSgame
{
  private:
    int compRand;
    int userInput;
    string compChoice;
    string userChoice;
    string outCome;
  public:
    RPSgame(){
        compRand = 0;
        compChoice = " ";
        userInput = 0;
        userChoice = " ";
    }
    RPSgame(int compR, int userIn){
        compRand = compR;
        userInput = userIn;
    }
    void SetCompRand();
    void SetUserInput(int userIn);
    double GetCompRand() const;
    double GetUserInput() const;
    double PrintGame();
};

void RPSgame::SetCompRand()
{
    srand(time(0));
    compRand = (rand()%(3-1) + 1);
}

void RPSgame::SetUserInput(int userIn)
{
    userInput = userIn;
    return;
}

double RPSgame::GetCompRand() const
{
    return compRand;
}

double RPSgame::GetUserInput() const
{
    return userInput;
}

double RPSgame::PrintGame() 
{
    // switch(compRand)
    // {
    //     case 1:
    //         compChoice = "Rock";
    //         break;
    //     case 2:
    //         compChoice = "Paper";
    //         break;
    //     case 3:
    //         compChoice = "Scissor";
    //         break;
            
    // }
    
    // switch(userInput)
    // {
    //     case 1:
    //         userChoice = "Rock";
    //         break;
    //     case 2:
    //         userChoice = "Paper";
    //         break;
    //     case 3:
    //         userChoice = "Scissor";
    //         break;
    // }
    
    if(userChoice = compChoice)
    {
        outCome = "Tie";
    }
    else if(((userChoice = "Rock") && (compChoice = "Scissor")) || ((userChoice = "Paper" && compChoice = "Rock")) || ((userChoice = "Scissor") && (compChoice = "Paper")))
    {
        outCome = "Victory"
    }
    else
    {
        outCome = "Loss"
    }
    
    
}

int main()
{
    
}