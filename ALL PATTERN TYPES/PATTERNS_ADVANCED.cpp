#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n=5;

    cout<<"LEFT LOWER TRIANGLE\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    cout<<"LEFT UPPER TRIANGLE\n";

     for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    cout<<"RIGHT UPPER TRIANGLE\n";

      for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    
    cout<<endl<<endl;
    cout<<"RIGHT LOWER TRIANGLE\n";
      for(int i=1;i<=n;i++){
        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    cout<<endl<<endl;

    cout<<"UPPER PYRAMID PATTERN\n";

    for(int i=1;i<=n;i++){
         for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;

    }

    cout<<endl<<endl;

    cout<<"LOWER PYRAMID PATTERN\n";

    for(int i=1;i<=n;i++){
          
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
         for(int j=i;j<n;j++){
            cout<<"*";
        }
      
        cout<<endl;
    }


    cout<<endl<<endl;
    cout<<"PYRAMID PATTERN\n";
    
    for(int i=1;i<=n;i++){
         for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    
    for(int i=2;i<=n;i++){
          
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
         for(int j=i;j<n;j++){
            cout<<"*";
        }
      
        cout<<endl;
    }

    cout<<"\n\nRIGHT PYRAMID PATTERN\n";
    
    
      for(int i=1;i<=n;i++){
       for(int j=0;j<i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
     for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n\nLEFT PYRAMID PATTERN\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=2;i<=n;i++){
        
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }

        cout<<endl;
    }


cout<<"\n\n\n\nJUST FOR FUN\nPRINTING "<<n<<" DIAMOND PATTERNS\n";

for(int i=1;i<=n;i++){
     
    for(int i=1;i<=n;i++){
         for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    
    for(int i=2;i<=n;i++){
          
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
         for(int j=i;j<n;j++){
            cout<<"*";
        }
      
        cout<<endl;
    }

    cout<<endl;
}


cout<<"\n\n\nDIAMOND IN SQUARE\n";

    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
     for(int i=2;i<=n+1;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
         

        cout<<endl;
    }

    
cout<<"\n\n\n\n X PATTERN\n";

int mid=ceil((double)n/2);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==j){
            cout<<"*";
        }
         if(i!=j){
            cout<<"  ";
        }
        if(i+j==n+1){
          if(i==j){
            continue;
          }
            cout<<"*";
        }
    }
    cout<<endl;
}


cout<<"\n\nNUMBER PATTERN\n";
/*
1
1 2
1 2 3
1 2 3 4
*/

for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

char char_temp='A';
cout<<"\n\n\nALPHABET PATTERN\n";
/*
A
B C
D E F
G H I J
*/

for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
        cout<<char_temp++<<"  ";
    }
    cout<<endl;
}

cout<<"\n\n\nFIBONOCCI PATERNS\n";
/*
1
1 1
1 1 2
1 1 2 3

int first_term=0;
int second_term=1;
int next_term=0;
//0 1 1 2 3 5 8 13 21 34 55 89

for(int i=0;i<=n;i++){
    cout<<first_term<<" ";
    next_term=first_term+second_term;
    first_term=second_term;
    second_term=next_term;
}
cout<<endl;
*/
int fibo_first_term=0;
int fibo_second_term=1;
int fibo_next_term;
for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
       cout<<fibo_first_term<<"  ";

        fibo_next_term=fibo_first_term+fibo_second_term;
        fibo_first_term=fibo_second_term;
        fibo_second_term=fibo_next_term;
    }
    
    cout<<endl;
}

cout<<"\n\n\nFIBONOCCI SERIES ANOTHER PATTERN\n";
 
    for(int i=1;i<=n;i++){
        int first=1;
        int second=1;
         int third=0;
        for(int j=1;j<i;j++){
            cout<<first<<"  ";

            third=first+second;
            first=second;
            second=third;
        }
        cout<<endl;
    }
    

    cout<<endl<<endl;
    cout<<"Spiral Pattern Printing\n";
    int a[][5]={{1,2,3,4,5},
                {14,15,16,17,6},
                {13,20,19,18,7},
                {12,11,10,9,8}};  

    //spiral pattern printing

    int rowstart=0;
    int rowend=sizeof(a)/sizeof(a[0])-1;
    int colstart=0;
    int colend=(sizeof(a[0])/sizeof(a[0][0]))-1;
    
    while(rowstart < rowend && colstart <colend){

        //right to left
        for(int i=colstart;i<=colend;i++){
            cout<<a[rowstart][i]<<" ";
        }
        rowstart++;

        //top to down
        for(int i=rowstart;i<=rowend;i++){
            cout<<a[i][colend]<<" ";
        }
        colend--;

        //left to right
        for(int i=colend;i>=colstart;i--){
            cout<<a[rowend][i]<<" ";
        }
        rowend--;

        //down to top

        for(int i=rowend;i>=rowstart;i--){
            cout<<a[i][colstart]<<" ";
        }
        colstart++;

    }
return 0;
}
