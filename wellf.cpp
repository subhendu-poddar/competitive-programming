


class Student {
public:
    string name;
    int rollno;
    int marks[3];
};




    int* k = new int [10];

    int* k = int [10];











int main() {
    
    Student stud[10];

    int first = -1, second = -1, totalmarks = -1;

    if(n==1){

    }

    for(int i=0;i<n;i++){
        int *mark = stud[i].marks;
        int sum = 0;
        for(int i=0;i<3;i++){
            sum += mark[i];
        }
        if(sum<totalmarks){
            totalmarks = sum;
            second = first;
            first = i;
        }
    }

    return second; //second highest


}




void inorder(node* root){
    if(!root){
        return;
    }


    inorder(root->left);
    inorder(root->right);


    print(root->val);
}









int preference(char c){
    if(c=='-') return 1;
    if(c=='+') return 2;
    if(c=='*') return 3;
    if(c=='/') return 4;
    if(c=='^') return 5;

}

void infixTopost(string s){

    stack<char> st;
    string post;


    for(int i=0;i<s.size();i++){
        char ch = s[i];

        if(ch>=48 && ch<=57){
            post += ch;
        }
        else{
            // char top = st.top();
            if(!st.empty() && ch!='(' && ch==')' && preference(st.top())>preference(ch)){
                post += top;
                st.pop();
            }
            else{
                if(ch==')') {
                    while(st.top()!='('){
                        post += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                st.push(ch);
            }
        }
    }



}