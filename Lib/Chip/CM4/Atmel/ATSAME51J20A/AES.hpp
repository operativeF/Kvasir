#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Advanced Encryption Standard
    namespace AesCtrla{    ///<Control A
        using Addr = Register::Address<0x42002400,0xfff08000,0x00000000,std::uint32_t>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///AES Modes of operation
        enum class AesmodeVal {
            ecb=0x00000000,     ///<Electronic code book mode
            cbc=0x00000001,     ///<Cipher block chaining mode
            ofb=0x00000002,     ///<Output feedback mode
            cfb=0x00000003,     ///<Cipher feedback mode
            counter=0x00000004,     ///<Counter mode
            ccm=0x00000005,     ///<CCM mode
            gcm=0x00000006,     ///<Galois counter mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,AesmodeVal> aesmode{}; 
        namespace AesmodeValC{
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::ecb> ecb{};
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::cbc> cbc{};
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::ofb> ofb{};
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::cfb> cfb{};
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::counter> counter{};
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::ccm> ccm{};
            constexpr Register::FieldValue<decltype(aesmode)::Type,AesmodeVal::gcm> gcm{};
        }
        ///Cipher Feedback Block Size
        enum class CfbsVal {
            v128bit=0x00000000,     ///<128-bit Input data block for Encryption/Decryption in Cipher Feedback mode
            v64bit=0x00000001,     ///<64-bit Input data block for Encryption/Decryption in Cipher Feedback mode
            v32bit=0x00000002,     ///<32-bit Input data block for Encryption/Decryption in Cipher Feedback mode
            v16bit=0x00000003,     ///<16-bit Input data block for Encryption/Decryption in Cipher Feedback mode
            v8bit=0x00000004,     ///<8-bit Input data block for Encryption/Decryption in Cipher Feedback mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,CfbsVal> cfbs{}; 
        namespace CfbsValC{
            constexpr Register::FieldValue<decltype(cfbs)::Type,CfbsVal::v128bit> v128bit{};
            constexpr Register::FieldValue<decltype(cfbs)::Type,CfbsVal::v64bit> v64bit{};
            constexpr Register::FieldValue<decltype(cfbs)::Type,CfbsVal::v32bit> v32bit{};
            constexpr Register::FieldValue<decltype(cfbs)::Type,CfbsVal::v16bit> v16bit{};
            constexpr Register::FieldValue<decltype(cfbs)::Type,CfbsVal::v8bit> v8bit{};
        }
        ///Encryption Key Size
        enum class KeysizeVal {
            v128bit=0x00000000,     ///<128-bit Key for Encryption / Decryption
            v192bit=0x00000001,     ///<192-bit Key for Encryption / Decryption
            v256bit=0x00000002,     ///<256-bit Key for Encryption / Decryption
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,KeysizeVal> keysize{}; 
        namespace KeysizeValC{
            constexpr Register::FieldValue<decltype(keysize)::Type,KeysizeVal::v128bit> v128bit{};
            constexpr Register::FieldValue<decltype(keysize)::Type,KeysizeVal::v192bit> v192bit{};
            constexpr Register::FieldValue<decltype(keysize)::Type,KeysizeVal::v256bit> v256bit{};
        }
        ///Cipher Mode
        enum class CipherVal {
            dec=0x00000000,     ///<Decryption
            enc=0x00000001,     ///<Encryption
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CipherVal> cipher{}; 
        namespace CipherValC{
            constexpr Register::FieldValue<decltype(cipher)::Type,CipherVal::dec> dec{};
            constexpr Register::FieldValue<decltype(cipher)::Type,CipherVal::enc> enc{};
        }
        ///Start Mode Select
        enum class StartmodeVal {
            manual=0x00000000,     ///<Start Encryption / Decryption in Manual mode
            auto_=0x00000001,     ///<Start Encryption / Decryption in Auto mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,StartmodeVal> startmode{}; 
        namespace StartmodeValC{
            constexpr Register::FieldValue<decltype(startmode)::Type,StartmodeVal::manual> manual{};
            constexpr Register::FieldValue<decltype(startmode)::Type,StartmodeVal::auto_> auto_{};
        }
        ///Last Output Data Mode
        enum class LodVal {
            none=0x00000000,     ///<No effect
            last=0x00000001,     ///<Start encryption in Last Output Data mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,LodVal> lod{}; 
        namespace LodValC{
            constexpr Register::FieldValue<decltype(lod)::Type,LodVal::none> none{};
            constexpr Register::FieldValue<decltype(lod)::Type,LodVal::last> last{};
        }
        ///Last Key Generation
        enum class KeygenVal {
            none=0x00000000,     ///<No effect
            last=0x00000001,     ///<Start Computation of the last NK words of the expanded key
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,KeygenVal> keygen{}; 
        namespace KeygenValC{
            constexpr Register::FieldValue<decltype(keygen)::Type,KeygenVal::none> none{};
            constexpr Register::FieldValue<decltype(keygen)::Type,KeygenVal::last> last{};
        }
        ///XOR Key Operation
        enum class XorkeyVal {
            none=0x00000000,     ///<No effect
            xor_=0x00000001,     ///<The user keyword gets XORed with the previous keyword register content.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,XorkeyVal> xorkey{}; 
        namespace XorkeyValC{
            constexpr Register::FieldValue<decltype(xorkey)::Type,XorkeyVal::none> none{};
            constexpr Register::FieldValue<decltype(xorkey)::Type,XorkeyVal::xor_> xor_{};
        }
        ///Counter Measure Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> ctype{}; 
    }
    namespace AesCtrlb{    ///<Control B
        using Addr = Register::Address<0x42002404,0xfffffff0,0x00000000,std::uint8_t>;
        ///Start Encryption/Decryption
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///New message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newmsg{}; 
        ///End of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eom{}; 
        ///GF Multiplication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gfmul{}; 
    }
    namespace AesIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x42002405,0xfffffffc,0x00000000,std::uint8_t>;
        ///Encryption Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enccmp{}; 
        ///GF Multiplication Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gfmcmp{}; 
    }
    namespace AesIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x42002406,0xfffffffc,0x00000000,std::uint8_t>;
        ///Encryption Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enccmp{}; 
        ///GF Multiplication Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gfmcmp{}; 
    }
    namespace AesIntflag{    ///<Interrupt Flag Status
        using Addr = Register::Address<0x42002407,0xfffffffc,0x00000000,std::uint8_t>;
        ///Encryption Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enccmp{}; 
        ///GF Multiplication Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gfmcmp{}; 
    }
    namespace AesDatabufptr{    ///<Data buffer pointer
        using Addr = Register::Address<0x42002408,0xfffffffc,0x00000000,std::uint8_t>;
        ///Input Data Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> indataptr{}; 
    }
    namespace AesDbgctrl{    ///<Debug control
        using Addr = Register::Address<0x42002409,0xfffffffe,0x00000000,std::uint8_t>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace AesIndata{    ///<Indata
        using Addr = Register::Address<0x42002438,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesCiplen{    ///<Cipher Length
        using Addr = Register::Address<0x42002480,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesRandseed{    ///<Random Seed
        using Addr = Register::Address<0x42002484,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword0{    ///<Keyword n
        using Addr = Register::Address<0x4200240c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword1{    ///<Keyword n
        using Addr = Register::Address<0x42002410,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword2{    ///<Keyword n
        using Addr = Register::Address<0x42002414,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword3{    ///<Keyword n
        using Addr = Register::Address<0x42002418,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword4{    ///<Keyword n
        using Addr = Register::Address<0x4200241c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword5{    ///<Keyword n
        using Addr = Register::Address<0x42002420,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword6{    ///<Keyword n
        using Addr = Register::Address<0x42002424,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesKeyword7{    ///<Keyword n
        using Addr = Register::Address<0x42002428,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesIntvectv0{    ///<Initialisation Vector n
        using Addr = Register::Address<0x4200243c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesIntvectv1{    ///<Initialisation Vector n
        using Addr = Register::Address<0x42002440,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesIntvectv2{    ///<Initialisation Vector n
        using Addr = Register::Address<0x42002444,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesIntvectv3{    ///<Initialisation Vector n
        using Addr = Register::Address<0x42002448,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesHashkey0{    ///<Hash key n
        using Addr = Register::Address<0x4200245c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesHashkey1{    ///<Hash key n
        using Addr = Register::Address<0x42002460,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesHashkey2{    ///<Hash key n
        using Addr = Register::Address<0x42002464,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesHashkey3{    ///<Hash key n
        using Addr = Register::Address<0x42002468,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesGhash0{    ///<Galois Hash n
        using Addr = Register::Address<0x4200246c,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesGhash1{    ///<Galois Hash n
        using Addr = Register::Address<0x42002470,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesGhash2{    ///<Galois Hash n
        using Addr = Register::Address<0x42002474,0xffffffff,0x00000000,std::uint32_t>;
    }
    namespace AesGhash3{    ///<Galois Hash n
        using Addr = Register::Address<0x42002478,0xffffffff,0x00000000,std::uint32_t>;
    }
}
