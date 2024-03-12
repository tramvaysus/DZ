//создать класс почтальона
//- св - ва: имя, номер, кол - во доставленных писем, письма в наличии
//- у всех объектов данного класса одно название почтового отделения
//- функции :
//    --доставка по указанному адресу(объект получает адрес и проверяет, есть ли письмо с данным адресом)
//    --получение письма для доставки
//    - у каждого письма : адрес, ФИО

#include <iostream>
#include <vector>


class Postman
{
private:
    std::string postoffice = "Pochta №1";
    std::string name;
    int id;
    int delivered_letter;
    int letter_on_hand;
    std::vector <std::string> letters;
public:
    Postman(std::string _name, int _id) : name(_name), id(_id), delivered_letter(0) {}
    
    void delivery(std::string _adress)
    {
        for (auto i = letters.begin(); i != letters.end(); i++)
        {
            if (*i == _adress)
            {
                std::cout << "Письмо с адресом " << _adress << " найдено и доставлено!\n";
                delivered_letter++;
                letters.erase(i);
            }
            else
            {
                std::cout << "Письмо с таким адресом не найдено.\n";
            }
        }
        
    }

    void receive_letter(std::string _data)
    {
        letters.push_back(_data);
    }

    int getDeliveredLetter() {
        return delivered_letter;
    }

};



int main()
{
    
}
