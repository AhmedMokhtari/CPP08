#include <iostream>
#include <iterator>

//  class Integer{
//     private : 
//         int arr[100];
//         int idx = 0;
//     public :
//         void add_elem(int a)
//         {
//             if (idx < 100)
//                 arr[idx++] = a;
//         }
//         void get_index(int index)
//         {
//             if (index < idx && index >= 0)
//                 std::cout << arr[index] << std::endl;
//         }
//         class iterator{
//             public :
//                 using iterator_category = std::forward_iterator_tag;
//                 using value_type = int;
//                 using pointer = int*;
//                 using reference = int&;
//                 using difference_type = std::ptrdiff_t;
//             private :
//                 pointer ptr;
//             public :
//                 iterator(pointer p) : ptr(p){}
//                 reference operator*(){return *ptr;};
//                 pointer operator->(){return ptr;};


//                 iterator operator++(){
//                     ptr++;
//                     return *this;
//                 }

//                 iterator operator++(int)
//                 {
//                     iterator tmp = *this;
//                     ptr++;
//                     return tmp;
//                 }

//                 bool operator==(const iterator &o){
//                     return this->ptr == o.ptr;
//                 }

//                  bool operator!=(const iterator &o){
//                     return this->ptr != o.ptr;
//                 }


//         };
//         iterator begin(){
//             return (iterator(arr));
//         }
//         iterator end(){
//             return (iterator(arr + idx));
//         }
//  };

class test{
    public:
        typedef int alo;
};
 int main()
 {
//     Integer a;

//     a.add_elem(0);
//     a.add_elem(1);
//     a.add_elem(2);
//     a.add_elem(3);
//     a.add_elem(3);
//     a.add_elem(3);
//     a.add_elem(3);
//     // a.get_index(0);
//     // a.get_index(1);

//    Integer::iterator t = a.begin();
//     // for (const int & t : a)
//     // {
//     //     std::cout << t << " ";
//     // }
//     while (t != a.end())
//     {
//         std::cout << *t << " ";
//         t++;
//     }

    test::alo c = 5555;
    std::cout << c << std::endl;
    return 0;
 }