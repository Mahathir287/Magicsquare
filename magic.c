#include<stdio.h>

int a[10][10]; int main(){

int n;
scanf("%d",&n);
//magic square must be a odd number of rows and coloumns
if(n%2==0){ //magic square is not possible in even number
    printf("Please enter an ODD number");
}
else{
    printf("the magic sum is %d\n",n*(n*n+1)/2);//calculating the magic sum
     
       int i,r,c;
    r=1;
    c=(n+1)/2;
    for(i=1;i<=(n*n);i++){
        a[r][c]=i;//initializing the 1st element in 1st row and middle column
        r--; //then we have to decrement row and increment coloumn 
        c++;
        if(r==0 && c>n){ //if row and coloumn both exceeds the limit 
            r=r+2;
            c=c-1;
        }
        else if(r==0){ //if row exceeds
            r=n;
        }
        else if(c>n){ //if coloumn exceeds
            c=1;
        }
        else if(a[r][c]!=0){ //if the place is already occupied
            r=r+2;
            c=c-1;
        }
    }
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
}
}
