#include <iostream>
#include <algorithm> 


/*
    https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#p1-express-ideas-directly-in-code
*/
void P1_Express_ideas_directly_in_code(std::vector<std::string>& v_str) {
    std::string val;
    std::cin >> val;
    
    // std::vector<std::string>::iterator it
    auto it = std::find(begin(v_str), end(v_str), val); 

    if (it != v_str.end()) {
        std::cout << "Element found: " << *it << std::endl;
        std::cout << "Index: " << std::distance(v_str.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    /*
    change_speed(double s);   // bad: what does s signify?
    change_speed(Speed s);    // better: the meaning of s is specified
    change_speed(2.3);        // error: no unit
    change_speed(23_m / 10s); // meters per second
    */
}

/*    
    https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#p3-express-intent
*/
void P3_Express_intent() {
    // Example:
    int index = 0;
    while (index < v.size()) {
        // ... do something with v[index] ...
    }

    // index outlives the scope of the loop, might not be intented. That it might be misused
    // Better:
    for (const auto& x : v) { /* do something with the value of x */ }
    for (auto& x : v) { /* modify x */ }


    std::for_each(v, [](int x) { /* do something with the value of x */ });
    std::for_each(par, v, [](int x) { /* do something with the value of x */ });

    /*
    - simple for loops vs. range-for loops
    - f(T*, int) interfaces vs. f(span<T>) interfaces
    - loop variables in too large a scope
    - naked new and delete
    - functions with many parameters of built-in types
    */

}

/*
    https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#p4-ideally-a-program-should-be-statically-type-safe
*/
void P_4_Ideally_a_program_should_be_statically_type_safe() {
    /*
    * Problem areas when program would be completely statically (compile-time) type safe:
    - unions
    - casts
    - array decay
    - range errors
    - narrowing conversions
    => These areas are sources of serious problems (e.g., crashes and security violations).
    
    Always suggest alternative:
    - unions – use variant (in C++17)
    - casts – minimize their use; templates can help
    - array decay – use span (from the GSL)
    - range errors – use span
    - narrowing conversions – minimize their use and use narrow or narrow_cast
    (from the GSL) where they are necessary
    */

}
