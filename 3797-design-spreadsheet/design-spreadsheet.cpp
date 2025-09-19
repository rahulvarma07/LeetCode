class Spreadsheet {
public:
    vector<vector<long long int>> spreadSheet;
    Spreadsheet(int rows) {
        spreadSheet.resize(rows, vector<long long int>(26, 0));
    }
    
    void setCell(string cell, int value) {
        string num = "";
        for(int i = 1; i < cell.size(); i++){
            if(cell[i] >= '0' && cell[i] <= '9') num += cell[i];
        }
        int n = stoi(num);
        spreadSheet[n-1][cell[0]-'A'] = value;
    }
    
    void resetCell(string cell) {
        setCell(cell, 0);
    }
    
    int getCellValue(string cell){
        string num = "";
        for(int i = 1; i < cell.size(); i++){
            if(cell[i] >= '0' && cell[i] <= '9') num += cell[i];
        }
        int n = stoi(num);
        return spreadSheet[n-1][cell[0]-'A'];
    }

    int getValue(string formula) {
        string oper1 = "", oper2 = "";
        bool isChar1 = false, isChar2 = false;
        int i = 1;
        for(; i < formula.size(); i++){
            if(formula[i] == '+'){
                i++;
                break;
            }
            if(formula[i] >= 'A' && formula[i] <= 'Z') isChar1 = true;
            oper1 += formula[i];
        }
        for(; i < formula.size(); i++){
            if(formula[i] >= 'A' && formula[i] <= 'Z') isChar2 = true;
            oper2 += formula[i];
        }

        if(!isChar1 && !isChar2){
            return (stoi(oper1) + stoi(oper2));
        }else if(isChar1 && !isChar2){
            return stoi(oper2)+(getCellValue(oper1));
        }else if(!isChar1 && isChar2){
            return stoi(oper1)+getCellValue(oper2);
        }else{
            return getCellValue(oper1)+getCellValue(oper2);
        }
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */