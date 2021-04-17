#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//A funçºao de bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j,k;
	
	for (i = 0; i < n; i++)	
	printf("%d movimentacao em bubble\n",i+1);
	// Se o i ja estiver no final
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);	
	k++;		
}

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
   
    for (i = 0; i < n-1; i++) 
    { 
    	
       
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        
        swap(&arr[min_idx], &arr[i]);
			printf("%d movimentacao em selection\n",i+1); 
    } 
} 
 

//funcao para printar a lista
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// DExibir o codigo
int main()
{
	int arr[] = {10,8,6,4,2,1,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("=============================================== \n");
	selectionSort(arr, n);
	cout<<"Ordenado o vetor: \n";
	printArray(arr, n);
	return 0;
}
