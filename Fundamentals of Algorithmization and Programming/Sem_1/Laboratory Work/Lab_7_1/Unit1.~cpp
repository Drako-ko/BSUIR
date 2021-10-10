//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include <math.h>

#include <stdio.h>

#include <conio.h>

#include <iostream.h>

#include <cstdlib>

#include <ctime>

#include <string.h>

//---------------------------------------------------------------------------

#pragma argsused
void main()
{
  int n, i, nst, len;
  char st[81];
  int arr[81];
  int arr_len_words[81];

  puts(" Input string ");
  for(i=0;i<=81;i++ ){st[i]=0;arr[i]=0;arr_len_words[i]=0;}

  gets(st);
  n=0;
  len = strlen(st);

  for(i=0; i<len; i++)
         if(st[i]==' ') arr[i]=0;
         else arr[i]=1;
  int j=0;
  for(i=0;i<len;i++ ){
        if(arr[i] > 0){
                arr_len_words[j]+=arr[i];
        }
        if(arr[i] > 0 && arr[i+1]==0){
                j++;
        }
  }

  int NumWord=j;
  int minLenWord=arr_len_words[0];
  int numMinWord=0;
  for(i=1;i<NumWord;i++){
        if(minLenWord>arr_len_words[i]){
                minLenWord=arr_len_words[i];
                numMinWord=i;
        }
  }
  printf("\n Words = %d", NumWord);   			// Вывод количества слов

  printf("\n Min Word #%d Min Word Len [%d]", numMinWord+1,minLenWord);
  puts("\n Press any key ... ");
  getch();
}

//---------------------------------------------------------------------------
 