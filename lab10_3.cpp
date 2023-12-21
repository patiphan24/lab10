#include <iostream>
#include <iomanip>
#include<cmath>
#include<string>
#include<fstream>

using namespace std;

int main(){
    double count = 0;
    double sum;
    double sum2;
    string text;
    ifstream source("score.txt");
    while(getline(source,text)){
        sum += atof(text.c_str());
        count++;
        sum2 += pow(atof(text.c_str()),2);
    }
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt(sum2/count-pow(sum/count,2));
}