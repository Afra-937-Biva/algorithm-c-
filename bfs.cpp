#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<int>edges[MAX];
bool visited[MAX];

void bfs()                    //     1
{                             //  /  |  \

     queue<int>q;             // 2   5   3   1 2 3 5
    q.push(1);                //  \  |  /
   visited[1]=true;            //    4
    while(!q.empty())
    {
        cout<<q.front()<<' ';
        for(auto it:edges[q.front()])//1 ar sathe ki ki connected
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it]=1;
            }
        }

        q.pop();
    }
}
int main()
{
    edges[1].emplace_back(2);
    edges[2].emplace_back(1);
    edges[1].emplace_back(3);
    edges[3].emplace_back(1);
    edges[1].emplace_back(5);
    edges[5].emplace_back(1);
    edges[2].emplace_back(4);
    edges[4].emplace_back(2);
    edges[4].emplace_back(3);
    edges[3].emplace_back(4);
    edges[4].emplace_back(5);
    edges[5].emplace_back(4);

    bfs();

    return 0;
}
