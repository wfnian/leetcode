#include<stdio.h>
#include<string.h>

#define MaxSize 11
typedef char DataType[8];

typedef struct StaticNode{ // 静态链表中，数据元素的类型
	DataType data; //包含数据域，存储姓氏
	int next; //指针域，指向链表中下一个节点的位置，即在存储空间中的序号
}StaticNode;

typedef struct StaticList{
	StaticNode space[MaxSize]; //静态链表的存储空间
	int data_head; // 数据链表的头部 固定为1
	// int free_head; // 空闲空间链表的头部 固定为0
}StaticList;

void Init(StaticList *SL){
	int i, head;
	for(i=0; i<MaxSize-1; i++){
		SL->space[i].next = i+1;
		strcpy(SL->space[i].data,"");
	}
	SL->space[i].next = 0;
	strcpy(SL->space[i].data,"");

	//给数据链表分配头结点：
	SL->data_head = Malloc(SL);
	SL->space[SL->data_head].next = 0; //初始时数据链表为空
}
int Malloc(StaticList *SL){
	int ans = SL->space[0].next;
	SL->space[0].next = SL->space[ans].next;
	return ans;
}
void Free(StaticList *SL, int delnode){
	//释放空间，即将空间插入到空闲链表中备用
	SL->space[delnode].next = SL->space[0].next;
	SL->space[0].next = delnode;
}
void Insert(StaticList *SL, int a, DataType e){
	int i, newnode = Malloc(SL), p; //申请链表空间
	strcpy(SL->space[newnode].data, e); //将数据存入链表空间中

	//接下来，我应该将数据插入到数据链表中
	for(i=0, p=SL->data_head; i<a-1; i++)
		p = SL->space[p].next;
	SL->space[newnode].next = SL->space[p].next;
	SL->space[p].next = newnode;
}
void Delete(StaticList *SL, int a){
	int i, p, delnode;
	//通过循环找到第a-1个元素
	for(i=0, p=SL->data_head; i<a-1; i++)
		p = SL->space[p].next;
	delnode = SL->space[p].next;
	SL->space[p].next = SL->space[delnode].next; //修改指针
	
	Free(SL, delnode); //释放空间
}
int Search(StaticList *SL, DataType key){
	int p = SL->space[SL->data_head].next;
	while(p!=0){
		if(strcmp(SL->space[p].data, key)==0)
			break;
		p = SL->space[p].next;
	}
	return p;
}
void Show(StaticList *SL){
	int i;
	for(i=0; i<MaxSize;i++)
		printf("%-8s%2d\n",SL->space[i].data, SL->space[i].next);
}
main(){
	char order[10];
	int a;
	DataType e;
	StaticList sl;
	Init(&sl);
	while(scanf("%s",order)!=EOF){
		switch(order[2]){
		case 's': //insert 指令
			scanf("%d %s", &a, e);
			Insert(&sl, a, e);
			break;
		case 'o': //show 指令
			Show(&sl);
			printf("********************\n");
			break;
		case 'a': //seach 指令
			scanf("%s", e);
			printf("%2d\n", Search(&sl, e));
			printf("********************\n");
			break;
		case 'l'://delete 指令
			scanf("%d", &a);
			Delete(&sl, a);
			break;
		}
	}
}