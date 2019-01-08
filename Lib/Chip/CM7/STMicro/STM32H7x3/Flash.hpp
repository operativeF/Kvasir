#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash
    namespace FlashAcr{    ///<Access control register
        using Addr = Register::Address<0x52002000,0xffffffc8,0x00000000,std::uint32_t>;
        ///Read latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Flash signal delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> wrhighfreq{}; 
    }
    namespace FlashAcr{    ///<Access control register
        using Addr = Register::Address<0x52002100,0xffffffc8,0x00000000,std::uint32_t>;
        ///Read latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Flash signal delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> wrhighfreq{}; 
    }
    namespace FlashKeyr1{    ///<FLASH key register for bank 1
        using Addr = Register::Address<0x52002004,0x00000000,0x00000000,std::uint32_t>;
        ///Bank 1 access configuration unlock              key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr1{}; 
    }
    namespace FlashOptkeyr{    ///<FLASH option key register
        using Addr = Register::Address<0x52002008,0x00000000,0x00000000,std::uint32_t>;
        ///Unlock key option bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashOptkeyr{    ///<FLASH option key register
        using Addr = Register::Address<0x52002108,0x00000000,0x00000000,std::uint32_t>;
        ///Unlock key option bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashCr1{    ///<FLASH control register for bank          1
        using Addr = Register::Address<0x5200200c,0xf0107800,0x00000000,std::uint32_t>;
        ///Bank 1 configuration lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock1{}; 
        ///Bank 1 program enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1{}; 
        ///Bank 1 sector erase              request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ser1{}; 
        ///Bank 1 erase request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ber1{}; 
        ///Bank 1 program size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> psize1{}; 
        ///Bank 1 write forcing control              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fw1{}; 
        ///Bank 1 bank or sector erase start              control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> start1{}; 
        ///Bank 1 sector erase selection              number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> snb1{}; 
        ///Bank 1 CRC control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> crcEn{}; 
        ///Bank 1 end-of-program interrupt control              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie1{}; 
        ///Bank 1 write protection error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wrperrie1{}; 
        ///Bank 1 programming sequence error              interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pgserrie1{}; 
        ///Bank 1 strobe error interrupt enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> strberrie1{}; 
        ///Bank 1 inconsistency error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> incerrie1{}; 
        ///Bank 1 write/erase error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> operrie1{}; 
        ///Bank 1 read protection error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rdperrie1{}; 
        ///Bank 1 secure error interrupt enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rdserrie1{}; 
        ///Bank 1 ECC single correction error              interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sneccerrie1{}; 
        ///Bank 1 ECC double detection error              interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dbeccerrie1{}; 
        ///Bank 1 end of CRC calculation interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcendie1{}; 
    }
    namespace FlashSr1{    ///<FLASH status register for bank          1
        using Addr = Register::Address<0x52002010,0xf010fff0,0x00000000,std::uint32_t>;
        ///Bank 1 ongoing program              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy1{}; 
        ///Bank 1 write buffer not empty              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wbne1{}; 
        ///Bank 1 wait queue flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qw1{}; 
        ///Bank 1 CRC busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcBusy1{}; 
        ///Bank 1 end-of-program flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eop1{}; 
        ///Bank 1 write protection error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wrperr1{}; 
        ///Bank 1 programming sequence error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pgserr1{}; 
        ///Bank 1 strobe error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> strberr1{}; 
        ///Bank 1 inconsistency error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> incerr1{}; 
        ///Bank 1 write/erase error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> operr1{}; 
        ///Bank 1 read protection error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rdperr1{}; 
        ///Bank 1 secure error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rdserr1{}; 
        ///Bank 1 single correction error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sneccerr11{}; 
        ///Bank 1 ECC double detection error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dbeccerr1{}; 
        ///Bank 1 CRC-complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcend1{}; 
    }
    namespace FlashCcr1{    ///<FLASH clear control register for bank          1
        using Addr = Register::Address<0x52002014,0xf010ffff,0x00000000,std::uint32_t>;
        ///Bank 1 EOP1 flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrEop1{}; 
        ///Bank 1 WRPERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrWrperr1{}; 
        ///Bank 1 PGSERR1 flag clear              bi
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrPgserr1{}; 
        ///Bank 1 STRBERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrStrberr1{}; 
        ///Bank 1 INCERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrIncerr1{}; 
        ///Bank 1 OPERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrOperr1{}; 
        ///Bank 1 RDPERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrRdperr1{}; 
        ///Bank 1 RDSERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrRdserr1{}; 
        ///Bank 1 SNECCERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrSneccerr1{}; 
        ///Bank 1 DBECCERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrDbeccerr1{}; 
        ///Bank 1 CRCEND1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrCrcend1{}; 
    }
    namespace FlashOptcr{    ///<FLASH option control register
        using Addr = Register::Address<0x52002018,0x3fffffec,0x00000000,std::uint32_t>;
        ///FLASH_OPTCR lock option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Option byte start change option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> optstart{}; 
        ///Flash mass erase enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Option byte change error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> optchangeerrie{}; 
        ///Bank swapping configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swapBank{}; 
    }
    namespace FlashOptcr{    ///<FLASH option control register
        using Addr = Register::Address<0x52002118,0x3fffffec,0x00000000,std::uint32_t>;
        ///FLASH_OPTCR lock option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///Option byte start change option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> optstart{}; 
        ///Flash mass erase enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mer{}; 
        ///Option byte change error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> optchangeerrie{}; 
        ///Bank swapping configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swapBank{}; 
    }
    namespace FlashOptsrCur{    ///<FLASH option status register
        using Addr = Register::Address<0x5200211c,0x0bc10022,0x00000000,std::uint32_t>;
        ///Option byte change ongoing              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optBusy{}; 
        ///Brownout level option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///IWDG1 control option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iwdg1Hw{}; 
        ///D1 DStop entry reset option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStopD1{}; 
        ///D1 DStandby entry reset option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStbyD1{}; 
        ///Readout protection level option status              byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///IWDG Stop mode freeze option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fzIwdgStop{}; 
        ///IWDG Standby mode freeze option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fzIwdgSdby{}; 
        ///DTCM RAM size option              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> stRamSize{}; 
        ///Security enable option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> security{}; 
        ///User option bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rss1{}; 
        ///Device personalization status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> persoOk{}; 
        ///I/O high-speed at low-voltage status bit              (PRODUCT_BELOW_25V)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ioHslv{}; 
        ///Option byte change error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> optchangeerr{}; 
        ///Bank swapping option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swapBankOpt{}; 
    }
    namespace FlashOptsrCur{    ///<FLASH option status register
        using Addr = Register::Address<0x5200201c,0x0bc10022,0x00000000,std::uint32_t>;
        ///Option byte change ongoing              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> optBusy{}; 
        ///Brownout level option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///IWDG1 control option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iwdg1Hw{}; 
        ///D1 DStop entry reset option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStopD1{}; 
        ///D1 DStandby entry reset option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStbyD1{}; 
        ///Readout protection level option status              byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///IWDG Stop mode freeze option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fzIwdgStop{}; 
        ///IWDG Standby mode freeze option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fzIwdgSdby{}; 
        ///DTCM RAM size option              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> stRamSize{}; 
        ///Security enable option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> security{}; 
        ///User option bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rss1{}; 
        ///Device personalization status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> persoOk{}; 
        ///I/O high-speed at low-voltage status bit              (PRODUCT_BELOW_25V)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ioHslv{}; 
        ///Option byte change error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> optchangeerr{}; 
        ///Bank swapping option status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swapBankOpt{}; 
    }
    namespace FlashOptsrPrg{    ///<FLASH option status register
        using Addr = Register::Address<0x52002020,0x53c10023,0x00000000,std::uint32_t>;
        ///BOR reset level option configuration              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///IWDG1 option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iwdg1Hw{}; 
        ///Option byte erase after D1 DStop option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStopD1{}; 
        ///Option byte erase after D1 DStandby              option configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStbyD1{}; 
        ///Readout protection level option              configuration byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///IWDG Stop mode freeze option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fzIwdgStop{}; 
        ///IWDG Standby mode freeze option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fzIwdgSdby{}; 
        ///DTCM size select option configuration              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> stRamSize{}; 
        ///Security option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> security{}; 
        ///User option configuration bit              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rss1{}; 
        ///User option configuration bit              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rss2{}; 
        ///I/O high-speed at low-voltage              (PRODUCT_BELOW_25V)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ioHslv{}; 
        ///Bank swapping option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swapBankOpt{}; 
    }
    namespace FlashOptsrPrg{    ///<FLASH option status register
        using Addr = Register::Address<0x52002120,0x53c10023,0x00000000,std::uint32_t>;
        ///BOR reset level option configuration              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///IWDG1 option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iwdg1Hw{}; 
        ///Option byte erase after D1 DStop option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nrstStopD1{}; 
        ///Option byte erase after D1 DStandby              option configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nrstStbyD1{}; 
        ///Readout protection level option              configuration byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///IWDG Stop mode freeze option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fzIwdgStop{}; 
        ///IWDG Standby mode freeze option              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fzIwdgSdby{}; 
        ///DTCM size select option configuration              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> stRamSize{}; 
        ///Security option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> security{}; 
        ///User option configuration bit              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rss1{}; 
        ///User option configuration bit              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rss2{}; 
        ///I/O high-speed at low-voltage              (PRODUCT_BELOW_25V)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ioHslv{}; 
        ///Bank swapping option configuration              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> swapBankOpt{}; 
    }
    namespace FlashOptccr{    ///<FLASH option clear control          register
        using Addr = Register::Address<0x52002124,0xbfffffff,0x00000000,std::uint32_t>;
        ///OPTCHANGEERR reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrOptchangeerr{}; 
    }
    namespace FlashOptccr{    ///<FLASH option clear control          register
        using Addr = Register::Address<0x52002024,0xbfffffff,0x00000000,std::uint32_t>;
        ///OPTCHANGEERR reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrOptchangeerr{}; 
    }
    namespace FlashPrarCur1{    ///<FLASH protection address for bank          1
        using Addr = Register::Address<0x52002028,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 1 lowest PCROP protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> protAreaStart1{}; 
        ///Bank 1 highest PCROP protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> protAreaEnd1{}; 
        ///Bank 1 PCROP protected erase enable              option status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmep1{}; 
    }
    namespace FlashPrarPrg1{    ///<FLASH protection address for bank          1
        using Addr = Register::Address<0x5200202c,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 1 lowest PCROP protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> protAreaStart1{}; 
        ///Bank 1 highest PCROP protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> protAreaEnd1{}; 
        ///Bank 1 PCROP protected erase enable              option configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmep1{}; 
    }
    namespace FlashScarCur1{    ///<FLASH secure address for bank          1
        using Addr = Register::Address<0x52002030,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 1 lowest secure protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> secAreaStart1{}; 
        ///Bank 1 highest secure protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> secAreaEnd1{}; 
        ///Bank 1 secure protected erase enable              option status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmes1{}; 
    }
    namespace FlashScarPrg1{    ///<FLASH secure address for bank          1
        using Addr = Register::Address<0x52002034,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 1 lowest secure protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> secAreaStart1{}; 
        ///Bank 1 highest secure protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> secAreaEnd1{}; 
        ///Bank 1 secure protected erase enable              option configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmes1{}; 
    }
    namespace FlashWpsnCur1r{    ///<FLASH write sector protection for bank          1
        using Addr = Register::Address<0x52002038,0xffffff00,0x00000000,std::uint32_t>;
        ///Bank 1 sector write protection option              status byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrpsn1{}; 
    }
    namespace FlashWpsnPrg1r{    ///<FLASH write sector protection for bank          1
        using Addr = Register::Address<0x5200203c,0xffffff00,0x00000000,std::uint32_t>;
        ///Bank 1 sector write protection              configuration byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrpsn1{}; 
    }
    namespace FlashBootCurr{    ///<FLASH register with boot          address
        using Addr = Register::Address<0x52002040,0x00000000,0x00000000,std::uint32_t>;
        ///Boot address 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bootAdd0{}; 
        ///Boot address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootAdd1{}; 
    }
    namespace FlashBootPrgr{    ///<FLASH register with boot          address
        using Addr = Register::Address<0x52002044,0x00000000,0x00000000,std::uint32_t>;
        ///Boot address 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bootAdd0{}; 
        ///Boot address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootAdd1{}; 
    }
    namespace FlashCrccr1{    ///<FLASH CRC control register for bank          1
        using Addr = Register::Address<0x52002050,0xffccf878,0x00000000,std::uint32_t>;
        ///Bank 1 CRC sector number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> crcSect{}; 
        ///Bank 1 CRC select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> allBank{}; 
        ///Bank 1 CRC sector mode select              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> crcBySect{}; 
        ///Bank 1 CRC sector select              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> addSect{}; 
        ///Bank 1 CRC sector list clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cleanSect{}; 
        ///Bank 1 CRC start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> startCrc{}; 
        ///Bank 1 CRC clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cleanCrc{}; 
        ///Bank 1 CRC burst size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> crcBurst{}; 
    }
    namespace FlashCrcsadd1r{    ///<FLASH CRC start address register for bank          1
        using Addr = Register::Address<0x52002054,0x00000000,0x00000000,std::uint32_t>;
        ///CRC start address on bank              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcStartAddr{}; 
    }
    namespace FlashCrceadd1r{    ///<FLASH CRC end address register for bank          1
        using Addr = Register::Address<0x52002058,0x00000000,0x00000000,std::uint32_t>;
        ///CRC end address on bank 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcEndAddr{}; 
    }
    namespace FlashCrcdatar{    ///<FLASH CRC data register
        using Addr = Register::Address<0x5200205c,0x00000000,0x00000000,std::uint32_t>;
        ///CRC result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcData{}; 
    }
    namespace FlashEccFa1r{    ///<FLASH ECC fail address for bank          1
        using Addr = Register::Address<0x52002060,0xffff8000,0x00000000,std::uint32_t>;
        ///Bank 1 ECC error address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> failEccAddr1{}; 
    }
    namespace FlashKeyr2{    ///<FLASH key register for bank 2
        using Addr = Register::Address<0x52002104,0x00000000,0x00000000,std::uint32_t>;
        ///Bank 2 access configuration unlock              key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr2{}; 
    }
    namespace FlashCr2{    ///<FLASH control register for bank          2
        using Addr = Register::Address<0x5200210c,0xf0107800,0x00000000,std::uint32_t>;
        ///Bank 2 configuration lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock2{}; 
        ///Bank 2 program enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg2{}; 
        ///Bank 2 sector erase              request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ser2{}; 
        ///Bank 2 erase request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ber2{}; 
        ///Bank 2 program size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> psize2{}; 
        ///Bank 2 write forcing control              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fw2{}; 
        ///Bank 2 bank or sector erase start              control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> start2{}; 
        ///Bank 2 sector erase selection              number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> snb2{}; 
        ///Bank 2 CRC control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> crcEn{}; 
        ///Bank 2 end-of-program interrupt control              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie2{}; 
        ///Bank 2 write protection error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wrperrie2{}; 
        ///Bank 2 programming sequence error              interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pgserrie2{}; 
        ///Bank 2 strobe error interrupt enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> strberrie2{}; 
        ///Bank 2 inconsistency error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> incerrie2{}; 
        ///Bank 2 write/erase error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> operrie2{}; 
        ///Bank 2 read protection error interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rdperrie2{}; 
        ///Bank 2 secure error interrupt enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rdserrie2{}; 
        ///Bank 2 ECC single correction error              interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sneccerrie2{}; 
        ///Bank 2 ECC double detection error              interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dbeccerrie2{}; 
        ///Bank 2 end of CRC calculation interrupt              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcendie2{}; 
    }
    namespace FlashSr2{    ///<FLASH status register for bank          2
        using Addr = Register::Address<0x52002110,0xf010fff0,0x00000000,std::uint32_t>;
        ///Bank 2 ongoing program              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy2{}; 
        ///Bank 2 write buffer not empty              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wbne2{}; 
        ///Bank 2 wait queue flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qw2{}; 
        ///Bank 2 CRC busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crcBusy2{}; 
        ///Bank 2 end-of-program flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eop2{}; 
        ///Bank 2 write protection error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wrperr2{}; 
        ///Bank 2 programming sequence error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pgserr2{}; 
        ///Bank 2 strobe error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> strberr2{}; 
        ///Bank 2 inconsistency error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> incerr2{}; 
        ///Bank 2 write/erase error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> operr2{}; 
        ///Bank 2 read protection error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rdperr2{}; 
        ///Bank 2 secure error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rdserr2{}; 
        ///Bank 2 single correction error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sneccerr2{}; 
        ///Bank 2 ECC double detection error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dbeccerr2{}; 
        ///Bank 2 CRC-complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crcend2{}; 
    }
    namespace FlashCcr2{    ///<FLASH clear control register for bank          2
        using Addr = Register::Address<0x52002114,0xf010ffff,0x00000000,std::uint32_t>;
        ///Bank 1 EOP1 flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrEop2{}; 
        ///Bank 2 WRPERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrWrperr2{}; 
        ///Bank 2 PGSERR1 flag clear              bi
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrPgserr2{}; 
        ///Bank 2 STRBERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrStrberr2{}; 
        ///Bank 2 INCERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrIncerr2{}; 
        ///Bank 2 OPERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrOperr2{}; 
        ///Bank 2 RDPERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrRdperr2{}; 
        ///Bank 1 RDSERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrRdserr1{}; 
        ///Bank 2 SNECCERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrSneccerr2{}; 
        ///Bank 1 DBECCERR1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrDbeccerr1{}; 
        ///Bank 2 CRCEND1 flag clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrCrcend2{}; 
    }
    namespace FlashPrarCur2{    ///<FLASH protection address for bank          1
        using Addr = Register::Address<0x52002128,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 2 lowest PCROP protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> protAreaStart2{}; 
        ///Bank 2 highest PCROP protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> protAreaEnd2{}; 
        ///Bank 2 PCROP protected erase enable              option status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmep2{}; 
    }
    namespace FlashPrarPrg2{    ///<FLASH protection address for bank          2
        using Addr = Register::Address<0x5200202c,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 2 lowest PCROP protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> protAreaStart2{}; 
        ///Bank 2 highest PCROP protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> protAreaEnd2{}; 
        ///Bank 2 PCROP protected erase enable              option configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmep2{}; 
    }
    namespace FlashScarCur2{    ///<FLASH secure address for bank          2
        using Addr = Register::Address<0x52002130,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 2 lowest secure protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> secAreaStart2{}; 
        ///Bank 2 highest secure protected              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> secAreaEnd2{}; 
        ///Bank 2 secure protected erase enable              option status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmes2{}; 
    }
    namespace FlashScarPrg2{    ///<FLASH secure address for bank          2
        using Addr = Register::Address<0x52002134,0x7000f000,0x00000000,std::uint32_t>;
        ///Bank 2 lowest secure protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> secAreaStart2{}; 
        ///Bank 2 highest secure protected address              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> secAreaEnd2{}; 
        ///Bank 2 secure protected erase enable              option configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmes2{}; 
    }
    namespace FlashWpsnCur2r{    ///<FLASH write sector protection for bank          2
        using Addr = Register::Address<0x52002138,0xffffff00,0x00000000,std::uint32_t>;
        ///Bank 2 sector write protection option              status byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrpsn2{}; 
    }
    namespace FlashWpsnPrg2r{    ///<FLASH write sector protection for bank          2
        using Addr = Register::Address<0x5200213c,0xffffff00,0x00000000,std::uint32_t>;
        ///Bank 2 sector write protection              configuration byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrpsn2{}; 
    }
    namespace FlashCrccr2{    ///<FLASH CRC control register for bank          1
        using Addr = Register::Address<0x52002150,0xffccf878,0x00000000,std::uint32_t>;
        ///Bank 2 CRC sector number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> crcSect{}; 
        ///Bank 2 CRC select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> allBank{}; 
        ///Bank 2 CRC sector mode select              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> crcBySect{}; 
        ///Bank 2 CRC sector select              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> addSect{}; 
        ///Bank 2 CRC sector list clear              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cleanSect{}; 
        ///Bank 2 CRC start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> startCrc{}; 
        ///Bank 2 CRC clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cleanCrc{}; 
        ///Bank 2 CRC burst size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> crcBurst{}; 
    }
    namespace FlashCrcsadd2r{    ///<FLASH CRC start address register for bank          2
        using Addr = Register::Address<0x52002154,0x00000000,0x00000000,std::uint32_t>;
        ///CRC start address on bank              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcStartAddr{}; 
    }
    namespace FlashCrceadd2r{    ///<FLASH CRC end address register for bank          2
        using Addr = Register::Address<0x52002158,0x00000000,0x00000000,std::uint32_t>;
        ///CRC end address on bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcEndAddr{}; 
    }
    namespace FlashEccFa2r{    ///<FLASH ECC fail address for bank          2
        using Addr = Register::Address<0x52002160,0xffff8000,0x00000000,std::uint32_t>;
        ///Bank 2 ECC error address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> failEccAddr2{}; 
    }
}
