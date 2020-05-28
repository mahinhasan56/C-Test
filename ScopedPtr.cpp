Struct A
{
    A():int _ptr_(new int)
    {
    }
private:
    boost::Scoped_ptr<int> int_ptr(new int)
}
int  main(int char**)
{
    boost::scoped_ptr<int>int_ptr(new int)
    int_ptr.reset(new int);
}
Additional noters on scoped pointer
1.cannot copy
2.cannnot use in stl container
3.can swap pointers with another scoped_ptr
4.can reset the scoped ptr to anything deleting the object currently owned.
