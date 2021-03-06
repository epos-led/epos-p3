// EPOS Address_Space Abstraction Declarations

#ifndef __address_space_h
#define __address_space_h

#include <mmu.h>
#include <segment.h>

__BEGIN_SYS

class Address_Space: private MMU::Directory
{
    friend class Task;

private:

    using MMU::Directory::activate;

public:
    typedef CPU::Phy_Addr Phy_Addr;
    typedef CPU::Log_Addr Log_Addr;

    Address_Space();
    Address_Space(MMU::Page_Directory * pd);
    ~Address_Space();

    using MMU::Directory::pd;

    Log_Addr attach(const Segment & seg);
    Log_Addr attach(const Segment & seg, Log_Addr addr);
    void detach(const Segment & seg);

    Phy_Addr physical(Log_Addr address);
};

__END_SYS

#endif
