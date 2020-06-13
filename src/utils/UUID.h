//
// Created by Grant Horner on 6/13/20.
//

#ifndef ORC_FORTRESS_UUID_H
#define ORC_FORTRESS_UUID_H

class UUID {
public:
    UUID();
    [[nodiscard]] const std::string &GetValue() const;


private:
    std::string value_;
};

#endif //ORC_FORTRESS_UUID_H
