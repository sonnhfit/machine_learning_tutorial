#include <bits/stdc++.h>

using namespace std;
struct Point{
    int val; // class cua point
    double x, y;
    double distance;
};

int phanLopKnn(Point arr[], int n, int k, Point p)
{
    for(int i =0 ;i <n ;i++)
    {
        arr[i].distance = sqrt(((arr[i].x - p.x)*(arr[i].x - p.x)) + ((arr[i].y - p.y)*(arr[i].y - p.y))  );
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1; j<n;j++)
        {
            if(arr[i].distance  > arr[j].distance)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    int dem1 = 0;
    int dem2 = 0;

    for(int i=0;i<k;i++)
    {
        if(arr[i].val == 0)
        {
            dem1++;
        }
        else if(arr[i].val == 1)
        {
            dem2++;
        }
    }
    if(dem1 > dem2)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int n = 17;
    Point arr[n];

    arr[0].x = 1;
    arr[0].y = 12;
    arr[0].val = 0;

    arr[1].x = 2;
    arr[1].y = 5;
    arr[1].val = 0;

    arr[2].x = 5;
    arr[2].y = 3;
    arr[2].val = 1;

    arr[3].x = 3;
    arr[3].y = 2;
    arr[3].val = 1;

    arr[4].x = 3;
    arr[4].y = 6;
    arr[4].val = 0;

    arr[5].x = 1.5;
    arr[5].y = 9;
    arr[5].val = 1;

    arr[6].x = 7;
    arr[6].y = 2;
    arr[6].val = 1;

    arr[7].x = 6;
    arr[7].y = 1;
    arr[7].val = 1;

    arr[8].x = 3.8;
    arr[8].y = 3;
    arr[8].val = 1;

    arr[9].x = 3;
    arr[9].y = 10;
    arr[9].val = 0;

    arr[10].x = 5.6;
    arr[10].y = 4;
    arr[10].val = 1;

    arr[11].x = 4;
    arr[11].y = 2;
    arr[11].val = 1;

    arr[12].x = 3.5;
    arr[12].y = 8;
    arr[12].val = 0;

    arr[13].x = 2;
    arr[13].y = 11;
    arr[13].val = 0;

    arr[14].x = 2;
    arr[14].y = 5;
    arr[14].val = 1;

    arr[15].x = 2;
    arr[15].y = 9;
    arr[15].val = 0;

    arr[16].x = 1;
    arr[16].y = 7;
    arr[16].val = 0;

    Point p;
    p.x = 5.5;
    p.y = 1;

    int nhom = phanLopKnn(arr, n, 3, p);
    cout<<"Nhom la: "<<nhom<<endl;

    return 0;
}
