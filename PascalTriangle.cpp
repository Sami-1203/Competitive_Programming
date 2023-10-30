#include <iostream>
using namespace std;

void print_pascal(int row_num)
{
     for(int N = 2; N <= row_num; N++)
	{

         int val=1;
          for(int r = 1; r <= N; r++)
		{
            cout<<val<<" "<<"\t";

            val = val * (N - r)/r;
        }

       for(int r = 1; r < row_num-N+1; r++)
	   {
         cout<<" "<<"\t";
       }

        cout<<endl;
    }
}

int main()
{

    int row_num ;
	cin>>row_num;
    print_pascal(row_num);

    return 1;
}
