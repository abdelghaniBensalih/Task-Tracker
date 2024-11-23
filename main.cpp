#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Task{
    private:
          int id;
          string title;
          string description;
          string status; // To Do, In Progress, Done
    public:
          Task( int newId, string newTitle, string newDescription, string newStatus ){
            id = newId;
            title = newTitle;
            description = newDescription;
            status = newStatus;
          }

          

          void display(){
            cout << "id: " <<id<< "\ntitle: " <<title<< "\ndescription: " <<description<< "\nstatus: " << status;
          }

};






int main(int argc, char *argv[]){
  string finish;

  while (finish != "finish") {
    cout << "task-CLI >> ";
    cin >> finish;


  }

  
    return 0;

}

/*
   Add, Update, and Delete tasks
Mark a task as in progress or done
List all tasks
List all tasks that are done
List all tasks that are not done
List all tasks that are in progress


*/