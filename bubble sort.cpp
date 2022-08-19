/*
Logic :
------------------------------------------------------------------------------------------------
pass:1
    * Compare arr[1] and arr[2] , if(arr[1] > arr[2]) then swap.
    * Compare arr[2] and arr[3] , if(arr[2] > arr[3]) then swap.
    * Compare arr[0] and arr[1] , if(arr[0] > arr[1]) then swap.
    ------------------------------
    ------------------------------
    ------------------------------

    * Compare arr[n-2] and arr[n-1] , if(arr[n-2] > arr[n-1]) then swap.
    Ruselt : Largest element is plased at (n-1)th position
        arr[n-1] is sorted.
------------------------------------------------------------------------------------------------

pass:2
    * Compare arr[1] and arr[2] , if(arr[1] > arr[2]) then swap.
    * Compare arr[2] and arr[3] , if(arr[2] > arr[3]) then swap.
    * Compare arr[0] and arr[1] , if(arr[0] > arr[1]) then swap.
    * ------------------------------
    * ------------------------------
    * ------------------------------
    * Compare arr[n-3] and arr[n-2] , if(arr[n-3] > arr[n-2]) then swap.
    Ruselt : 2nd Largest element is plased at (n-2)th position
      arr[n-2] ,  arr[n-1] is sorted.
------------------------------------------------------------------------------------------------

pass:3
    * Compare arr[1] and arr[2] , if(arr[1] > arr[2]) then swap.
    * Compare arr[2] and arr[3] , if(arr[2] > arr[3]) then swap.
    * Compare arr[0] and arr[1] , if(arr[0] > arr[1]) then swap.
    *  ------------------------------
    *  ------------------------------
    *  ------------------------------
    * Compare arr[n-4] and arr[n-3] , if(arr[n-4] > arr[n-3] ) then swap.
    Ruselt : 3rd Largest element is plased at (n-3)th position
      arr[n-3] , arr[n-2] ,  arr[n-1] is sorted.

pass:4
    -------------------
pass:5
    -------------------
pass:6
    -------------------


------------------------------------------------------------------------------------------------
pass:n-2
    * Compare arr[1] and arr[2] , if(arr[1] > arr[2]) then swap.
    * Compare arr[2] and arr[3] , if(arr[2] > arr[3]) then swap.
    Result : arr[2].....arr[n-2],arr[n-1] are sorted.

------------------------------------------------------------------------------------------------
pass:n-2
    * Compare arr[1] and arr[2] , if(arr[1] > arr[2]) then swap.

     Result :arr[1], arr[2].....arr[n-2],arr[n-1]  are sorted.

 Note : arr[0] get automatically its right position.




*/

#include <iostream>
using namespace std;
#define MAX 100
int main()
{
    int arr[MAX], i, j, temp, n, xchange;
    cout << "Enter the number of element" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i << endl;
        cin >> arr[i];
    }

    // bubble sorting

    for (i = 0; i < n; i++)
    {
        xchange = 0;
        for (j = 0; j < n - i; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                xchange++;
            }
        }
        if (xchange == 0)
            break;
    }

    cout << "sorted list" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}