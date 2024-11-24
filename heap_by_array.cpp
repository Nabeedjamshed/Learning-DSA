#include<iostream>
using namespace std;

class Heap{
    private:
        int arr[100];
        int size;
    public:
        Heap(){
            size = 0;
            arr[0] = -1;
        }
        void insertion(int val){
            size++;
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index/2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent]    , arr[index]);
                    index = parent;
                } else {
                    return;
                }
            }
        }

        void print(){
            for (int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main() {
    Heap h;
    h.insertion(53);
    h.insertion(52);
    h.insertion(51);
    h.insertion(55);
    h.insertion(60);
    h.insertion(61);
    h.print();
    return 0;
}