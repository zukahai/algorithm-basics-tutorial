#!/bin/awk -f
#
BEGIN {
	while (getline < "a.v") { array[$0]=1}

}
{
	if(array[$0]==1) print
}
