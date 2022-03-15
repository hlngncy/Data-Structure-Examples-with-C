#include <cstdio>
#include <cstring>

union student{
    char name[30];
    int num;
    float GPA;
};
int main(){
    union student st;
    strcpy(st.name,"Helen");//union name variable created
    printf("Name: %s\n",st.name);
    st.num = 7; //and also num variable must overwrited on name variable
    printf("Num: %s\n",st.num);


    return 0;
}
