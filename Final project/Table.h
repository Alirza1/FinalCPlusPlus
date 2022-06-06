#include <iostream>

using namespace std;
class Table {
	string tableNo;
	string messageFromKitchen;
public:
	Table():tableNo(" "),messageFromKitchen(""){}
	Table(const string tableNo) {
		setTableNo(tableNo);
	}
	void setTableNo(const string& tableNo) {
		if (tableNo == "10" || tableNo == "9" || tableNo == "8" || tableNo == "7" || tableNo == "6" || tableNo == "5" || tableNo == "4" || tableNo == "3" || tableNo == "2" || tableNo == "1"|| tableNo == "0") {
			this->tableNo = tableNo;
		}
	}
	void setMessageFromKitchen(const string& message) {
		if (!message.empty()) {
			this->messageFromKitchen = message;
		}
	}
	 string getTableNo() {
		return tableNo;
	}
	string getMessageFromKitchen() {
		return messageFromKitchen;
	}
};