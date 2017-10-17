#include <iostream> //it is not working, need to deep down a bit

using namespace std;


 
int main()
{
	int a,b,u,v,n,i,j,ne=1;
	int visited[10]={0},min = 99999,mincost=0,cost[10][10];
	int path[100]={0}; //Â ýòîò ìàññèâ áóäóò çàïèñûâàòüñÿ âåðøèíû, ïî êîòîðûì ñîñòàâèòüñÿ ïóòü
	int path_index=0;
 
	cout<<"Ââåäè êîëè÷åñòâî âåðøèí  "; cin>>n;
	cout<<"Ââåäè ìàòðèöó ñìåæíîñòè\n";
 
 
 
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		cin>>cost[i][j];
		if(cost[i][j]==0)
			cost[i][j]=99999; //999 - ýòî ÷òî-òèïà áåñêîíå÷íîñòè. Äîëæíî áûòü áîëüøå ÷åì çíà÷åíèÿ âåñà êàæäîãî èç ðåáåð â ãðàôå
	}
	visited[1]=1;
	cout<<"\n";
 
	while(ne < n)
	{
		for(i=1; i<=n;i++)
			for(j=1;j<=n;j++)
				if(cost[i][j]< min)
					if(visited[i]!=0)
						{
							min=cost[i][j];
							a=u=i;
							b=v=j;
						}
						if(visited[u]==0 || visited[v]==0)
							{
								path[path_index]=b;
								path_index++;
								//cout<<"\n "<<ne++<<"  "<<a<<"  "<<b<<min; //Ìîæíî âûâåñòè òàê
								ne++; //åñëè ñòðî÷êó âûøå ðàñêîììåíòèðîâàòü - ýòó çàêîììåíòèðîâàòü
								mincost+=min;
								visited[b]=1;
					 
							}
		cost[a][b]=cost[b][a]=99999;
	}
 
 
	cout<<"\n";
 
	cout<<1<<" --> ";
	for (int i=0;i<n-1;i++)
	{
	  cout<<path[i];
	  if (i<n-2) cout<<" --> ";
	}
 
	cout<<"\n Ìèíèìàëüíàÿ ñòîèìîñòü  "<<mincost;
 
 
	cin.get();
	cin.get();
	return 0;
}
