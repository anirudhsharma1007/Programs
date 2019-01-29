#include <iostream>


using namespace std;

int productsum(int arr1[],int arr2[],int n){

    int i=0,j=n-1,productSum=0,k;

    for(k=0;k<n;k++){

        productSum=productSum+arr1[i++]*arr2[j--];

    }

    return productSum;

}

int main()
{

   int a[5]={1,2,3,4,5};

   int b[5]={1,2,3,4,5};

       
       cout<<"sum of products="<<productsum(a,b,5);

   
   return 0;

}