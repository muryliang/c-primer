#include <assert.h>
#include <iostream>
#include <leveldb/db.h>
#include <memory>
#include <string>

int main() {
    std::shared_ptr<leveldb::DB> db;
    leveldb::DB* db_temp;
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db_temp);
    assert(status.ok());
    db.reset(db_temp);

    const int write_times = 10000;
    int i = 0;
    std::string key = "key";
    std::string value = "value";
    status = db->Put(leveldb::WriteOptions(), key, value);
    assert(status.ok());

    status = db->Get(leveldb::ReadOptions(), key, &value);
    assert(status.ok());
    std::cout << value << std::endl;

//    delete db;
    return 0;
}

