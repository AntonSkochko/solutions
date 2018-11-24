// В качестве упражнения на частичную специализацию шаблонов классов вам предлагается
// реализовать простой шаблон SameType. Этот шаблон не содержит никаких методов, 
// а только одно статическое константное поле типа bool, с именем value. Шаблон 
// принимает два типовых параметра, и если два типовых параметра шаблона являются
// одним и тем же типом, то статическое поле value должно хранить значение true,
// в противном случае значение false. 

template<typename T, typename V>
struct SameType {
    const static bool value = false;
};

template<typename T>
struct SameType<T, T> {
    const static bool value = true;
};

