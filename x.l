%{
    #include "x.tab.h"
%}

ID [a-z]+


%%
{ID} return (ID1);
%%