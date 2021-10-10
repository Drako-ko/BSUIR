//---------------------------------------------------------------------------
#include <vcl.h>

#pragma hdrstop

#include <math.h>

#include <stdio.h>

#include <conio.h>

#include <iostream.h>

#include <cstdlib>

#include <ctime>

//---------------------------------------------------------------------------

#pragma argsused
void main()
{
        double **a;
        double **res;
        int i, j, n, kod, imax, jmax;
	        cout << " Input size N : " << endl;
                cin >> n;
                if(n>1){
                 a = new double*[n];
                }
                else{
                        cout << " Error size less 1" << endl;
                        exit;
                }
                for(i=0; i<n;i++)
		        a[i] = new double[n];

                cout << "Enter 1 if you want to enter the elements of the array yourself" << endl;
                cin >> kod;
                if (kod==1){
	                cout << "\n Input Massiv A:" << endl;
                        for(i=0; i<n;i++)
                                for(j=0; j<n;j++)
                                        cin >> a[i][j];
                        for(i=0;i<n;i++){
                                cout << endl;
                                for(j=0; j<n;j++){
                                        cout << " a[" << i << "]""[" << j << "]"" = "<< a[i][j];
                                }
                        }
                }
                else{
                        randomize();
                        puts(" Massiv A ");
                        for(i=0; i<n;i++) {
                                for(j=0; j<n;j++){
                                        a[i][j] = rand() % 45 - 30;
                                }
                        }
                }
                for(i=0;i<n;i++){
                        cout << endl;
                        for(j=0;j<n;j++){
                                cout << " a[" << i << "]""[" << j << "]"" = "<< a[i][j] << "    ";
                        }
                }
                imax = jmax = 0;
                for (i=0; i<n; i++) {
                        for (j=0; j<n; j++){
                                if (fabs(a[i][j])>fabs(a[imax][jmax])) {
                                        imax=i;
                                        jmax=j;
                                }
                        }
                }

                cout << endl << endl;
                cout << " Max a [" <<imax<<"]["<<jmax<<"]="<<a[imax][jmax];
                //---------------------------------------------------------------
                if ((imax+1)<=(n-1)){
                                for (int i = imax; i < n-1; i++){
                                        for (int j = 0; j< n; j++){
                                                a[i][j] = a[i + 1][j];
                                        }
                                }
                           ///*debug
                           cout << endl;
                           for(i=0;i<n;i++){
                               cout << endl;
                               for(j=0; j<n;j++){
                                        cout << " a[" << i << "]""[" << j << "]"" = "<< a[i][j] << "    ";
                               }
                           }
                           //*/
                 }
                 if((jmax+1)<=(n-1)){
                           for (int i = 0; i < n; i++){
                                for (int j = jmax; j < n-1 ; j++){
                                       a[i][j] = a[i][j + 1];
                                }
                           }
                           ///*debug
                           cout << endl;
                           for(i=0;i<n;i++){
                               cout << endl;
                               for(j=0; j<n;j++){
                                        cout << " a[" << i << "]""[" << j << "]"" = "<< a[i][j] << "    ";
                               }
                           }
                           //*/
                }
                cout << endl;
                /*debug
                for(i=0;i<n;i++){
                                cout << endl;
                                for(j=0; j<n;j++){
                                        cout << " a[" << i << "]""[" << j << "]"" = "<< a[i][j] << "    ";
                                }
                }
                cout << endl;
                */
                res = new double* [n-1];
                for(int i=0; i<n-1;i++){
		        res[i] = new double[n-1];
                }
                for(int i=0;i<n-1;i++){
                        for(int j=0; j<n-1;j++){
                                res[i][j]=a[i][j];
                        }
                }
                delete []a;
                cout << endl << " Delete ! " << endl;
                //a=res;
                for(i=0;i<n-1;i++){
                                cout << endl;
                                for(j=0; j<n-1;j++){
                                        cout << " res[" << i << "]""[" << j << "]"" = "<< res[i][j] << "    ";
                                }
                }
                cout << endl;
                cout << " Press any key ... " << endl;
                delete []res;
        getch();
        exit;
}

//---------------------------------------------------------------------------