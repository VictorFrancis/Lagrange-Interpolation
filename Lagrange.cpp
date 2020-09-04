#include<iostream>

using namespace std;

float interpolate(int tableX[], int tableY[], int newDataX, int numberOfData){

    float newDataY = 0;

    for(int i=0; i<numberOfData; i++){

        float y = tableY[i];

        for(int j=0; j<numberOfData; j++){
            if(j!=i){
                y = y*(newDataX - tableX[j])/(tableX[i] - tableX[j]);
            }
        }

        newDataY = newDataY + y;
    }

    return newDataY;
}

int main(){

        int numberOfData;
        float newDataX;
        cout<<"Enter number of Data points: ";
        cin>>numberOfData;

        int tableX[numberOfData];
        int tableY[numberOfData];

        for(int i=0; i<numberOfData; ++i){
            cout<<"Enter Data points (x,y): ";
            cin>>tableX[i]>>tableY[i];
        }

        cout<<"Enter x for New Data: ";
        cin>>newDataX;

        cout<<"Value of f() is: "<<interpolate(tableX,tableY,newDataX,numberOfData);

        return 0;
}
