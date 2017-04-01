#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
int n;
int w[8];
ifstream in("file.in",ios::in);
 if(!in) {
 cerr << "Failed opening" << endl;
 exit(1);
 }
in>>n;
for(int i=0;i<8;i++)
{
  in>>w[i];
}
//cout<<n<<endl;
//for(int j=0;j<8;j++)
//{
// cout<<w[j]<<endl;
//}
vector<int> v(8);
int insert,moveitem;
for(int i=0;i<8;i++)
{
  v.at(i)=w[i];
}
for(int next=1;next<8;++next)
{
  insert=v.at(next);
  moveitem=next;
  while((moveitem>0)&&(v.at(moveitem-1)>insert))
  {
     v.at(moveitem)=v.at(moveitem-1);
     --moveitem;
  }
  v.at(moveitem)=insert;
}
//  for(int i=0;i<8;i++){
//       cout<<v.at(i)<<endl;
//  }
int sum=0;
for(int j=7;j>2;j--){
   sum=sum+v.at(j);
}
cout<<sum<<endl;
return 0;
}

