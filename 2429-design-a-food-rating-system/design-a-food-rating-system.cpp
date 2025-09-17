class FoodRatings {
public:
    unordered_map<string, string> mapCuisine;
    unordered_map<string, int> mapRatings;
    unordered_map<string, set<pair<int,string>>> highestRating;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++) {
            mapCuisine[foods[i]] = cuisines[i];
            mapRatings[foods[i]] = -ratings[i];
            highestRating[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisineName = mapCuisine[food];
        int oldRating = mapRatings[food];
        highestRating[cuisineName].erase({oldRating, food});
        mapRatings[food] = -newRating; 
        highestRating[cuisineName].insert({-newRating, food});
    }
    
    string highestRated(string cuisine) {
        return highestRating[cuisine].begin()->second;
    }
};
