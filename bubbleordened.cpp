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
 int i, j, temp, flag=0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            // verifica se precisa ordenar
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //se sim, muda para 1 a flag
                flag = 1;
                printf("%d",i);
            } 
        }
        // se nao ele simplesmente sai do algoritmo
        if(flag==0)
        {
        	printf("saiu");
            break;
        }
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
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("=============================================== \n");
	cout<<"Ordenado o vetor: \n";
	printArray(arr, n);
	return 0;
}
