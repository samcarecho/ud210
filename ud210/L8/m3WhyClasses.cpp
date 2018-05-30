//
//  m3WhyClasses.cpp
//  ud210
//
//  Created by Sam Carecho on 1/28/18.
//  Copyright © 2018 j4fun. All rights reserved.
//

/*Goal: sort students by multiple data vaule
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
*/

#include "m3WhyClasses.hpp"

static bool byId (tuple<string, int, int> a, tuple<string, int, int> b) {
    return (get<1>(a) < get<1>(b));
}

static bool byYear (tuple<string, int, int> a, tuple<string, int, int> b) {
    bool sortResult;
    
    if (get<2>(a) == get<2>(b)) {
        sortResult = get<0>(a) < get<0>(b);
    }
    else {
        sortResult = get<2>(a) < get<2>(b);
    }
    
    return sortResult;
}

void runWClass(void)
{
    //ToDo sort the students by name, then by number, then by gradDate
    
    vector<tuple<string, int, int>> alumnae;
    
    alumnae.emplace_back("Joe Lime", 15, 2019);
    alumnae.emplace_back("Bob Green", 3, 2020);
    alumnae.emplace_back("SallyAnne Green", 1, 2017);
    alumnae.emplace_back("Annie Blue", 10, 2020);
    alumnae.emplace_back("Jose Lemon", 25, 2016);
    
    sort(alumnae.begin(), alumnae.end());
    cout<<"Sorted by name:\n";
    cout<<"---------------\n";
    for (int i=0; i < alumnae.size(); i++)
    {
        cout<<get<0>(alumnae[i])<<", "<<get<1>(alumnae[i])<<", "<<get<2>(alumnae[i])<<"\n";
    }
    cout<<"---------------\n";
    
    sort(alumnae.begin(), alumnae.end(), byId);
    cout<<"Sorted by id:\n";
    cout<<"---------------\n";
    for (int i=0; i < alumnae.size(); i++)
    {
        cout<<get<1>(alumnae[i])<<", "<<get<0>(alumnae[i])<<", "<<get<2>(alumnae[i])<<"\n";
    }
    cout<<"---------------\n";
    
    sort(alumnae.begin(), alumnae.end(), byYear);
    cout<<"Sorted by year:\n";
    cout<<"---------------\n";
    for (int i=0; i < alumnae.size(); i++)
    {
        cout<<get<2>(alumnae[i])<<", "<<get<0>(alumnae[i])<<", "<<get<1>(alumnae[i])<<"\n";
    }
    cout<<"---------------\n";
}

