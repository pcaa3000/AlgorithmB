#include "stdlib.h"
#include "stdio.h"
#include "string.h"
class Client
{
private:
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
public:
    Client(char Name[50],char Id[10],float Credit, char Address[100]);
    ~Client();
    void Show();
};

Client::Client(char Name[50],char Id[10],float Credit, char Address[100])
{        
    strcpy(this->Name,Name) ;
    strcpy(this->Id, Id);
    this->Credit=Credit;
    strcpy(this->Address,Address);
}

Client::~Client()
{    
}

void Client::Show()
{
    printf("The client name is: %s \n", this->Name);
    printf("The client Id is: %s \n", this->Id);
    printf("The client Credit is: %f \n", this->Credit);
    printf("The client Address is: %s \n", this->Address);
}

int main(int argc, char const *argv[])
{
    Client Client1((char*) "Camilo Valencia", (char*) "0000000001",1000000, (char*) "Calle 1, Carrera 1 ciudad bolivar");
    Client1.Show();
    return 0;
}
