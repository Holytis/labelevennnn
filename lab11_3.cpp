#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int count = 0 ;
    float sum , SD, sum2 ;
    string tx;
    ifstream source("score.txt");
    while(getline(source,tx))
    {
        sum += atof(tx.c_str());
        sum2 += pow(atof(tx.c_str()),2);
        count++;

    }
    SD = sqrt((sum2/count)-pow((sum/count),2));
    cout << "Number of data = "<< count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum/count<<endl;
    cout << "Standard deviation = "<< SD <<endl;
}