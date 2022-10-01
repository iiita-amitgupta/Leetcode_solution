class Cashier {
    int customer_count = 0;
    unordered_map <int, int> mp;
    int dis = 0;
    int nth = 0;
public:
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        for(int i = 0; i < products.size(); i++){
            mp[products[i]] = prices[i];
        }
        nth = n;
        dis = discount;
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        double total = 0;
        customer_count++;
        for(int i = 0; i < product.size(); i++){
            total += mp[product[i]] * amount[i];
        }
        if(customer_count % nth == 0){
            cout << total << " ";
            total = total * ((100-dis)/100.0);
            cout << total << " ";
        }
        return total;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */  