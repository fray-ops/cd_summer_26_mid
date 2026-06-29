 #include <iostream> 

#include <string> 

  using namespace std; 

   void tokenization(string P) { 

    string identifiers = ""; 

    string numbers = ""; 

     string operators = ""; 

      string keywords = ""; 

      string punctuations = ""; 

    int n = P.length(); 

      int left = 0; 

       while (left < n) { 

          if (P[left] == ' ' || P[left] == '\t') { 

                    left++; 

                     continue; 

        } 

         if ((P[left] >= 'a' && P[left] <= 'z') || (P[left] >= 'A' && P[left] <= 'Z')) { 

              int right = left; 

             while (right < n && ((P[right] >= 'a' && P[right] <= 'z') || 

                                  (P[right] >= 'A' && P[right] <= 'Z') || 

                                   (P[right] >= '0' && P[right] <= '9'))) { 

                right++; 

            } 

 

        string word = P.substr(left, right - left); 

 

            if (word == "cout" || word == "cin" || word == "endl") { 

                keywords += word + " "; 

            } else { 

                identifiers += word + " "; 

            } 

            left = right; 

        } 

        else if (P[left] >= '0' && P[left] <= '9') { 

            int right = left; 

            while (right < n && (P[right] >= '0' && P[right] <= '9')) { 

                right++; 

            } 

 

            numbers += P.substr(left, right - left) + " "; 

            left = right; 

        } 

        else if (P[left] == '+' || P[left] == '-' || P[left] == '*' || P[left] == '/' || P[left] == '<' || P[left] == '>') { 

            int right = left + 1; 

 

                  if ((P[left] == '<' && right < n && P[right] == '<') || 

                        (P[left] == '>' && right < n && P[right] == '>')) { 

                               right++; 

        } 

 

            operators += P.substr(left, right - left) + " "; 

                    left = right; 

        } 

        else if (P[left] == ';' || P[left] == ':' || P[left] == '{' || P[left] == '}') { 

            punctuations += P[left]; 

            punctuations += " "; 

            left++; 

        } 

         else { 

            left++; 

    } 

} 

     cout << "IDENTIFIERS: " << identifiers << endl; 

      cout << "NUMBERS: "     << numbers << endl; 

      cout << "OPERATORS: "   << operators << endl; 

     cout << "KEYWORDS: "    << keywords << endl; 

     cout << "PUNCTUATIONS: " << punctuations << endl; 

} 

 

int main() { 

    string P; 

    cout << "PLEASE ENTER A VALID EXPRESSION: "; 

    getline(cin, P); 

 

    tokenization(P); 

 

    return 0; 

} 