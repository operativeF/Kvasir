#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//BDMA
    namespace BdmaBdmaIsr{    ///<DMA interrupt status register
        using Addr = Register::Address<0x58025400,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gif1{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif1{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htif1{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif1{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gif2{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif2{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> htif2{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> teif2{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gif3{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcif3{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif3{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> teif3{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gif4{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcif4{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> htif4{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> teif4{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> gif5{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcif5{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> htif5{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif5{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> gif6{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htif6{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> teif6{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> gif7{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tcif7{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> teif7{}; 
        ///Channel x global interrupt flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gif8{}; 
        ///Channel x transfer complete flag (x =              1..8) This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tcif8{}; 
        ///Channel x half transfer flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> htif8{}; 
        ///Channel x transfer error flag (x = 1..8)              This bit is set by hardware. It is cleared by              software writing 1 to the corresponding bit in the              DMA_IFCR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> teif8{}; 
    }
    namespace BdmaBdmaIfcr{    ///<DMA interrupt flag clear          register
        using Addr = Register::Address<0x58025404,0x00000000,0x00000000,std::uint32_t>;
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cgif1{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chtif1{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif1{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cgif2{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chtif2{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cteif2{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgif3{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif3{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cteif3{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cgif4{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chtif4{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cteif4{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cgif5{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chtif5{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif5{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cgif6{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> chtif6{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cteif6{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cgif7{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cteif7{}; 
        ///Channel x global interrupt clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cgif8{}; 
        ///Channel x transfer complete clear This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ctcif8{}; 
        ///Channel x half transfer clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chtif8{}; 
        ///Channel x transfer error clear This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cteif8{}; 
    }
    namespace BdmaBdmaCcr1{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x58025408,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr1{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x5802540c,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar1{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025410,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar1{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025414,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr2{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x5802541c,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr2{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x58025420,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar2{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025424,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar2{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025428,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr3{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x58025430,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr3{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x58025434,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar3{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025438,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar3{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x5802543c,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr4{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x58025444,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr4{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x58025448,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar4{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x5802544c,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar4{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025450,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr5{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x58025458,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr5{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x5802545c,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar5{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025460,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar5{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025464,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr6{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x5802546c,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr6{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x58025470,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar6{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025474,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar6{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025478,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr7{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x58025480,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr7{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x58025484,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar7{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x58025488,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar7{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x5802548c,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace BdmaBdmaCcr8{    ///<DMA channel x configuration          register
        using Addr = Register::Address<0x58025494,0xffff8000,0x00000000,std::uint32_t>;
        ///Channel enable This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode This bit is set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode This bit is              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size These bits are set and              cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel priority level These bits are              set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode This bit is set              and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace BdmaBdmaCndtr8{    ///<DMA channel x number of data          register
        using Addr = Register::Address<0x58025498,0xffff0000,0x00000000,std::uint32_t>;
        ///Number of data to transfer Number of              data to be transferred (0 up to 65535). This register              can only be written when the channel is disabled.              Once the channel is enabled, this register is              read-only, indicating the remaining bytes to be              transmitted. This register decrements after each DMA              transfer. Once the transfer is completed, this              register can either stay at zero or be reloaded              automatically by the value previously programmed if              the channel is configured in auto-reload mode. If              this register is zero, no transaction can be served              whether the channel is enabled or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace BdmaBdmaCpar8{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x5802549c,0x00000000,0x00000000,std::uint32_t>;
        ///Peripheral address Base address of the              peripheral data register from/to which the data will              be read/written. When PSIZE is 01 (16-bit), the PA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When PSIZE is 10 (32-bit), PA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace BdmaBdmaCmar8{    ///<This register must not be written when the          channel is enabled.
        using Addr = Register::Address<0x580254a0,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Base address of the              memory area from/to which the data will be              read/written. When MSIZE is 01 (16-bit), the MA[0]              bit is ignored. Access is automatically aligned to a              half-word address. When MSIZE is 10 (32-bit), MA[1:0]              are ignored. Access is automatically aligned to a              word address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
}
