#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;   
    
    int array[num];

    cout << "Enter elements: ";
    for (size_t i = 0; i < num; i++)
    {
        cin>>array[i];
    }

    for (size_t i = 0; i < num; i++)
    {
        cout<< array[i]<<", ";
    }
    
}
