# What is C++ STL?

## Cpp skeleton:

```c++

    #include<bits/stdc++.h> // imports all stl functions
    using namespace std;
    
    int main(){
    
                return 0;
              }   
```

## cpp datastructures/containers:

### pairs:
Syntax : 
```c++
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second; // output : 1 3
```

It can be nested

Syntax:
``` c++
 pair<int, pair<int,int>> p = {1,{2,3}};   
 cout<<p.first<<""<<p.second.first<<""<<p.second.second; // output: 1 2 3
```

It facilitates arrays aswell
 Syntax: 
``` c++
pair<int,int> arr[] = [{1,2},{3,4}];
cout<<arr[0].first.... // out 1 2 3 4
```       


### Vectors: 
    syntax :
```c++
        
vector<object_type> variable_name;
Example:

vector<int> v1;
vector<char> v2;
vector<string> v3;

``` 
#### Most used functions in Vector:
```c++
begin() - it returns an iterator pointing to the first element of the vector.
auto iterator = itr;

itr = v1.begin();
end() - it returns an iterator pointing to the element theoretically after the last element of the vector.
auto iterator = itr;

itr = v1.end();
push_back() - it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
vector<int> v1;

v1.push_back(1);
v1.push_back(2);
insert() - it is used to insert an element at a specified position.
auto it= v1.begin();
v1.insert(it,5); //inserting 5 at the beginning
erase() - it is used to delete a specific element
vector<int> v1;
auto it= v1.begin();
v1.erase(it);// erasing the first element
pop_back() - it deletes the last element and returns it to the calling function.
v1.pop_back();
front() - it returns a reference to the first element of the vector.
v1.front();
back() - it returns a reference to the last element of the vector.
v1.back();
clear() - deletes all the elements from the vector.
v1.clear();
empty() - to check if the vector is empty or not.
v1.empty();
size() - returns the size of the vector
v1.size();
```

#### Understanding Iterators for vectors:
 
<b>It points towards the memory address</b>

```c++
#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}
```
This code Explains how an iterator works perfectly using v.begin which points to the memory address of the start of the vector.

Output: 
```
Output:

the elements in the vector: 0 1 2 3 4 5 6 7 8 9
The front element of the vector: 0
The last element of the vector: 9
The size of the vector: 10
Deleting element from the end: 9
Printing the vector after removing the last element:
0 1 2 3 4 5 6 7 8
Inserting 5 at the beginning:
The first element is: 5
Erasing the first element
Now the first element is: 0
vector is not empty
Size of the vector after clearing the vector: 0

```
