#include <iostream>
#include "LinearRegression.h"

using namespace std;



void fires_vs_theft(){
    double fires[] = {6.2, 9.5, 10.5, 7.7, 8.6, 34.1, 11, 6.9, 7.3, 15.1, 29.1, 2.2, 5.7, 2, 2.5, 4, 5.4, 2.2, 7.2,
                      15.1, 16.5, 18.4, 36.2, 39.7, 18.5, 23.3, 12.2, 5.6, 21.8, 21.6, 9, 3.6, 5, 28.6, 17.4, 11.3, 3.4,
                      11.9, 10.5, 10.7, 10.8, 4.8};
    
    double theft[] = {29, 44, 36, 37, 53, 68, 75, 18, 31, 25, 34, 14, 11, 11, 22, 16, 27, 9, 29, 30, 40, 32, 41, 147,
                      22, 29, 46, 23, 4, 31, 39, 15, 32, 27, 32, 34, 17, 46, 42, 43, 34, 19};
    
    LinearRegression lr(fires, theft, 42);
    cout<<"Enter learning rate alpha(default: 0.01)";
    double alpha;
    cin>>alpha;
    
    cout<<"Enter number of iteration (default: 1500): ";
    int iterations;
    cin>>iterations;

    cout<<"Training model .."<<endl;
    
    lr.train(alpha, iterations);
    cout<<"Model has been trained enter fires: ";
    double x;
    cin>>x;
   
    double temperature = lr.predict(x);
    cout<<"Estimated theft: "<<temperature <<endl;

}
int main(){
    
    fires_vs_theft();

    return 0;
}
