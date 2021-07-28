  
#include <iostream>

using namespace std;

int main(){
    int a[10][10];
    int b[10][10];
    int mul[10][10];
    int r;
    int c;
    int i;
    int j;
    int k;
    
    printf("Welcome to Dhruv's Matrix Multiplier!  ");
    cout<<"Enter the number of rows= ";    
        cin>>r;    
    cout<<"Enter the number of columns= ";    
        cin>>c;    
    cout<<"Enter the first matrix element=\n";    
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }
    
    for(i=0;i<r;i++){    
        for(j=0;j<c;j++){    
            cout<<mul[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
    return 0;  
    }    
}
