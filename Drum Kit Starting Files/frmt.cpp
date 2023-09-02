#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string str;
    cin>>str;
    int count =0;
unordered_map<char,int> map;
    for(int i=0;i<str.length();i++){
        map[str[i]]++;
    }

    for(int i=0;i<str.length();i++){
        if(map[str[i]]>=3){
            count++;
            i--;
            map[str[i]]-=3;
        }else if(map[str[i]]==2){
            
            if(i+1<str.length()){
            map[str[i]]=0;
            map[str[i+1]]--;
            count++;
            }
        }else if(map[str[i]]==1){
            map[str[i]]=0;
            if( i+1 <str.length() && map[str[i+1]]>=2){
                map[str[i+1]]=0;
                count++;
            }else if(i+2<str.length()){
                map[str[i+1]]--;
                map[str[i+2]]--;
                count++;
            }

        }
    }
    cout<<count<<endl;
    }
}