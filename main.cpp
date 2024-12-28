#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Task{
  private:
  static int idIncrement;
  string description;
  string status;
  string createdAt;
  string updatedAt;
  int id;


  public:
  Task(string DESCRIPTION, string STATUS){
    description = DESCRIPTION;
    status = STATUS;
    id = idIncrement++;
  }

};

int Task::idIncrement=0;

/*
Each task should have the following properties:

id: A unique identifier for the task
description: A short description of the task
status: The status of the task (todo, in-progress, done)
createdAt: The date and time when the task was created
updatedAt: The date and time when the task was last updated
*/




int main(int argc, char *argv[]){
  while(true){
    cout << "1. Add a task\n2. Update a task\n3. Delete a task\n4. Mark a task as in progress\n5. Mark a task as done\n6. List all tasks\n7. List all tasks that are done\n8. List all tasks that are not done\n9. List all tasks that are in progress\n10. Exit\n";
    int choice;
    cin >> choice;
    string description;
    string status;
  
    switch (choice)
    {
    case 1:
      cout <<"# adding a new task"<<endl;
      cout <<"task description: ";
      cin>> description;
      cout <<" task status todo,in-progress, done: ";
      cin>> status;
      Task task(description, status);
          
     
      
      break;
    
    default:
      break;
    }
    
  }
}

/*
   Add, Update, and Delete tasks
Mark a task as in progress or done
List all tasks
List all tasks that are done
List all tasks that are not done
List all tasks that are in progress


*/