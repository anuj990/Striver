#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0;
        int ten = 0;
        for(int i =0;i<n;i++){
            if(bills[i]==5){
                five++;
            }else if(bills[i] ==10){
                if(five>0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(ten>0 && five>0){
                    five--;
                    ten--;
                }else if(five>=3){
                    five -=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};