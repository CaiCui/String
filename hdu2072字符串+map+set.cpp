//hdu2072 字符串神坑题目（字符串读取，map,set集合应用）
/**
输入一行由小写字母和空格组成的句子，计算相同单词的个数。
需要注意的几点：
1）  如果一行句子只有空格，则有0个单词。
2）  如果一行句子由空格开头，不能算作单词个数。
3）  如果两个单词之间有n个空格隔开，不能算作单词个数。
4）  如果句子由n个空格结尾，不能算作单词个数。
5）  相同的单词的个数只是一个。
*/
/*  map简单用法:
    map<string,int>p;
    //前两种开销优于第三种。
    p.insert(pair<string,int>("222",1));
    p.insert(map<string,int>::value_type ("1", 3));
    p["222"]=2;
    map<string,int>::iterator s=p.find("222");

    p.erase(p.begin(),p.end());清空
    cout<<s->first<<endl;//key
    cout<<s->second<<endl;//value
*/
/*
    set元素的使用

*/
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
#include<map>
#include<set>
#include<cstring>
#include <cctype>
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
char a[1000000];
int main(void)
{
    while(gets(a)&&strcmp(a,"#")!=0)
    {
           set<string>s;//每个元素唯一的RB-Tree集合,set中数元素的值不能直接被改变
           string b;
           for(int i=0;a[i];i++)
           {
               if(a[i]==' '&&!b.empty())s.insert(b),b.clear();
               else
                 if (a[i]!=' ')b+=a[i];
           }
           if(!b.empty())//句子最后一个单词
            s.insert(b);
           cout<<s.size()<<endl;
    }


    return 0;
}

 /*
    两种C字符串的读取方法
    //指定了字符串长度的字符串读取方法。
    char s[100000];
    char tmp[1000000];
    int len,k,coun;
    map<string,int>p;
    map<string,int>::iterator sp;
    while(gets(s)&&strcmp(s,"#")!=0) //gets()读取，回车后输入的所有字符串才送入缓冲区计算
    {
        memset(tmp,'\0',sizeof(tmp));
        len=strlen(s);
        coun=0;
        p.erase(p.begin(),p.end());
        k=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]!=' ')
             tmp[k++]=s[i];
            if(s[i]==' '||s[i+1]=='\0')
            {
                tmp[k]='\0';
                sp=p.find(tmp);
                if(sp!=p.end())
                    {
                        k=0;
                        memset(tmp,'\0',sizeof(tmp));
                        continue;
                    }
                else
                {
                    p.insert(pair<string,int>(tmp,1));
                    coun++;
                    k=0;
                    memset(tmp,'\0',sizeof(tmp));
                }

            }


        }
        cout<<coun<<endl;

    }
  */

  /*
    //无限长度字符串的字符串读取方法。
    char c;
    char tmp[1000000];
    int len,k,coun,sa;
    map<string,int>p;
    map<string,int>::iterator sp;
    sa=0;
    coun=0;
    p.erase(p.begin(),p.end());
    k=0;
    while(c=getchar())//getchar()每输入一个，就送入缓冲区，所以可以边输入，边计算。
    {
        if(c=='#')break;
        if(c!=' '&&c!='\n')
        {
            tmp[k++]=c;
        }
        if(c==' '&&k!=0)
           {
               tmp[k]='\0';
               sp=p.find(tmp);
                if(sp!=p.end())
                    {
                        k=0;
                        memset(tmp,'\0',sizeof(tmp));
                    }
                else
                {
                    p.insert(pair<string,int>(tmp,1));
                    coun++;
                    k=0;
                    memset(tmp,'\0',sizeof(tmp));
                }

           }
        if(c=='\n'&&k!=0)
         {
                tmp[k]='\0';
                sp=p.find(tmp);
                if(sp!=p.end())
                    {
                        k=0;
                         memset(tmp,'\0',sizeof(tmp));
                    }
                else
                {
                    p.insert(pair<string,int>(tmp,1));
                    coun++;
                    k=0;
                     memset(tmp,'\0',sizeof(tmp));
                }
             cout<<coun<<endl;
             p.erase(p.begin(),p.end());
             coun=0;
         }

    }
*/
