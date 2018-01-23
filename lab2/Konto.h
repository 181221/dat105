//
// Created by peder on 23.01.2018.
//

#ifndef LAB2_KONTO_H
#define LAB2_KONTO_H


class Konto {
public:
    enum Type {
        bitcoin, hackos, gullmynt
    };

    bool innskudd(double n);

    bool uttak(double n);

    Konto(int id, Type type);

    ~Konto() = default;

    double getBeholdning() const;

    Type getType() const;

private:
    int id;
    double beholdning;
    Type type;
};


#endif //LAB2_KONTO_H
