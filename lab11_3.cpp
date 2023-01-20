#include <iostream>
#include <iomanip>
#include <cmath>
#include<fstream>
using namespace std;

int main(){
    ifstream source ;
    string textline ;
    double sum=0 , count=0 , Mean , sum2=0 , SD;
    source.open("score.txt");

    while (getline(source,textline))
    {
        sum = sum + stod(textline);
        sum2 = sum2 + pow(stod(textline),2);
        count++;

    }
    Mean = sum/count;
    SD = sqrt(sum2/count-pow(Mean,2));

    cout << "Number of data = "<<count << endl;
    cout << setprecision(3);
    cout << "Mean = "<<Mean << endl;
    cout << "Standard deviation = "<<SD;
}
