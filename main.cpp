#include <bits/stdc++.h>

using namespace std;

int main()
{

    struct process
    {
        int pir , id  ;
        float bt ,wt ;
    };

    process *arr ;
    cout << " Enter number of process" << endl ;
    int n ;
    cin >> n ;
    arr = new process [n] ;

    for ( int i = 0 ; i < n ; ++i )
    {
        arr[i].id  = i ;
        cout << "process " << i << "\n" ;
        cout << "Please , Enter process " << i << " brust time \n" ;
        cin >> arr[i].bt;
        cout << "Please , Enter process " << i << " priority \n" ;
        cin >> arr[i].pir ;
        cout << endl ;

    }

    for ( int i = 0 ; i < n-1 ; ++i )
    {
        for ( int j = i+1 ; j < n ; ++j)
        {
            if ( arr[i].pir > arr[j].pir )
            {
                process temp = arr[i] ;
                arr[i]  = arr[j]  ;
                arr[j]  = temp ;

            }
        }
    }

    arr[0].wt = 0 ;
    float total = 0 ;
    for ( int i = 1 ; i < n ; ++i )
    {
        arr[i].wt = arr[i-1].wt + arr[i-1].bt ;
        total += arr[i].wt ;

    }
cout << " Process \t waiting time \n" ;
    for ( int i = 0 ; i < n ; ++i )
    {
    for ( int j = 0 ; j < n ; ++j )
    {
        if ( arr[j].id == i )
            cout << "  " << i << "\t\t\t" << arr[j].wt << "\n" ;
    }

    }
    cout << " Average waiting time = " << total/n << "\n" ;
    cout <<"Grant chart \n" << " " ;
    for ( int i = 0 ; i < n ; ++i )
    {
        cout<< "p" << arr[i].id  << setw(arr[i].bt ) ;
    }
    cout << "\n" << "0";
    float tot = 0.0 ;
    for ( int i = 0 ; i < n ; ++i )
    {
        tot += arr[i].bt ;
        cout << setfill('-')<< setw(arr[i].bt +1) << tot  ;
    }

    return 0;
}

/*
3
1
3
2
2
3
1
for ( int i = 0 ; i < n ; ++i )
    {
        cout<< setw(arr[i].bt) << "p" << arr[i].id  ;
    }
    cout << "\n" << "0";
    float tot = 0.0 ;
    for ( int i = 0 ; i < n ; ++i )
    {
        tot += arr[i].bt ;
        cout << setfill('-')<< setw(arr[i].bt *2) << tot  ;
    }














    #include <bits/stdc++.h>

using namespace std;

int main()
{
   struct process
   {
       int ps ;
       string name ;
   } ;

   process arr[].ps = { 100 , 500 , 200 , 300 , 600 } ;

   int a[] = { 212 , 417 , 112 , 426 } ;

   for ( int i = 0 ; i < a.size() ; ++i )
   {
       for ( int j = 0 ; j < arr.size() ; ++j )
       {
           if ( a[i] <= arr[j].ps )
           {
               arr[j].ps-=arr[i] ;
               arr[j].name += "p"+i ;
           }
       }
   }
    return 0;
}

*/
