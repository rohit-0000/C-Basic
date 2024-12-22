//Enter adress(house no,block,city,state) of 5 people.
#include<stdio.h>
struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printdata(struct address add);

int main()
{
    struct address add[5];
    printf("enter info for person 1 :\ni.e 1.->houseNo 2.->block 3. ->city 4.->state\n");
    scanf("%d",&add[0].houseNo);
    scanf("%d",&add[0].block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);
    
    printf("enter info for person 2 :\ni.e 1.->houseNo 2.->block 3. ->city 4.->state\n");
    scanf("%d",&add[1].houseNo);
    scanf("%d",&add[1].block);
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);
    
    printf("enter info for person 3 :\ni.e 1.->houseNo 2.->block 3. ->city 4.->state\n");
    scanf("%d",&add[2].houseNo);
    scanf("%d",&add[2].block);
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);
    
    printf("enter info for person 4 :\ni.e 1.->houseNo 2.->block 3. ->city 4.->state\n");
    scanf("%d",&add[3].houseNo);
    scanf("%d",&add[3].block);
    scanf("%s",add[3].city);
    scanf("%s",add[3].state);
    
    printf("enter info for person 5 :\ni.e 1.->houseNo 2.->block 3. ->city 4.->state\n");
    scanf("%d",&add[4].houseNo);
    scanf("%d",&add[4].block);
    scanf("%s",add[4].city);
    scanf("%s",add[4].state);
 
    printdata(add[0]);
    printdata(add[1]);
    printdata(add[2]);
    printdata(add[3]);
    printdata(add[4]);
}
void printdata(struct address add)
{
    printf("address is : %d,%d,%s,%s\n\n",add.houseNo,add.block,add.city,add.state);
}