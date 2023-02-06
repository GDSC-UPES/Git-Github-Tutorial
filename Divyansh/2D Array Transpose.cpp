//WAP to print the transpose of a given square matrix.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int A[n][n];
    //2D array initialization
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }   //Array Initialization ends
    //logic for transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(i!=j)
            {
                int temp=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
        }
    }   //end of logic
    //Displaying the Transpose of the matrix
    cout<<"The resultant matrix is: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}
