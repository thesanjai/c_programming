#include <bits/stdc++.h>

using namespace std;



int main(){

    vector<int> a ={1,2,2,1,4,5};

    unordered_map<int,int> umap;

    queue<int> q;
    vector<int> ans;

    for(auto i : a){

        if(umap.find(i) != umap.end()){
             //check element is found
             //if found add it to the ans vector
            
                ans.push_back(i);
                if(ans.size()==2){
                    break;  
                }
        }else{
            //if not found insert and print it
            umap[i]++;
            cout<<umap[i]<<"  "<<i<<endl;
        }
    }

    cout<<"\nPrinting ans: \n";

    for(auto i : ans){
        cout<<i<<endl;
    }
   /* vector<int> ans;
    while(!q.empty()){
        int first = q.front();
        if(umap[first] ==2){
            ans.push_back(first);
        }
        q.pop();
        if(ans.size() == 2) break;
    }


    for(auto i : ans){
        cout<<i<<endl;
    }
    
    
    
    
    if(umap[i]==2){
                ans.push_back(i);
                if(ans.size()==2){
                    break;
                }
            }*/

}