# Bay be
```
map<int, string> myMap = {
  {3, "Three"}, {1, "One"}, {4, "Four"}, {2, "Two"}
};

auto minElement = *myMap.begin();
cout << "Min: " << minElement.first << " -> " << minElement.second;

auto maxElement = *myMap.rbegin();
cout << "Max: " << maxElement.first << " -> " << maxElement.second;
```
```
cout << fixed << setprecision(9) << area << endl;
cout<<(a <= b && h > a ? -1 : (h <= a ? 1 : (h - a + (a - b) - 1) / (a - b) + 1));

```
```
sort(v.begin(), v.end()); // Bé tới lớn
sort(v.rbegin(), v.rend()); // Lớn tới bé
```
```
accumulate(v.begin(), v.end(), 0LL); // tổng
accumulate(v.begin() + 1, v.end(), v[0], minus<long long>()); // trừ
accumulate(v.begin(), v.end(), 1LL, multiplies<long long>()); // nhân
accumulate(v.begin() + 1, v.end(), v[0], divides<long long>()); // chia
```
```
long long maxValue = *max_element(v.begin(), v.end());
long long countMax = count(v.begin(), v.end(), maxValue); // Đếm số lần xuất hiện của maxValue

long long count = count_if(v.begin(), v.end(), [](long long x) {
    return (x % 2 == 0) || (x < 0 && x % 3 == 0);
});
```
```
// Hàm distance(first, last) trong C++ được dùng để tính khoảng cách (số bước) giữa hai iterator.
// distance(first, last);

int maxPos = distance(v.begin(), max_element(v.begin(), v.end()));
int minPos = distance(v.begin(), min_element(v.begin(), v.end()));
```
```
unordered_set<int> lucky_numbers = {4, 7, 16, 28, 44, 47, 49, 64, 74, 77};

for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (lucky_numbers.count(num)) {
        count++;
    }
}
```
```
int dot_product = inner_product(A.begin(), A.end(), B.begin(), 0);
// Hàm inner_product() trong C++ được dùng để tính tích vô hướng (dot product) của hai dãy số. 
///Nó nằm trong thư viện <numeric>.
```
```
vector<int> numbers = {1, 7, 3, 5, 9, 2};
auto it = find(numbers.begin(), numbers.end(), 3);
if (it != numbers.end()) {
  cout << "The number 3 was found!";
} else {
  cout << "The number 3 was not found.";
}
```
```
#include <iostream>
#include <string>

int main() {
    string b = "Hello, this is a test string";
    string a = "test";

    size_t pos = b.find(a);
    if (pos != string::npos) {
        cout << "Found at index: " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }
}
```
```
vector<string> cars;
cout << cars.empty() << "\n";

cars = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars.empty();
```
```
transform(b.begin(), b.end(), b.begin(), ::toupper);
transform(b.begin(), b.end(), b.begin(), ::tolower);

#include <bits/stdc++.h>
using namespace std;

string toTitleCase(string s) {
    bool capitalize = true;
    transform(s.begin(), s.end(), s.begin(), [&](char c) -> char {
        if (isspace(c)) {
            capitalize = true;
            return c;
        }
        if (capitalize) {
            capitalize = false;
            return toupper(c);
        }
        return tolower(c);
    });
    return s;
}

int main() {
    string b = "hello, this is a test string";
    cout << "Title Case: " << toTitleCase(b) << endl;
    return 0;
}
```

---
# C++

## STRING
```
string s1 = "3.14159";

// atof trả về double
double pi = atof(s1.c_str());
```
```
string s = "Hello, world!";


map<char,int> cnt;


for (size_t i = 0; i < s.size(); ++i) {
    char ch = s[i];
    // Ví dụ: bỏ qua khoảng trắng
    if (ch == ' ') continue;
    // Ví dụ: chuyển về chữ thường nếu muốn
    ch = tolower(static_cast<unsigned char>(ch));
    ++cnt[ch];
}
```
```
string b = "Hello, world!";
transform(b.begin(), b.end(), b.begin(), ::toupper);
transform(b.begin(), b.end(), b.begin(), ::tolower);
```
```
#include <iostream>
#include <string>
// rfind

int main() {
    string b = "Hello, this is a test string";
    string a = "test";

    size_t pos = b.find(a);
    if (pos != string::npos) {
        cout << "Found at index: " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }
}
```
```
cout << fixed << setprecision(9) << area << endl;
cout<<(a <= b && h > a ? -1 : (h <= a ? 1 : (h - a + (a - b) - 1) / (a - b) + 1));
```
```
std::isalpha(ch)	Ký tự chữ cái (A–Z, a–z)
std::isdigit(ch)	Chữ số thập phân (0–9)
std::isalnum(ch)	Chữ hoặc số (tương đương isalpha ∨ isdigit)
std::isupper(ch)	Chữ in hoa (A–Z)
std::islower(ch)	Chữ thường (a–z)
std::ispunct(ch)	Ký tự dấu câu / “punctuation” (ví dụ: ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ \ {
std::isgraph(ch)	Ký tự in được (graphical, tức ký tự có thể in trừ khoảng trắng)
std::isprint(ch)	Ký tự có thể in được (printable, bao gồm cả khoảng trắng)
std::isblank(ch)	Khoảng trắng hẹp (space và tab)
std::iscntrl(ch)	Ký tự điều khiển (non-printable control characters)
std::isxdigit(ch)	Ký tự hệ thập lục phân (0–9, A–F, a–f)
```
---

## NODE
### Chèn đầu:
```
void ChenDau (Node *& first, long long data){
	Node * newNode = new Node; // Tạo node mới
	newNode -> data = data; // lưu data vào node mới tạo
	
	newNode -> next = first; // cú pháp học thuộc chèn đầu
	first = newNode; // cú pháp học thuộc chèn đầu
}
```
### Chèn cuối:
```
void ChenCuoi (Node *& first, int data){
	Node * newNode = new Node;
	newNode -> data = data;
	newNode -> next = NULL;
	
	if(first == NULL){
		first = newNode;
	} else {
		Node * tmp = first;
		while(tmp -> next != NULL){
			tmp = tmp->next;
		}
		tmp -> next = newNode;
	}
}
```
### Chèn bất kỳ:
```
void ChenViTriBatKy (Node *& first, int value, int pos){
	Node * newNode= new Node;
	newNode -> data = value;
	newNode -> next = NULL;
	if(first == NULL || pos <= 1){
		newNode -> next = first;
		first = newNode;
		return;
	}
	
	Node * tmp = first; // vt2
	int dem = 1;
	while(tmp -> next != NULL && dem < pos - 1){ // 2 < 2
		tmp = tmp -> next; // 
		dem++; // dem = 2
	}
	
	newNode -> next = tmp->next;
	tmp -> next = newNode;
}
```
### Xóa bất kỳ hoặc điều kiện:
```
void Delete(Node *&first, int pos){
	if(first == NULL && pos < 1) {
		return;
	}
	// xoa dau
	if(x == 1) {
		Node * tmp = first;
		first = first -> next;
		delete tmp;
		return;
	}
	// xóa không phải đầu
	Node * tmp = first; // vt2
	int count = 1;
	while(tmp -> next != NULL && dem < x - 1){ // 2 < 2
		tmp = tmp -> next; // 
		count++; // 
	}
	if(tmp -> next != NULL){
		Node * nodeXoa = tmp -> next;
		tmp -> next = nodeXoa -> next;
		delete nodeXoa;		
	}
}
```
### Trùng mã:
```
if(choice=="insert"){
    string mahang;
    long long dongia;
    string tenhang;
    cin>>mahang;
    //NHAP TIEP
    cin>>dongia;
    cin.ignore();
    getline(cin,tenhang);
    
    // HOC THUOC KIEM TRUNG MA
    bool check = false; // FALSE LA KHONG TRUNG
    if (first != NULL) {
        for(Node*i=first; i!=NULL; i=i->next){
            if (i -> mahang == mahang) {
                check = true; // TRUE LA TRUNG 
                break;
            }
        }
    }
    if (check == false) {
        // CHEN
        chendau(first,mahang,dongia,tenhang);
    }
}
```
```
#include <iostream>
#include <string>

using namespace std;

struct Node {
    string code;
    Node* next;
    Node(const string& c) : code(c), next(nullptr) {}
};

// Hàm kiểm tra xem mã đã tồn tại trong danh sách chưa
bool exists(Node* head, const string& code) {
    for (Node* p = head; p != nullptr; p = p->next) {
        if (p->code == code) return true;
    }
    return false;
}

// Thêm node mới vào cuối danh sách
void append(Node*& head, const string& code) {
    Node* newNode = new Node(code);
    if (!head) {
        head = newNode;
    } else {
        Node* p = head;
        while (p->next) p = p->next;
        p->next = newNode;
    }
}

// In toàn bộ danh sách
void printList(Node* head) {
    cout << "Danh sách mã hiện có:\n";
    for (Node* p = head; p != nullptr; p = p->next) {
        cout << p->code << (p->next ? " -> " : "\n");
    }
}

int main() {
    Node* head = nullptr;
    int n;
    cout << "Bạn muốn nhập bao nhiêu mã? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string code;
        cout << "Nhập mã thứ " << (i+1) << ": ";
        cin >> code;

        // Nếu trùng, yêu cầu nhập lại cho đến khi không trùng
        while (exists(head, code)) {
            cout << "Mã \"" << code << "\" đã tồn tại, vui lòng nhập lại: ";
            cin >> code;
        }

        append(head, code);
    }

    // Cuối cùng in ra danh sách
    printList(head);

    // Giải phóng bộ nhớ (nếu cần)
    Node* cur = head;
    while (cur) {
        Node* tmp = cur;
        cur = cur->next;
        delete tmp;
    }

    return 0;
}
```
### Sort:
```
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int id;
    int score;
    Node* next;
};

void sortLinkedList(Node*& first) {  // Sử dụng tham chiếu đến con trỏ
    vector<Node*> nodes;
    Node* current = first;  // Truy cập trực tiếp qua tham chiếu
    
    // Bước 1: Thu thập tất cả Node vào vector
    while (current != nullptr) {
        nodes.push_back(current);
        current = current->next;
    }

    // Bước 2: Sắp xếp vector dựa trên score
    sort(nodes.begin(), nodes.end(), [](Node* a, Node* b) {
        return a->score < b->score;
    });

    // Bước 3: Xây dựng lại linked list
    Node dummy;          // Node giả
    Node* tail = &dummy;

    for (Node* node : nodes) {
        tail->next = node;
        tail = node;
    }

    tail->next = nullptr;
    first = dummy.next;  // Cập nhật lại first qua tham chiếu
}

int main() {
    Node* head = new Node{1, 5, new Node{2, 3, new Node{3, 4, nullptr}}};
    
    sortLinkedList(head);  // Truyền trực tiếp con trỏ head
    
    // In danh sách đã sắp xếp
    Node* current = head;
    while (current != nullptr) {
        cout << "ID: " << current->id 
                  << ", Score: " << current->score << endl;
        current = current->next;
    }
    
    return 0;
}
```
chien22t1020554
buihoangquangchien
Huuviet22t1020796
Huuviet2@
PhanBaDu22T1020073
sv04022004
22t1020161
huyen11@
22T1020581@husc.edu.vn 
@0762581660
22T1020292@husc.edu.vn 
nheynhey123


