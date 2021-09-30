#include <iostream>
using namespace std;
int main ()

{
    int n;
    cout <<"Enter a positive number: " ;
    cin >> n;
       
        for (int r=1; r <= n; r++)
    {
        
        
      
          for (int a=n-r; a>0; a--)
          cout <<"  ";
        
        for (int c=1; c<=r; c++)

        {
            cout<< "* ";
        }
        cout << endl;


    }
    return 0;
}
