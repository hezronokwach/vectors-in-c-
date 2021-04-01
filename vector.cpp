#include<iostream>
#include<vector>

using std::cout;
using std::cin;


class Task{
    int g;
    std::vector<float> demo;

public:
    Task(){
        cout << "input size of vector:";
        cin >> g;
        float s;
        for (int y = 0; y < g; y++)
        {
            cout << "input vector_value:";
            cin >> s;
            demo.push_back(s);
        }
    }

    void display(){
        cout << "(";
        int y;
        for (float x: demo)
        {
            cout << x << ",";
        }
        cout << ")"
             << "\n";
    }
    void Modify(){
        int response;
        cout << "do you wish to change a value?\n"
             << "input 1 if yes and 2 if no\n";
        cin >> response;
        switch (response)
        {
        case 1:
            float r,t;
            cout << "enter value you wish changed:";
            cin >> r;
            for (int j = 0; j < g;j++){
                if(r==demo[j]){
                    cout << "input new value";
                    cin >> t;
                    demo.at(j)=t;
                }
            }
            break;
        case 2:
            cout << "no value will be modified";
            break;
        default:
            cout << "unrecognized response";
            break;
        }
    }
    void Multiply(){
    int answer;
    cout << "do you wish to multiply by a scalar?\n"
         << "enter 1 if yes and 2 if no\n";
    cin >> answer;
    switch (answer)
    {
    case  1:
         float e;
        cout << "input your scalar:\n";
        cin >> e;
        cout << "your resultant vector:\n";
        cout << "(";
        for (int o = 0; o < demo.size();o++){
            cout << (demo.at(o) * e) << ",";
        }
        cout << ")";
        break;

    case 2:
        cout << "no multiplication will be done";
        break;
    default:
        cout << "unrecognized response";
        break;
    }
}
};
int main(){
    Task V;
    V.display();
    V.Modify();
    cout << "\n";
    V.Multiply();
}
