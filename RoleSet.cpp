//
// Created by Olcay Taner Yıldız on 6.10.2018.
//

#include "RoleSet.h"

/**
 * A constructor of {@link RoleSet} class which takes id and name as inputs and initializes corresponding attributes
 * with these inputs.
 *
 * @param id  Id of the roleSet
 * @param name Name of the roleSet
 */
RoleSet::RoleSet(string id, string name) {
    this->id = move(id);
    this->name = move(name);
}

/**
 * Accessor for id.
 *
 * @return id.
 */
string RoleSet::getId() {
    return id;
}

/**
 * Accessor for name.
 *
 * @return name.
 */
string RoleSet::getName() {
    return name;
}

/**
 * The addRole method takes a {@link Role} as input and adds it to the roles {@link ArrayList}.
 *
 * @param role  Role to be added
 */
void RoleSet::addRole(Role role) {
    roles.push_back(role);
}

/**
 * The getRole method returns the role at the given index.
 *
 * @param index  Index of the role
 * @return {@link Role} at the given index.
 */
Role RoleSet::getRole(int index) {
    return roles.at(index);
}

/**
 * The size method returns the size of the roles {@link ArrayList}.
 *
 * @return the size of the roles {@link ArrayList}.
 */
unsigned long RoleSet::size() {
    return roles.size();
}

/**
 * Finds and returns the role with the given argument number n. For example, if n == 0, the method returns
 * the argument ARG0.
 * @param n Argument number
 * @return The role with the given argument number n.
 */
Role RoleSet::getRoleWithArgument(string n){
    for (auto role : roles){
        if (role.getN() == n){
            return role;
        }
    }
}
