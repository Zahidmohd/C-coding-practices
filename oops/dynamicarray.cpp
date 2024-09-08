class dynamicarray
{
private:
    int *data;
    int nextIndex;
    int capacity;
public:
    dynamicarray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    };
    
    dynamicarray(dynamicarray const &d){
        this -> data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this -> data[i] = d.data[i];
        }
        
        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;
    }

    void operator=(dynamicarray const &d){
        this -> data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++){
            this -> data[i] = d.data[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;
    }
    void add(int element){
        if (nextIndex == capacity) {
            int *newData = new int[capacity * 2];
            for (int i = 0; i < capacity; i++) {
                newData[i] = data[i];
    }
    delete [] data;
    data = newData;
    capacity *= 2;
    }
    data[nextIndex] = element;
    nextIndex++;
}
int get(int i) const {
    if (i < nextIndex){
        return data[i];
    }
    else{
        return -1;
    }
}
  void add(int i, int element){
    if (i < nextIndex){
        data[i] = element;
  } 
  else if (i == nextIndex)
  {
    add(element);
  }
  else{
    return;
  }
  }
  void print() const {
    for (int i = 0; i < nextIndex; i++) {
        cout << data[i] << " ";
  }
  cout << endl;
  }
};

// dynamicarray::dynamicarray(){
//     data = new int[5];
//     nextIndex = 0;
//     capacity = 5;
// }
// {
// }

// dynamicarray::~dynamicarray()
// {
// }
