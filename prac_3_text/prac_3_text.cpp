#include <iostream>
#include <fstream>


int main()
{
    setlocale(LC_ALL, "rus");
    

    std::ifstream in("input.txt", std::ios::in);
    std::ofstream out("output.txt", std::ios::out);
   
    
  
    char str[1000] = { '\0' };
    char letters[] = { 'à', 'ó', 'å', 'û', 'î', 'ý', 'ÿ', 'è', 'þ', '¸', '¨', 'Ó', 'Å', 'Û', 'À', 'Î', 'Ý', 'ß', 'È', 'Þ','\0'};
    char found_letters[100] = { '\0' };
 
    while (!in.eof()) {
        in >> str;
      
       int s = 1;
       int k = 0;
       int d = 0;

        for (int i = 0; i < 100; i++) {
            found_letters[i] ='\0';
        }

        for (int i = 0; i < strlen(str); i++) {
            if (str[i] >= 'À' && str[i] <= 'ÿ' || str[i] == '¸' || str[i] == '¨') {
                for (int j = 0; j < strlen(letters); j++) {
                    if (str[i] == letters[j]) {
                        found_letters[k] = str[i];
                        k++;
                        break;
                    }
                }
            }
        }

        s = strlen(found_letters);
        for (int i = 0; i < strlen(found_letters); i++) {
            for (int j = 0; j < strlen(found_letters); j++) {
                if (found_letters[i] != found_letters[j]) {
                    d++;
                }
            }
            if (d < s) {
                s = d;
            }
            d = 0;
        }
        
        if (s >= 4) {
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] >= 'à' && str[i] <= 'ÿ') {
                    str[i] = str[i] - 32;
                }
                else if (str[i] == '¸') {
                    str[i] = '¨';
                }
                else if (str[i] >= 'À' && str[i] <= 'ß') {
                    continue;
                }
            }
            out << str << "(";
            for (int i = 0; i < strlen(found_letters)-1; i++) {
                out << found_letters[i] <<',' << " ";
            }
            out << found_letters[strlen(found_letters) - 1] << ")"<<" ";
        }

        else 
        {
            out << str << " ";
        }


    }

    in.close();
    out.close();
    return 0;
}


