#include<iostream>
#include<vector>


void Elase_Enctyption(int value)
{
    
    
    if (value == 1)
    {
        std::cout << 1 << std::endl;
    }
    
    else if (value == 0)
    {
        std::cout << 0 << std::endl;
    }
    
    else
    {
        
        std::cout << "Your Value: " << value << std::endl;
        int k;
       std::vector<int> mas(0);
       std::vector<int> mas_BIN(0);
       std::vector<int> mas_BIN_ZERO(0);
        
        // Transform to BIN
        
        while (value != 1 && value != 0)
        {
            k = value % 2;
            mas.push_back(k);
            value = value / 2;
        }
        
        mas.push_back(value);
        
        
        std::cout << "BIN(Value): ";
        for (int i = mas.size() - 1; i >= 0; i --)
        {
            std::cout << mas[i];
        }
        std::cout << std::endl;
        
        // BIN value without first number
        
        std::cout << "BIN(Value) without first number: ";
        for (int i = mas.size() - 2; i >= 0; i --)
        {
            std::cout << mas[i];
        }
        
        std::cout << std::endl;
        
        int BIN_BIN = mas.size();
        std::cout << "Lenght(BIN): " << BIN_BIN;
        
        while (BIN_BIN != 1 && BIN_BIN != 0)
        {
            k = BIN_BIN % 2;
            mas_BIN.push_back(k);
            BIN_BIN = BIN_BIN / 2;
        }
        
        std::cout << std::endl;
        mas_BIN.push_back(BIN_BIN);
        
        // Lenght of BIN in BIN
        
        std::cout << "BIN(Lenght(BIN)): ";
        
        for (int i = mas_BIN.size() - 1; i >= 0; i--)
        {
            std::cout << mas_BIN[i];
        }
        std::cout << std::endl;
        
        for (int i = 0; i < mas_BIN.size() - 1; i ++)
        {
            mas_BIN_ZERO.push_back(0);
        }
        
        // Lenght of BIN in BIN with all zeroes without one zero
        
        std::cout << "BIN(Lenght(BIN))-1(all zeroes): ";
        for (int i = 0; i < mas_BIN_ZERO.size(); i ++)
        {
            std::cout << mas_BIN_ZERO[i];
        }
        
        std::cout << std::endl << std::endl;
        
        std::cout << "Encrypted: ";
        
        for (int i = 0; i < mas_BIN_ZERO.size(); i ++)
        {
            std::cout << mas_BIN_ZERO[i];
        }
        
        
        for (int i = mas_BIN.size() - 1; i >= 0; i --)
        {
            std::cout << mas_BIN[i];
        }
        
        
        for (int i = mas.size() - 2; i >= 0; i --)
        {
            std::cout << mas[i];
        }
        
       std::cout << std::endl;
    }
}

int main()
{
    int value;
    std::cout << "Enter your value: ";
    std::cin >> value;
    Elase_Enctyption(value);
    
}
