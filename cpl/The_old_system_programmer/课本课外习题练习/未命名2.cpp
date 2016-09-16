#include <fstream>
#include <iostream.h>

using namespace std;

const int DefaultListSize = 100; 

template <class Elem> 
class Aqueue
{
private:
   int maxSize;
   int listSize;
   int tail;
   Elem* listArray;
public:
 Aqueue();
 virtual ~Aqueue();
 bool append(const Elem&); 
 bool remove(Elem&);
 bool deleteone(int pos);
 bool find(Elem&);
 bool sort();
 void print() const;
 void save()
 {
  ofstream outfile("data.dat",  ios::out);
  outfile<<listSize<<" ";
  for(int i=0; i<listSize; i++)
   outfile<<listArray[i]<<" ";
  outfile.close();
 }
};

template <class Elem>
Aqueue<Elem>::Aqueue()  //初始化队列
{
 maxSize=DefaultListSize;
 listArray=new Elem[maxSize];
 listSize = 0;
 ifstream infile("data.dat", ios::in|ios::nocreate);
 if(!infile)
  listSize = 0;
 else

 {
  int i = 0;
  infile>>listSize;
  while(i < listSize)
  {
   infile>>listArray[i++];
  }
 }
} // Aqueue()

template <class Elem>                            //析构函数
Aqueue<Elem>::~Aqueue()
{
 delete [] listArray;
} // ~Aqueue

template <class Elem>                           //打印队列元素
void Aqueue<Elem>::print() const
{
 int t=0;     
 cout<<"<";
 while(t<listSize)
  cout<<listArray[t++]<<" "; 
 cout<<">\n";
} // print

template <class Elem>                           //追加元素
bool Aqueue<Elem>:: append(const Elem&item)
{
 if(listSize==maxSize)
  return false;
 listArray[listSize++]=item;
 return true;
} // append

template <class Elem>                            //删除某位置的元素
bool Aqueue<Elem>:: deleteone(int pos)
{
 if(listSize==0)
  return false;  
 for(int i=pos;i<listSize-1;i++)
  listArray[i]=listArray[i+1];
 listSize--;   
 return true;  
} // remove

template <class Elem>                           //移除值为it的元素
bool Aqueue<Elem>:: remove(Elem& it)
{
 if(listSize==0)
  return false;
 int pos = 0;
 while(it != listArray[pos])
 {
  pos++;
  if(pos >= listSize)
   return false;
 }
 for(int i=pos;i<listSize-1;i++)
  listArray[i]=listArray[i+1];
 listSize--;
 return true;  
} // remove

template <class Elem>                 //查找it是否在队列里
bool Aqueue<Elem>::find(Elem& it)
{
 int i = 0;
 while(it != listArray[i])
 {
  i++;
  if(i >= listSize)
   return false;
 }
 return true;
}

template <class Elem>         //对队列元素排序，升序
bool Aqueue<Elem>::sort()
{
 if(listSize == 0)
  return false;
 Elem temp;
 for(int i=1; i<listSize; i++)
  for(int j=i; (j>0)&&(listArray[j]<listArray[j-1]); j--)
  {
   temp = listArray[j];
   listArray[j] = listArray[j-1];
   listArray[j-1] = temp;
  }
 return true;
}

int main()
{
 Aqueue<int> queue;
 int data,input,check;
 cout<<"1、插入数据"<<endl;
 cout<<"2、以值删除数据"<<endl;
 cout<<"3、以位置删除数据"<<endl;
 cout<<"4、队列排序"<<endl;
 cout<<"5、查看队列"<<endl;
 cout<<"0、退出"<<endl;
 do
 {
  do
  {
   cout<<"请选择操作：";
   cin>>input;
   if(cin.good())
   {
    if(input == 0 || input == 1 || input == 2 || input == 3 || input == 4 || input == 5)
     check = 0;
    else
    {
     cout << "没有该选项！" << endl;
     check = 1;
    }
   }
   else
   {
    cin.clear();
    cin.sync();
    cout << "请不要输入字符！" <<endl;
    check = 1;
   }
  }
  while(check);
  switch(input)
  {
  case 1:
   {
    cout<<"请输入数据："<<endl;
    cin>>data;
    if(queue.append(data))
     cout<<"插入成功！";
    else
     cout<<"插入失败！";
    break;
   }
  case 2:
   {
    cout<<"请输入数值："<<endl;
    cin>>data;
    if(queue.remove(data))
     cout<<"删除成功！";
    else
     cout<<"删除失败！";
    break;
   }
  case 3:
   {
    cout<<"请输入位置："<<endl;
    cin>>data;
    if(queue.deleteone(data))
     cout<<"删除成功！";
    else
     cout<<"删除失败！";
    break;
   }
  case 4:
   {
    if(queue.sort())
     cout<<"排序完成！";
    else
     cout<<"删除失败！";
    break;
   }
  case 5:
   {
    queue.print();
    break;
   }
  case 0:
   {
    queue.save();
    break;
   }
  }
 }
 while(input != 0);
 return 0;
}
