//WAP to multiply two 2-D arrays and print the resultant matrix

#include<iostream>
using namespace std;

int main()
{
    int n1,n2, n3;
    cout<<"Enter the order of the 2-D matrix for M1(rows): ";
    cin>>n1;
    cout<<"Enter the order of the 2-D matrix for M1(columns): ";
    cin>>n2;
    cout<<"Enter the order of the 2-D matrix for M2(columns): ";
    cin>>n3;
    int M1[n1][n2], M2[n2][n3], M3[n1][n3];
    //2D array Initialization
    cout<<"Enter elements for matrix M1: \n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"]: ";
            cin>>M1[i][j];
        }
    }
    cout<<"Enter elements for matrix M2: \n";
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"]: ";
            cin>>M2[i][j];
        }
    }   //Array Initialization ends
    //logic for multiplication of 2 matrix
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            int sum=0;
            for(int k=0;k<n2;k++)
            {
                sum+=M1[i][k]*M2[k][j];
            }
            M3[i][j]=sum;
        }
    }   //end of logic
    //Display
    cout<<"The resultant matrix of the entered matrices is: \n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<M3[i][j]<<" ";
        }
        cout<<"\n";
    }
}
