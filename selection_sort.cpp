/*
Logic

Pass 1:
    * search the smallest element from arr[0]....arr[n-1]
    * exchange this element with arr[0]
    Result : arr[0] is sorted.

pass 2:
    * search the smallest element from arr[1]....arr[n-1].
    * exchange this element with arr[1].
    * Result : arr[1] is sorted

pass 3:
    * search the smallest element from arr[2]....arr[n-1].
    * exchange this element with arr[2].
    * Result : arr[2] is sorted

pass 4:
    * search the smallest element from arr[3]....arr[n-1].
    * exchange this element with arr[3].
    * Result : arr[3] is sorted
--------------
--------------
--------------

pass n-1:
    * search the smallest element from arr[n-2] and arr[n-1].
    * exchange this element with arr[n-2]

Note: Now all the elements are sortd execpt the last one have been put in thier proper place .


*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{

    int arr[MAX], i, j, n, temp, min;
    cout << "Enter the number of element" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i << endl;
        cin >> arr[i];
    }

    // selection sorting

    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "sorted list" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
