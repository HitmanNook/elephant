// Student ID: 20607502
// TODO - Replace the number above with your actual student ID
//
#ifndef Stacks_h
#define Stacks_h
#include <vector>
#include <sstream>
class Stack_Int {
private:
    std::vector<int> _data;

public:
    // No explicit constructor or destructor
    size_t size() const {
        return _data.size();
    }
    bool is_empty() const {
        return _data.empty();
    }
    void push(int val) {
        _data.push_back(val);
    }
    int top(bool& success) const {
        if(_data.empty()){
            success = false;
            return 0;
        }
        success = true;
        return _data[_data.size() - 1];
    }
    bool pop() {
        if(!_data.empty()){
            _data.pop_back();
            return true;
        }
        return false;
    }
    bool pop(int& val) {
        if(!_data.empty()){
            val = _data[_data.size()-1];
            _data.pop_back();
            return true;
        }
        val = 0;
        return false;
    }
    std::string to_string() const {
        std::string ret = "Stack (" + std::to_string(_data.size()) + " elements):\n";
        if(_data.size() < 10){
            for (size_t i = _data.size() - 1; i != SIZE_MAX; i--) {
                int cring = _data[i];
                std::ostringstream oss;
                oss << cring;
                std::string fun = oss.str();
                ret += fun + "\n";
            }
        }else{
            for (size_t i = _data.size() - 1; i >= _data.size() - 10; i--) {
                int cring = _data[i];
                std::ostringstream oss;
                oss << cring;
                std::string fun = oss.str();
                ret += fun + "\n";
                //ret += "<" + std::to_string(_data[i]) + ">\n";
            }
            ret += "...\n";
        }
        ret += "Elements, if listed above, are in increasing order of age.";
        return ret;
    }
    // Don't remove the following line
    friend class Tests;
};

class Stack_String {
private:
    std::vector<std::string> _data;

public:
    // No explicit constructor or destructor
    size_t size() const {
        return _data.size();
    }
    bool is_empty() const {
        return _data.empty();
    }
    void push(std::string val) {
        _data.push_back(val);
    }
    std::string top(bool& success) const {
        if(_data.empty()){
            success = false;
            return 0;
        }
        success = true;
        return _data[_data.size() - 1];
    }
    bool pop() {
        if(!_data.empty()){
            _data.pop_back();
            return true;
        }
        return false;
    }
    bool pop(std::string& val) {
        if(!_data.empty()){
            val = _data[_data.size()-1];
            _data.pop_back();
            return true;
        }
        val = "";
        return false;
    }
    std::string to_string() const {
        std::string ret = "Stack (" + std::to_string(_data.size()) + " elements):\n";
        if(_data.size() < 10){
            for (size_t i = _data.size() - 1; i != SIZE_MAX; i--) {
                ret += _data[i] + "\n";
            }
        }else{
            for (size_t i = _data.size() - 1; i >= _data.size() - 11; i--) {
                ret += _data[i] + "\n";
            }
            ret += "...\n";
        }
        ret += "Elements, if listed above, are in increasing order of age.";
        return ret;
    }
    // Don't remove the following line
    friend class Tests;
};
#endif /* Stacks_h */