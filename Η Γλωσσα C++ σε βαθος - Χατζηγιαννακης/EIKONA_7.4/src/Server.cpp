#include <stdio.h>
#include <iostream>
#include "Server.h"
using namespace std;
int Server::getTurn()
{
    turn++;
    return turn;
}
bool Server::stillOpen()
{
    return nowOpen;
}
void Server::serveOne()
{
    if (nowOpen && lastServed<turn)
    {
        lastServed++;
        cout<<" Ο ηπαλληλος "<<name<<" τωρα εξυπηρετει το "<<lastServed<< endl
            <<"τωρα εξυπηρετει το "<<lastServed<<endl;
    }
    if ((lastServed>=turn))
    nowOpen=false;
}

//==============
Server::Server(char letterName):name(letterName)
{
    //ctor skopimos adeios constructor
}

Server::~Server()
{
    //dtor
}
