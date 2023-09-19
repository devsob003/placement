// an array integer num is created 
// choose a target integer which should return indices of two nos that add 


// Brute force approach 
#include<stdio.h>

using namespace std;

class add{

public:
    void add_the_index(int num[], int target, int n)
    {

        
        for(int i=0 ; i < n ; i++)
        {
            for(int j = 1 ; j< n ; j++)
            {
                if(num[i]+ num[j] == target)
                printf("%d\t%d", i , j);
            }
        }   
    }
};

int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    add obj;

    obj.add_the_index(num,5,n);

    return 0;
}