#ifndef TUOQWPQ_57463_VNAJDL_587572_VBAYHQWTRC_57462
#define TUOQWPQ_57463_VNAJDL_587572_VBAYHQWTRC_57462

template <typename T>
struct Singleton
{
    static T& getInstance()
    {
        static T inst;
        return inst;
    }

protected:
    Singleton() {}
    
private:
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
};

#define DEFINE_SINGLETON(type) struct type : Singleton<type>

#endif
