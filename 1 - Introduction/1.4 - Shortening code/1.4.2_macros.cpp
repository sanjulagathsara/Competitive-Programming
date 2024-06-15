/*
strings will be changed before compilation

can shorten code

macros are defined using #define

#define F first
#define S second
#define PB push_back
#define MP make_pair

after this the code
v.push_back(make_pair(1, 2));

can be written as
v.PB(MP(1, 2));

also can shorten loops

#define REP(i, a, b) for (int i = a; i < b; i++)

after this the code

for (int i = 0; i < 5; i++)
{
    printf("%d\n", i);
}

can be written as

REP(i, 0, 5)
{
    printf("%d\n", i);
}
*/


