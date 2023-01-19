#include <iostream>
using namespace std;
int main() 
{
    int num_of_inputs;

    float p1 = 0.0;
    float p2 = 0.0;
    float p3 = 0.0;
    float p4 = 0.0;
    float p5 = 0.0;
    
    int count_P1 = 0;
    int count_P2 = 0;
    int count_P3 = 0;
    int count_P4 = 0;
    int count_P5= 0;
    
    cout<<"Enter Input Count: ";
    cin>>num_of_inputs;
    for (int i = 0; i < num_of_inputs; i++) 
    {
        int currentNumber = 0;
        cout<<"Enter Current Number:"<<endl;
        cin>>currentNumber;
        if (currentNumber < 200)
        {
            count_P1++;
        }
        else if (currentNumber >= 200 && currentNumber <= 399)
        {
            count_P2++;
        }
        else if (currentNumber >= 400 && currentNumber <= 599)
        {
            count_P3++;
        }
        else if (currentNumber > 600 && currentNumber <= 799)
        {
            count_P4++;
        }
        else
        {
            count_P5++;
        }
    }

    p1 = (count_P1 * 100.0) / num_of_inputs;
    p2 = count_P2 * 100 / num_of_inputs;
    p3 = count_P3 * 100 / num_of_inputs;
    p4 = count_P4 * 100 / num_of_inputs;
    p5 = count_P5 * 100 / num_of_inputs;
    cout<<"Output"<<endl;
    cout<<(p1)<<"%age between 1 to 200"<<endl;
    cout<<(p2)<<"%age between 200 to 400"<<endl;
    cout<<(p3)<<"%age between 400 to 600"<<endl;
    cout<<(p4)<<"%age between 600 to 800"<<endl;
    cout<<(p5)<<"%age between 800 to 1000"<<endl;

    return 0;
}