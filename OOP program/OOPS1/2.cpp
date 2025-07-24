#include<iostream>
#include<fstream>
using namespace std;
    
class LibraryCustomer{
  protected:
   string name;
   int id;
   long loan;

   public:
   lc(string n, int i, long l)
   {
    name=n;
    id=i;
    loan=l;
   }

};

class libraryStaff : LibraryCustomer{
 protected:
  double salary;
  int password;

  ls(string n, int i, double s, int p)
  {
    name = n;
    id = i;
    salary = s;
    password = p;
  }
    
};
    
int main(){
    
    
     
    
    
       return 0;
    
}