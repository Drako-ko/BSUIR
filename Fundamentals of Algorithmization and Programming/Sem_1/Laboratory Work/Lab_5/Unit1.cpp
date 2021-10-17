//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include <math.h>

#include <stdio.h>

#include <conio.h>

#include <iostream.h>

#include <time.h>

//---------------------------------------------------------------------------
#pragma argsused

int main(int argc, char* argv[])
{
       	int i=0, kod=0, imax=0, n=0;
        //описание указателя на массив
        int *a;
                cout << " Input size N : " << endl;
                cin >> n;
                //проверка на правильность ввода размерности массива
                if(n>1){
                 //выделение паи=мяти полд массив размерностью N
                 a = new int[n];
                }
                else{
                        cout << " Error: size of array less 1" << endl;
                        cout << " Exit from programm" << endl;
                        getch();
                        return 0;
                }
                cout << "Enter 1 if you want to enter the elements of the array yourself" << endl;
                cin >> kod;
                //----------------------------------------------------
                if (kod==1){
                        //ввод чисел в массив вручную
	                cout << "\n Input Massiv A:" << endl;
                        for(i=0; i<n;i++)
                                        cin >> a[i];
                }
                else{
                        //ввод случайных чисел в массив
                        randomize();
                        puts(" Massiv A ");
                        for(i=0; i<n;i++) {
                                        int tmp_rnd= rand();
                                        a[i] = tmp_rnd % 45 - 30;
                        }
                }
                //отображениек введенного массива
                //----------------------------------------------------
                for(i=0;i<n;i++){
                        cout << endl;
                        cout << " a[" << i << "] = "<< a[i]<< "    ";
                }
                //----------------------------------------------------
                //поиск максимального элемента массива
                imax = 0;
                for (i=0; i<n; i++) {
                                if ((a[i])>(a[imax])) {
                                        imax=i;
                                }
                }
                //----------------------------------------------------
                //вывод информации о максимальном элемкенте и его позиции в массиве
                cout << endl << endl;
                cout << " Max a [" <<imax<<"] = "<<a[imax];
        //------------------------------------------------------------
        //вычисление суммы положительных элементов массива распологающихся до максимального
        int sum=0;
        puts("\n Rezult massiv A ");
        for(i=0; i<imax;i++)
                if(a[i]>=0){
                        sum+= a[i];
                        printf("%d ", a[i]);
                }
        cout<<"\n SUMM = "<<sum;
        puts("\n Press any key ... ");
        delete []a;
        getch();
return 0;
}


//---------------------------------------------------------------------------
