#include <iostream>
using namespace std;

class Task{
    unsigned int id;
    string body;

public:
    Task(){
        this->id = 0;
        this->body = "";
    }

    Task(unsigned int id, string body){
        this->id = id;
        this->body = body;
    }

    int getId(){return this->id;}
    string getBody(){return this->body;}
};

class Todo{
    Task *activeTasks;
    Task *passiveTasks;

public:
    Todo(){
        activeTasks = nullptr;
        passiveTask = nullptr;
    }
};

int main(){

}
