#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Floating point unit CPACR
    namespace FpuCpacrCpacr{    ///<Coprocessor access control          register
        using Addr = Register::Address<0xe000ed88,0xff0fffff,0x00000000,std::uint32_t>;
        ///CP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cp{}; 
    }
}
