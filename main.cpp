

//参照を行わず自力で実装する！！


# include <iostream>
#include <string>
#include <vector>
#include<math.h>
using namespace std;




#if 0

//名前を単純に出力する。
int main() {

	std::cout << "Keisuke Matsuoka !!" << std::endl;　//これはフラッシュする。
	std::cout << "Keisuke Matsuoka !!\n";　//これはフラッシュしない。型安全を保障。
	printf("Keisuke Matsuoka !!\n");　//C++に置いてはきほんてきには使わない。ただ、速度が必要、もしくは、すでにCで書かれている場合に使う。
	return 0;

}
#endif


#if 0

int main() {

	for (int i = 0; i < 3; i++) {//前置インクリメントが理想
		std::cout << "hello world" << std::endl;
	}

	return 0;

}

#endif


#if 0

int main() {

	while (true) {//無限ループを実装。breakを忘れず。
		cout << "整数値を入力： ";
		int n;
		cin >> n;

		if (cin.fail()) {
			cin.clear();                 // エラー状態をクリア
			cin.ignore(10000, '\n');    // 入力バッファをクリア
			cout << "整数を入力してください。" << endl;
			continue;
		}

		if (n % 2 == 0) {
			cout << "偶数が入力されました。プログラムを終了します。" << endl;
			break;
		}
		else{
			cout << "奇数が入力されました。偶数を入力してください。"<< endl;
		}

	}

	return 0;

}

# endif

#if 0

int main() {


	while (true) {
		cout << "Helloと入力： ";
		string str;
		cin >> str;
		if (str == "Hello") {
			cout << "OK!" << endl;
			break;
		}
		else {
			cout << "NG!" << endl;
		}

	}
	return 0;
}

# endif


#if 0

int main() {


	while (true) {

		cout << "整数値を入力してください: ";
		int n;
		cin >> n;

		if (cin.fail()) {
			cin.clear();                 // エラー状態をクリア
			cin.ignore(10000, '\n');    // 入力バッファをクリア
			cout << "整数を入力してください。" << endl;
			continue;
		}

		if (n > 0) {
			cout << "0より大きい";
		}
		else {
			cout << "0以下";
		}

		break;
	}
	
	return 0;
}

# endif


#if 0

int main() {


	string s;
	int n;

	while (true) {
		cout << "文字列を入力してください: ";
		cin >> s;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(100000, '\n');
			"文字列以外が入力されました。文字列を入力してください: ";
			continue;
		}

		break;
	}


	while (true) {
		cout << "整数を入力してください: ";
		cin >> n;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(100000, '\n');
			"整数以外が入力されました。整数を入力してください: ";
			continue;
		}

		break;
	}

	for (int i = 0; i < n; ++i) {
		cout << s << endl;
	}

	return 0;
}

# endif


#if 0

//これはヘッダーファイルに
class Vector2D {
private:
	double x, y;

public:
	// コンストラクタ（初期化）
	Vector2D() : x(0.0), y(0.0) {}

	// setter
	void setX(double xVal) { x = xVal; }
	void setY(double yVal) { y = yVal; }

	// getter
	double getX() const { return x; }
	double getY() const { return y; }

	// ベクトルの長さを計算
	double length() const {
		return sqrt(x * x + y * y);
	}
};


int main() {
	Vector2D v;

	double inputX, inputY;
	std::cout << "v.x = ";
	std::cin >> inputX;
	v.setX(inputX);

	std::cout << "v.y = ";
	std::cin >> inputY;
	v.setY(inputY);

	std::cout << "Vector = (" << v.getX() << ", " << v.getY() << ")\n";
	std::cout << "Length = " << v.length() << std::endl;

	return 0;
}

# endif


#if 0

class Student {
private:
	string name;
	int grade;
	string cls;
	int age;

public:
	// getter
	string getName() const { return name; }
	int getGrade() const { return grade; }
	string getCls() const { return cls; }
	int getAge() const { return age; }

	// setter
	void setName(const string& newName) { name = newName; }
	void setGrade(int newGrade) { grade = newGrade; }
	void setCls(const string& newCls) { cls = newCls; }
	void setAge(int newAge) { age = newAge; }

	// 情報表示関数
	void showInformation() const {
		cout << "Name: " << name << "\n"
			<< "Grade: " << grade << "\n"
			<< "Class: " << cls << "\n"
			<< "Age: " << age << endl;
	}
};

int main() {
	Student keisuke;

	string inputStr;
	int inputInt;

	cout << "名前を入力してください: ";
	getline(cin, inputStr);
	keisuke.setName(inputStr);

	cout << "学年を入力してください: ";
	cin >> inputInt;
	keisuke.setGrade(inputInt);

	cin.ignore();  // 改行文字を消す

	cout << "クラスを入力してください: ";
	getline(cin, inputStr);
	keisuke.setCls(inputStr);

	cout << "年齢を入力してください: ";
	cin >> inputInt;
	keisuke.setAge(inputInt);

	cin.ignore();

	Student tani;



	cout << "名前を入力してください: ";
	getline(cin, inputStr);
	tani.setName(inputStr);

	cout << "学年を入力してください: ";
	cin >> inputInt;
	tani.setGrade(inputInt);

	cin.ignore();  // 改行文字を消す

	cout << "クラスを入力してください: ";
	getline(cin, inputStr);
	tani.setCls(inputStr);

	cout << "年齢を入力してください: ";
	cin >> inputInt;
	tani.setAge(inputInt);

	cout << "\n=== 入力された情報 ===" << endl;
	keisuke.showInformation();
	cout << "\n=== 入力された情報 ===" << endl;
	tani.showInformation();


	return 0;
}



#endif


#if 0

class Student {
private:
	string name;
	int grade;
	string cls;
	int age;

public:
	// getter
	string getName() const { return name; }
	int getGrade() const { return grade; }
	string getCls() const { return cls; }
	int getAge() const { return age; }

	// setter
	void setName(const string& newName) { name = newName; }//constの参照わたしはコピーコストが大きいから参照わたし
	void setGrade(int newGrade) { grade = newGrade; }
	void setCls(const string& newCls) { cls = newCls; }
	void setAge(int newAge) { age = newAge; }

	void showInformation() const {
		cout << "Name: " << name << "\n"
			<< "Grade: " << grade << "\n"
			<< "Class: " << cls << "\n"
			<< "Age: " << age << endl;
	}
};

int main() {
	vector<Student> students;

	while (true) {
		cout << "名前を入力してください（終了は end）：";
		string inputStr;
		getline(cin, inputStr);
		if (inputStr == "end") {
			break;
		}

		Student obj;
		obj.setName(inputStr);

		cout << "学年を入力してください: ";
		int inputInt;
		cin >> inputInt;
		obj.setGrade(inputInt);

		cin.ignore(); // 改行除去

		cout << "クラスを入力してください: ";
		getline(cin, inputStr);
		obj.setCls(inputStr);

		cout << "年齢を入力してください: ";
		cin >> inputInt;
		obj.setAge(inputInt);

		cin.ignore(); // 改行除去

		students.push_back(obj);

		cout << "\n登録完了！\n\n";
	}

	cout << "\n=== 登録された学生情報一覧 ===\n";
	for (const auto& s : students) {
		s.showInformation();
		cout << "-----------------\n";
	}

	return 0;
}


#endif



#if 1


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
private:
	string name;
	int price;
	double tax_rate;

public:
	void showInformation() const {
		cout << "Product Name: " << name << "\n";
		cout << "Price: " << price << "\n";
		cout << "Tax Rate: " << tax_rate << "\n\n";
	}

	void setName(const string& newName) { name = newName; }
	void setPrice(int newPrice) { price = newPrice; }
	void setTax_rate(double newTax_rate) { tax_rate = newTax_rate; }
};

int main() {
	vector<Product> products;

	// 1つ目の製品
	Product p1;
	p1.setName("Apple");
	p1.setPrice(100);
	p1.setTax_rate(0.08);
	products.push_back(p1);

	// 2つ目の製品
	Product p2;
	p2.setName("Banana");
	p2.setPrice(80);
	p2.setTax_rate(0.10);
	products.push_back(p2);

	// 3つ目の製品
	Product p3;
	p3.setName("Orange");
	p3.setPrice(120);
	p3.setTax_rate(0.05);
	products.push_back(p3);

	// まとめて情報表示
	for (const auto& product : products) {
		product.showInformation();
	}

	return 0;
}



#endif