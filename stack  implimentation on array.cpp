stack implimentation on array
class Stack{
    public:
    int size;int *arr;int temp;
    Stack(int s){
        this->size=s;
        int *arr=new int[size];
        temp=-1;
    }
    void push(int value){
        if (size-temp>1){
            temp++;
            arr[temp]=value;
        }else{
            cout<<"Stack overflow"<<endl;
        }

    }
    void pop(){
        if (temp>=0){
            temp--;
        }
        else{cout<<"stack underflow";}

    }
    int top(){
        if (temp>=0 ){
            return arr[temp];
        }
        else{
            cout<<"stack is empty"<<endl;
        }

    }
    bool isempty(){
        if(temp==-1){
            return true;
        }
    }
};

int main(){
    Stack s1(10);
    s1.push(10);
    s1.push(1);
    s1.push(20);
    s1.push(30);
    cout<<s1.top();
