#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;

ofstream myfile {"abc.txt"};
         
         if(my file)
{  
           myfile << a<< " "<< b << " "<< c << " "<<endl;
}
     else
cout << "There is an error opening abc.txt";
myfile.close ();
 
   return 0;
}
