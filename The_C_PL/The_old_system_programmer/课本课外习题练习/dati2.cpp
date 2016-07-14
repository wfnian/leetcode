 #include<stdio.h>
 #include< 
 {
            scanf("%d",&a[b]);
            if(getchar()=='\n')
                break;

            }


        q=b+1;

        }





        if(f==2)
        {
            printf("press the button to make sure where to insert.\n");
            scanf("%d",&h);
            printf("what number do you what to insert?\n");
            scanf("%d",&g);

            for(b=q;b>=h;b--)
            {
                a[b]=a[b-1];

            }
            a[h-1]=g;

            q=q+1;


            for(b=0;b<q;b++)
                {
                    printf("%d ",a[b]);
                }

                printf("\n");
        }




        if(f==3)
        {

            printf("please choose which word you want to delete and then show me the number.\n");
            scanf("%d",&h);

            for(b=h-1;b<q;b++)
            {
                a[b]=a[b+1];

            }

                q=q-1;


                for(b=0;b<q;b++)
                {
                    printf("%d ",a[b]);
                }
                printf("\n");
        }





        if(f==4)
        {


            printf("if you want to put it in an increased order,please press the button \"0\".if you want to put it in a decreased order,please press the button \"1\"\n");
            scanf("%d",&g);
            if(g==0)
            {
                frommintomax(a,q);
            }
            else
                if(g==1)
            {
                frommaxtomin(a,q);
            }
        printf("\n");
        }

            if(f==9)
            {
                if((fp=fopen("number.txt","w"))==NULL)
        {
            printf("cannot open the file");
            exit(0);
        }
        for(b=0;b<q;b++)
            fprintf(fp,"%d ",a[b]);
            e=q;
        fclose(fp);
        if((ffp=fopen("number233.txt","w"))==NULL)
        {
            printf("cannot open the file");
            exit(0);
        }
        fprintf(ffp,"%d ",q);
        fclose(ffp);
            }
            if(f==8)
            {

                if((fp=fopen("number.txt","r"))==NULL)
        {
            printf("cannot open the file");
            exit(0);
        }
        if((ffp=fopen("number233.txt","r"))==NULL)
        {
            printf("cannot open the file");
            exit(0);
        }
        fscanf(ffp,"%d",&q);
        fclose(ffp);
        for(b=0;b<q;b++)
            fscanf(fp,"%d",&a[b]);



        fclose(fp);

        for(b=0;b<q;b++)
        printf("%d ",a[b]);

        printf("\n");
            }
            if(f==7)
            {
                if((ffp=fopen("number233.txt","r"))==NULL)
        {
            printf("cannot open the file");
            exit(0);
        }
        fscanf(ffp,"%d",&q);
        fclose(ffp);
         if((fp=fopen("number.txt","r"))==NULL)
        {
            printf("cannot open the file");
            exit(0);
        }
        for(b=0;b<q;b++)
            fscanf(fp,"%d ",&a[b]);



        fclose(fp);
        for(b=0;b<q;b++)
        {
        printf("%d ",a[b]);
        if(b==q)
            break;
        }
        fclose(fp);
        printf("\n");
            }
    }
    return 0;
}

