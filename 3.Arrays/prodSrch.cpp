#include <iostream>
using namespace std;

int main()
{
    int iProdid[] = {1, 2, 3, 4, 5};
    int iPrice [] = {257,321, 401, 556, 772};
    int iProd;
    cout <<"Enter product id: ";

    while (cin >> iProd)
    {
        
        for (int i =0; i <=5; i++)
        {
            if (iProd == iProdid[i]){
                cout << "The price is: "<< iPrice[i]<< endl; 
            }
        }
        cout <<"Enter product id: "<< endl;
    }
}