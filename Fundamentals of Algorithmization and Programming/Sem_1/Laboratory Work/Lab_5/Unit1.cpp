//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include <math.h>

#include <stdio.h>

#include <conio.h>

#include <iostream.h>

//---------------------------------------------------------------------------
#pragma argsused

int main(int argc, char* argv[])
{
       	int *a,n, i, kod;
        cout << "Enter the number of elements in the massif " << endl;
        cin >> n;
        a = (int*) malloc(n+1);
        cout << "Enter 1 if you want to enter the elements of the array yourself" << endl;
        cin >> kod;

        if (kod==1){
                cout << "Enter "<<n<<" numbers" <<endl;
                for(i=0;i<n;i++) cin>>a[i];
                for(i=0;i<n;i++) cout<<"\n a["<<i<<"] = "<<a[i];
        }
	else {
                randomize();
                puts("\n Massiv A");
                for(i=0; i<n;i++) {
                        a[i] = random(21)-10;
                        printf("%4d", a[i]);
                        }
        }
        int maxAindex=0;
        int maxA=0;
        for(i=0; i<n;i++)
                if(a[i]>=0 && a[i]>maxA) {
                            maxAindex=i;
                            maxA=a[i];
                            }
                 cout<<"\n MAX a["<<maxAindex<<"] = "<< maxA;
        int sum=0;
        puts("\n Rezult massiv A ");
        for(i=0; i<maxAindex;i++)
                if(a[i]>=0){
                        sum+= a[i];
                        printf("%4d", a[i]);
                }
        cout<<"\n SUMM = "<<sum;
        puts("\n Press any key ... ");
        delete []a;        
        getch();
return 0;
}


//---------------------------------------------------------------------------
