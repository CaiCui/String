//hdu2091 字符打印，坑b啊，这题每行末尾不能有' '，并且从第二次输出开始要在输出前加一个空行。。。。。。。。

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<climits>
#include<deque>
#include<stack>
#include<vector>
#include<queue>
#include<bitset>
#include<map>
#include<set>
#include<functional>
#include<cstring>
#include<cctype>
#include<bits/stdc++.h>
typedef long long ll;
const int MOD=10e9+7;
const int INF=0x7fffffff;
const double ESP=10e-7;
const double Pi=acos(-1.0);
const int dr[]= {0,0,1,-1,1,1,-1,-1};
const int dc[]= {-1,1,0,0,-1,1,-1,1};
#define maxn INF
#define min -INF
using namespace std;
int main(void)
{
    char a;
    int n,i,j;
    int k;
    k=0;
    while(cin>>a>>n&&a!='@')
    {
        k++;
        if(k>=2)
            cout<<endl;
        for(i=1;i<=n;i++)
        {
            if(i==n)
            {
                for(j=0;j<2*n-1;j++)
                    cout<<a;
                cout<<endl;
            }
            else
            {

                for(j=0;j<2*n-1&&j<=(n-1+(i-1));j++)
                {
                    if(j==n-1&&i==1)
                    {
                        cout<<a;
                        //break;
                    }
                    else if((i-1)&&(j==n-1-(i-1)||j==n-1+(i-1)))
                    {
                        cout<<a;
                    }
                    else
                        cout<<' ';

                }
                cout<<endl;
            }

        }

    }

    return 0;
}

