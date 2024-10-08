//Uses a class to provide the details of a course module
#include <iostream>

using namespace std;

class Module
{
public:
  Module(string name, string code, string lecturer_name, int num_students);
  //Initialises the module name, code, lecturer's name and number of students
  //to details entered by the user.

  Module();
  //Initialises the module name, code and lecturer's name to be blank;
  //and the number of students to be 0.

  void set(string name, string code, string lecturer_name, int num_students);
  //Postcondition: the module details have been set to provide the module's
  //name and code, the lecturer's name and the number of students taking the module.

  string get_moduleName() const;
  //Returns the name of the module.

  string get_moduleCode() const;
  //Returns the module code.

  string get_lecturer() const;
  //Returns the name of the lecturer presenting the module.

  int get_nrStudents() const;
  //Returns the number of students taking the module.

  void output(ostream& outs);
  //Precondition: If outs is a file output stream, then outs
  //has already been connected to a file.

private:
  string moduleName;
  string moduleCode;
  string lecturer;
  int nrStudents;
};
int main()
{
  Module module1;
  string name, code, lecturer_name;
  int num_students;
  cout << "Start Test." << endl;
  cout << "-----------" << endl;
  module1.set(name, code, lecturer_name, num_students);
  cout << endl << "The module details are as follows: " << endl;
  cout << "----------------------------------" << endl;
  module1.output(cout);
  return 0;
}
Module::Module(string name, string code, string lecturer_name, int num_students)
{
  moduleName = name;
  moduleCode = code;
  lecturer = lecturer_name;
  nrStudents = num_students;
}
Module::Module() : moduleName(""), moduleCode(""), lecturer(""), nrStudents(0)
{
  //Body intentionally empty.
}
void Module::set(string name, string code, string lecturer_name, int num_students)
{
  cout << "Enter the module name: ";
  getline(cin, name);
  cout << "Enter the module code: ";
  getline(cin, code);
  cout << "Enter the lecturer's name: ";
  getline(cin, lecturer_name);
  cout << "Enter the number of students: ";
  cin >> num_students;
  moduleName = name;
  moduleCode = code;
  lecturer = lecturer_name;
  nrStudents = num_students;
}
string Module::get_moduleName() const
{
  return (moduleName);
}
string Module::get_moduleCode() const
{
  return (moduleCode);
}
string Module::get_lecturer() const
{
  return (lecturer);
}
int Module::get_nrStudents() const
{
  return(nrStudents);
}
void Module::output(ostream& outs)
{
  outs  << "Module Name: " << moduleName << ".\n"
        << "Module Code: " << moduleCode << ".\n"
        << "Lecturer: " << lecturer << ".\n"
        << "Number of students: " << nrStudents << ".\n";
}
