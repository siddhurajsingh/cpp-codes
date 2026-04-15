#include <iostream>
using namespace std;

class DataSource {
public:
    virtual vector<string> fetch() = 0;
    virtual ~DataSource() {}
};

class APIDataSource : public DataSource {
public:
    vector<string> fetch() override { return {"data1", "data2", "data3"}; }
};

class DatabaseDataSource : public DataSource {
public:
    vector<string> fetch() override { return {"dbdata1", "dbdata2"}; }
};

int main() {
    APIDataSource ads;
    vector<string> data = ads.fetch();
    for (const auto& d : data) cout << d << endl;
    return 0;
}
