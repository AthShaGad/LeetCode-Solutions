/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    // int sum; int quot=0; int sum1=0;
    // struct ListNode*p=l1;
    // struct ListNode*q=l2;
    // /*struct ListNode*l3=(struct ListNode*)malloc(sizeof(struct ListNode));
    // l3->val=0;
    // l3->next=NULL;*/
    // struct ListNode* l3=NULL;
    // struct ListNode*r=l3;
    // struct ListNode*pres=l3;
    // while((p!=NULL)&&(q!=NULL))
    // {
    //     sum=p->val+q->val;
    //     sum1=sum;
    //     /*quot=sum/10;
    //     rem=sum%10;*/
    //     if(sum>9)
    //     {
    //         sum=sum%10;
    //     }
    //     r=(struct ListNode*)malloc(sizeof(struct ListNode));
    //     r->val=sum+quot;
    //     quot=sum1/10;
    //     r->next=NULL;
    //     if(l3==NULL)
    //     {    
    //          l3=r;
    //          pres=l3;
    //     }
    //     else{
    //         //pres=l3;
    //         /*while(pres->next!=NULL)
    //             pres=pres->next;*/
    //         pres->next=r;
    //         pres=pres->next;
    //     }
    //     p=p->next;
    //     q=q->next;
    // }
    // if(p!=NULL)
    // {
    //     while(p!=NULL)
    //     {
    //         r=(struct ListNode*)malloc(sizeof(struct ListNode));
    //         r->val=p->val;
    //         r->next=NULL;
    //        /* pres=l3;
    //         while(pres->next!=NULL)
    //             pres=pres->next;*/
    //         pres->next=r;
    //         pres=pres->next;
    //     }
    // }
    // if(q!=NULL)
    // {
    //     while(q!=NULL)
    //     {
    //         r=(struct ListNode*)malloc(sizeof(struct ListNode));
    //         r->val=q->val;
    //         r->next=NULL;
    //         /*pres=l3;
    //         while(pres->next!=NULL)
    //             pres=pres->next;*/
    //         pres->next=r;
    //         pres=pres->next;
    //     }
    // }
    // return l3;
    
    struct ListNode* s=NULL, *temp, *pres;
    int sum, carry=0;
    while(l1!=NULL&&l2!=NULL)
    {
        sum=l1->val+l2->val+carry;
        if(sum>9)
        {
            sum%=10;
            carry=1;
        }
        else
            carry=0;
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=sum;
        temp->next=NULL;
        if(s==NULL)
        {
            s=temp;
            pres=s;
        }
        else
        {
            pres->next=temp;
            pres=pres->next;
        }
        l1=l1->next;
        l2=l2->next;
    }
    if(l2==NULL)
    {
        while(l1!=NULL)
        {
            sum=l1->val+carry;
            if(sum>9)
            {
                sum%=10;
                carry=1;
            }
            else
                carry=0;
            temp=(struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val=sum;
            temp->next=NULL;
            if(s==NULL)
            {
                s=temp;
                pres=s;
            }
            else
            {
                pres->next=temp;
                pres=pres->next;
            }
            l1=l1->next;
        }
    }
    else
    {
         while(l2!=NULL)
        {
            sum=l2->val+carry;
            if(sum>9)
            {
                sum%=10;
                carry=1;
            }
            else
                carry=0;
            temp=(struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val=sum;
            temp->next=NULL;
            if(s==NULL)
            {
                s=temp;
                pres=s;
            }
            else
            {
                pres->next=temp;
                pres=pres->next;
            }
            l2=l2->next;
        }
    }
    if(carry!=0)
    {
            temp=(struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val=carry;
            temp->next=NULL;
            pres->next=temp;
            pres=pres->next;
    }
    return s;
}