#include<stdio.h>
#include<stdlib.h>

typedef struct DataType{
	int x; //系数
	int z; //指数
}DataType;

typedef struct Node{
	DataType data; //数据域
	struct Node *next; // 指针域
}Node, *Poly; // Poly 描述的就是一元多项式链式存储结构 

void Init(Poly *p){
	// 初始化一个带头结点的链表
	*p = (Node *)malloc(sizeof(Node));
	(*p)->next = NULL;
}
void Create(Poly p){
	int x, z;
	Node *newnode, *rear = p;
	while(scanf("%d%d",&x,&z)!=EOF){
		if(x==-1 && z==-1)
			break;
		newnode = (Node *)malloc(sizeof(Node));
		newnode->data.x = x;
		newnode->data.z = z;
		rear->next = newnode; //将新创建的项加入到多项式的尾部
		rear = newnode; //将尾部指针标记为新项
	}
	rear->next = NULL;
}
void Destory(Poly *p){
	//一元多项式的空间释放
	Node *pi = *p, *q;
	while(pi!=NULL){
		q = pi->next; //释放当前节点空间之前，一定要记下下一个节点的线索
		free(pi);
		pi = q;
	}
}
void Merge(Poly p, Poly C){
	//两个有序链表的合并，将 p 并入 C 中
	Node *pi=C->next, *pj = p->next, *qi=C, *qj = p;
	while(pi!=NULL && pj!=NULL){
		if(pi->data.z>pj->data.z){
			qi = pi;
			pi = pi->next;
		}
		else if(pi->data.z == pj->data.z){
			pi->data.x+=pj->data.x;
			qi = pi; qj = pj;
			pi=pi->next; pj=pj->next;
		}
		else{ // pi->data.z < pj->data.z
			// 将 pj 节点从 p链表中取出来，插入到Ｃ链表中
			qj->next = pj->next; // 将 pj 从 P链表中删除
			pj->next = qi->next; // 将 pj 插入到 C 链表中
			qi->next = pj;
			
			//移动指针
			qi = pj;
			pi = qi->next;
			pj = qj->next;
		}
	}
	if(pj!=NULL){ // 将剩下的 P 链表项，统一链到 C 的尾部
		qj->next=NULL;
		qi->next = pj;
	}
}
void Mul(Poly A, Poly B, Poly C){
	//利用有序线性表合并的思路
	Node *pa, *pb, *pc, *q, *newnode;
	Poly pi;
	pc = C;
	for(pa=A->next; pa!=NULL; pa=pa->next){
		Init(&pi); q=pi;
		for(pb=B->next; pb!=NULL; pb=pb->next){
			//为新项申请内存空间
			newnode = (Node*) malloc(sizeof(Node));
			newnode->data.x = pa->data.x*pb->data.x;
			newnode->data.z = pa->data.z+pb->data.z;
			q->next = newnode;
			q = newnode;
		}
		q->next = NULL;
		Merge(pi, C);
		Destory(&pi);
	}
}

void Mul1(Poly A, Poly B, Poly C){
	//一元多项式的乘积： C = A*B
	Node *pa, *pb, *pc=C, *q, *newnode;
	for( pa=A->next; pa!=NULL; pa=pa->next ){	
		for( pb=B->next; pb!=NULL; pb=pb->next){
			//为新项申请内存空间
			newnode = (Node*) malloc(sizeof(Node));
			newnode->data.x = pa->data.x*pb->data.x;
			newnode->data.z = pa->data.z+pb->data.z;
			//将新项插入到C多项式链表中
			for(q=C, pc=C->next; pc!=NULL; q=pc, pc=pc->next){
				//指针 q 始终指向， pc的前一项 
				if(pc->data.z==newnode->data.z){
					pc->data.x+=newnode->data.x;
					free(newnode); 
					newnode=NULL; //标记，新项已经并入C多项式中
					break;
				}
				if(pc->data.z < newnode->data.z)
					break;
			}
			if(newnode==NULL)
				continue;
			newnode->next = q->next;
			q->next = newnode;
		}
	}
}


void Print(Poly p){
	Node *pi = p->next;
	if(pi==NULL) //如果多项式为空，则输出零
		printf("0");
	while(pi!=NULL){
		if(pi->data.x!=0) //系数为零的项，不得输出，只输出非零项
			printf("%d %d ",pi->data.x, pi->data.z);
		pi = pi->next;
	}
	printf("\n");
}
main(){
	Poly A, B, C;
	Init(&A); Init(&B); Init(&C);
	Create(A); Create(B);
	Mul(A,B,C);
	Print(C);
	Destory(&A);
	Destory(&B);
	Destory(&C);
}