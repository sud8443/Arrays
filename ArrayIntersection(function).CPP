// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array

void intersection(int input1[], int input2[], int size1, int size2)
{
    
int i,j,k=0,n=0,arr[10000];
  {
    for(i=0;i<size1;i++)
     {
          for(j=0;j<size2;j++)
      
            {
                if(input1[i]==input2[j])
                {
                     arr[k]=input1[i];
                     input2[j]=-1000000;
                     k++;
                     n=k;
                     break;
                }
            }
     }
  }
  
  for(k=0;k<n;k++)
  {
  cout<<arr[k]<<endl;
  }
}
