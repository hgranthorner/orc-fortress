//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_ID_H
#define ORC_FORTRESS_ID_H


class ID {
public:
    ID();

    [[nodiscard]] long GetValue() const;
private:
    long value_;
    inline static long next_value_ = 1;
};


#endif //ORC_FORTRESS_ID_H
