class Stack { 
    char top;
    std::vector<char> values;
  
public:
    const std::size_t MAX = 1000;
    Stack() { top = -1; }
    void push(char x);
    void pop(); 
    char peek();
}; 

void Stack::push(char x)
{
    if ((values.size() + 1) > MAX)
    {
        std::cout << "Stack Overflow" << std::endl;
    }
    else
    {
        top = x;
        values.push_back(x);
    }
}

void Stack::pop()
{
    if ((values.size() - 1) < 1)
    {
        std::cout << "Stack Underflow" << std::endl;
    }
    else
    {
        values.pop_back();
        top = values.at(values.size() - 1);
    }
}

char Stack::peek()
{
    return top;
}

class Solution {
public:
    Stack stackCheck1;

    bool isPalindrome(int x) {
        std::string strX = std::to_string(x);
        bool match;
        for (int iterator = 0; iterator < strX.length(); iterator++)
        {
            stackCheck1.push(strX[iterator]);
        }

        for (int iterator = 0; iterator < strX.length(); iterator++)
        {
            char checkVal = stackCheck1.peek();
            stackCheck1.pop();
            if (checkVal == strX[iterator])
            {
                match = true;
            }
            else
            {
                match = false;
                return false;
            }
        }

        return true;
    }
};