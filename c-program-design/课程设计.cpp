#include <string.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <Python.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct books
{
        char bookname[20]; //书名
        long long ISBN;    //图书ISBN信息
        int price;         //预期售价，这里可以为0，也就是互相借阅或赠送
} Books;
typedef struct flea
{
        char name[20];     //同学信息
        long long connect; //同学联系方式
        Books bookinfor;
        struct flea *next;
} Flea;
typedef int Status;
typedef struct Linestruct
{
        char name[20];     //同学信息
        long long connect; //同学联系方式
        Books bookinfor;
} LineStruct;
/*
1        想要买书同学的信息录入
2        被交换书籍的插入与删除
3        书的价格排序，获取最大效益
4        文件存储数据和读取
5        被交换书籍的分类查询
*/
Status n = 0;
LineStruct Info[1000];
Flea *head;
Flea *p, *q, *t;
void UsemyPython()
{
        PyObject *SYS;
        Py_Initialize();
        PyRun_SimpleString("print(64*'=')");
        PyRun_SimpleString("from time import time,ctime\n"
                           "\n"
                           "print(64*'=')\n"
                           "print('Everything is reading!')\n"
                           "print('There are many books,Choose one for YOU!')\n"
                           "print('There are TWO choics:')\n"
                           "print('1:Search according to the price')\n"
                           "print('2:Search according to the name of Books')\n"
                           "print('3: Choose according to the all money you have :');\n"
                           "print('Please enter the corresponding number such 1, 2 or 3')\n"
                           "print(64*'=')\n");
        Py_Finalize();
}
void InsertInformation()
{
//#define LOCAL
#ifdef LOCAL
        freopen("information.info", "r", stdin);
#endif
        //Info = (LineStruct*)malloc(sizeof(LineStruct) * 10);
        head = NULL;
        int i;
        FILE *fin;
        fin = fopen("information.info", "rb");
        char *str = (char *)malloc(sizeof(char));
        for (i = 0;; i++)
        {
                p = (Flea *)malloc(sizeof(Flea));
                fscanf(fin, "%s", str);
                if (strcmp(str, "exit") == 0)
                        break;
                n++;
                strcpy(p->name, str);
                strcpy(Info[n].name, str);
                /*printf("%s\n", p->name);
		memcpy(Info[n].name, str, sizeof(str));*/
                fscanf(fin, "%lld%s%lld%d", &p->connect, (p->bookinfor).bookname, &p->bookinfor.ISBN, &(p->bookinfor).price);
                Info[n].connect = p->connect;
                strcpy(Info[n].bookinfor.bookname, (p->bookinfor).bookname);
                Info[n].bookinfor.ISBN = p->bookinfor.ISBN;
                Info[n].bookinfor.price = p->bookinfor.price;
                p->next = NULL;
                if (head == NULL)
                {
                        head = p;
                }
                else
                {
                        q->next = p;
                }
                q = p;
        }

        t = head;
        fclose(fin);
#undef LOCAL
}
void PrintInformation()
{
        t = head;
        while (t != NULL)
        {
                printf("%s\n", t->bookinfor.bookname); //打印链表环节;
                t = t->next;
        }
}

void QuickSort(int left, int right)
{
        int i, j;
        LineStruct t;
        int temp;
        if (Info[left].bookinfor.price > Info[right].bookinfor.price)
        {
                return;
        }
        temp = Info[left].bookinfor.price;
        i = left;
        j = right;
        while (i != j)
        {
                while (Info[j].bookinfor.price >= temp && i < j)
                        j--;
                while (Info[i].bookinfor.price <= temp && i < j)
                        i++;
                if (i < j)
                {
                        t = Info[i];
                        Info[i] = Info[j];
                        Info[j] = t;
                }
        }
        Info[left].bookinfor.price = Info[i].bookinfor.price;
        Info[i].bookinfor.price = temp;
        QuickSort(left, i - 1);
        QuickSort(i + 1, right);
        return;
}
void BubbleSort2(int n)
{
        int i, j;
        LineStruct temp;
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n - i - 1; j++)
                {
                        if (Info[j].bookinfor.price > Info[j + 1].bookinfor.price)
                        {
                                temp = Info[j];
                                Info[j] = Info[j + 1];
                                Info[j + 1] = temp;
                        }
                }
        }
}

typedef struct BiTNode
{
        int value;
        struct BiTNode *lchild, *rchild;
} * BiTree;

bool LT(int a, int b)
{
        if (a < b)
                return true;
        else
                return false;
}
bool SearchBST(BiTree root, int data, BiTree f, BiTree &p)
{
        if (!root)
        {
                p = f;
                return false;
        }
        else if (data == root->value)
        {
                p = root;
                return true;
        }
        else if (data < root->value)
                return SearchBST(root->lchild, data, root, p);
        else if (data > root->value)
                return SearchBST(root->rchild, data, root, p);
        return -9;
}

inline void InsertBST(BiTree &root, int data)
{
        BiTree p, s;
        if (!SearchBST(root, data, NULL, p))
        {
                s = (struct BiTNode *)malloc(sizeof(BiTNode));
                s->value = data;
                s->lchild = s->rchild = NULL;
                if (p == NULL)
                        root = s;
                else if (LT(data, p->value))
                        p->lchild = s;
                else
                        p->rchild = s;
        }
        return;
}
void PreOrderTraverse(BiTree root)
{
        if (root)
        {
                printf("%d ", root->value);
                PreOrderTraverse(root->lchild);
                PreOrderTraverse(root->rchild);
        }
}
void InOrderTraverse(BiTree root)
{
        if (root)
        {
                InOrderTraverse(root->lchild);
                printf("%d ", root->value);
                InOrderTraverse(root->rchild);
        }
}
void PostOrderTraverse(BiTree root)
{
        if (root)
        {
                PostOrderTraverse(root->lchild);
                PostOrderTraverse(root->rchild);
                printf("%d ", root->value);
        }
}
void DeleteBST(BiTree root)
{
        if (root)
        {
                DeleteBST(root->lchild);
                DeleteBST(root->rchild);
                free(root);
        }
}
void python_1()
{
        Py_Initialize();
        PyRun_SimpleString("from time import time,ctime\n"
                           "print('Today is',ctime(time()))\n"
                           "");
        Py_Finalize();
}

int Min(int a, int b)
{
        return a < b ? a : b;
}
int Max(int a, int b)
{
        return a > b ? a : b;
}
int i, j;
void Knapsack(int v[222], int w[222], int c, int n, int m[222][222])
{
        int jmax = Min(w[n] - 1, c);
        for (j = 0; j <= jmax; j++)
                m[n][j] = 0;
        for (j = w[n]; j <= c; j++)
                m[n][j] = v[n];
        for (i = n - 1; i > 1; i--)
        {
                jmax = Min(w[i] - 1, c);
                for (j = 0; j <= jmax; j++)
                        m[i][j] = m[i + 1][j];
                for (j = w[i]; j <= c; j++)
                        m[i][j] = Max(m[i + 1][j], m[i + 1][j - w[i]] + v[i]);
        }
        m[1][c] = m[2][c];
        if (c >= w[1])
                m[1][c] = Max(m[1][c], m[2][c - w[1]] + v[1]);
}
void Traceback(int m[222][222], int w[222], int c, int n, int x[222])
{
        for (int i = 1; i < n; i++)
                if (m[i][c] == m[i + 1][c])
                        x[i] = 0;
                else
                {
                        x[i] = 1;
                        c -= w[i];
                }
        x[n] = (m[n][c]) ? 1 : 0;
}
void bubblesort(int a[222], int n)
{
        int i, j, t;
        for (i = 1; i <= n; i++)
        {
                for (j = 1; j <= n - i; j++)
                {
                        if (a[j] > a[j + 1])
                        {
                                t = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = t;
                        }
                }
        }
}
void backpack(int c)
{
        int w[222], v[222], x[222], m[222][222], sum = 0;
        int PRICESUM = 0;
        for (i = 1; i <= n; i++)
        {
                PRICESUM += Info[i].bookinfor.price;
        }
        //printf("%d\n", PRICESUM);
        c = PRICESUM;
        for (i = 1; i <= n; i++)
        {
                //scanf("%d", &w[i]);
                w[i] = Info[i].bookinfor.price;
        }
        Knapsack(w, w, c, n, m);
        Traceback(m, w, c, n, x);
        for (i = 1; i <= n; i++)
        {
                if (x[i] == 1)
                {
                        sum += w[i];
                }
        }
        for (i = 1; i <= n; i++)
        {
                if (x[i] == 1)
                {
                        printf("Book name:%s\n", Info[i].bookinfor.bookname);
                        printf("The contact:%lld\n", Info[i].connect);
                        printf("The ISBN of the book:%lld\n", Info[i].bookinfor.ISBN);
                }
        }
        /*for (i = 1; i < n; i++) {
		printf("%d ", x[i]);
	}*/
        int num = c - sum;
        printf("the rest of money is %d\n", num);
}

void case2Search(char *s)
{
        int a = 0;
        for (int i = 0; i < n; i++)
        {
                if (strcmp(Info[i].bookinfor.bookname, s) == 0)
                {
                        printf("The information of the book:\n");
                        printf("Book name:%s\n", Info[i].bookinfor.bookname);
                        printf("The contact:%lld\n", Info[i].connect);
                        printf("The ISBN of the book:%lld\n", Info[i].bookinfor.ISBN);
                        break;
                }
                a++;
        }
        if (a == n)
                printf("Not Found!\n");
}

void case1()
{
        InsertInformation();
        printf("MODEL'1': Choose according to the price\n");
        int i, a[1000];
        BiTree root;
        root = NULL;
        //printf("%s \n", Info[2].name);
        for (i = 0; i < n; i++)
        {
                a[i] = Info[i].bookinfor.price;
                InsertBST(root, a[i]); //构建了树结构
        }
        //PreOrderTraverse(root);
        char *s;
        s = Info[0].bookinfor.bookname;
        printf("All of books sort by price:\n");
        s = Info[3].bookinfor.bookname;
        InOrderTraverse(root);
        printf("\n");
        BubbleSort2(n);
        printf("The information of the lowest book:\n");
        printf("Book name:%s\n", Info[1].bookinfor.bookname);
        printf("The contact:%lld\n", Info[1].connect);
        printf("The ISBN of the book:%lld\n", Info[1].bookinfor.ISBN);
        //PrintInformation();
        //printf("Book name:%s The owner:%s :%d :%d The price of the book%d\n",Info[0].bookinfor.bookname,Info[0].name,Info[0].connect,Info[0].bookinfor.ISBN,Info[0].bookinfor.price);
        //PostOrderTraverse(root);
        //printf("\n");
        DeleteBST(root);
}
void case2()
{
        printf("MODEL 2: Choose according to the book's name:\n");
        printf("Choose one from All of these books\n");
        printf("you must input as \"Les Miserables\"you need input 《》\n");
        InsertInformation();
        PrintInformation();
        char *s = (char *)malloc(sizeof(char *) * 100);
        scanf("%s", s);
        case2Search(s);
        //printf("%s", Info[1].name);
}
void case3()
{
        //程序正在维修中......
        InsertInformation();
        printf("MODEL 3: Choose according to the all money you have:\n");
        printf("Please input money,and we will choose the best solution for you\n");
        int money;
        scanf("%d", &money);
        backpack(money);
}
int main()
{

        python_1();
loop1:
        UsemyPython();
        int option;
        scanf("%d", &option);
        //BubbleSort2(n);
        //PrintInformation();
        //printf("%d\n", Info[0].bookinfor.price);
        switch (option)
        {
        case 1:
        {
                case1();
                printf("EXIT? (enter '1'exit/enter '2' continue))\n");
                int A;
                scanf("%d", &A);
                if (A == 2)
                        goto loop1;
        }
        break;
        case 2:
        {
                case2();
                printf("EXIT? (enter '1'exit/enter '2' continue))\n");
                int A;
                scanf("%d", &A);
                if (A == 2)
                        goto loop1;
        }
        break;
        case 3:
        {
                case3();
                printf("EXIT? (enter '1'exit/enter '2' continue))\n");
                int A;
                scanf("%d", &A);
                if (A == 2)
                        goto loop1;
        }
        break;
        default:
        {
                printf("Please enter the corresponding number such 1 or 2\n");
                goto loop1;
        }
        }

        return 0;
}