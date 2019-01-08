#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA2D
    namespace Dma2dDma2dCr{    ///<DMA2D control register
        using Addr = Register::Address<0x4002b000,0xfffcc0f8,0x00000000,std::uint32_t>;
        ///Start This bit can be used to launch the              DMA2D according to the parameters loaded in the              various configuration registers. This bit is              automatically reset by the following events: ** At              the end of the transfer ** When the data transfer is              aborted by the user application by setting the ABORT              bit in DMA2D_CR ** When a data transfer error occurs              ** When the data transfer has not started due to a              configuration error or another transfer operation              already ongoing (automatic CLUT              loading).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Suspend This bit can be used to suspend              the current transfer. This bit is set and reset by              software. It is automatically reset by hardware when              the START bit is reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Abort This bit can be used to abort the              current transfer. This bit is set by software and is              automatically reset by hardware when the START bit is              reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> abort{}; 
        ///Transfer error interrupt enable This bit              is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Transfer complete interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Transfer watermark interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> twie{}; 
        ///CLUT access error interrupt enable This              bit is set and cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> caeie{}; 
        ///CLUT transfer complete interrupt enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctcie{}; 
        ///Configuration Error Interrupt Enable              This bit is set and cleared by              software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ceie{}; 
        ///DMA2D mode This bit is set and cleared              by software. It cannot be modified while a transfer              is ongoing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Dma2dDma2dIsr{    ///<DMA2D Interrupt Status          Register
        using Addr = Register::Address<0x4002b004,0xffffffc0,0x00000000,std::uint32_t>;
        ///Transfer error interrupt flag This bit              is set when an error occurs during a DMA transfer              (data transfer or automatic CLUT              loading).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif{}; 
        ///Transfer complete interrupt flag This              bit is set when a DMA2D transfer operation is              complete (data transfer only).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif{}; 
        ///Transfer watermark interrupt flag This              bit is set when the last pixel of the watermarked              line has been transferred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> twif{}; 
        ///CLUT access error interrupt flag This              bit is set when the CPU accesses the CLUT while the              CLUT is being automatically copied from a system              memory to the internal DMA2D.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caeif{}; 
        ///CLUT transfer complete interrupt flag              This bit is set when the CLUT copy from a system              memory area to the internal DMA2D memory is              complete.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctcif{}; 
        ///Configuration error interrupt flag This              bit is set when the START bit of DMA2D_CR,              DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong              configuration has been programmed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceif{}; 
    }
    namespace Dma2dDma2dIfcr{    ///<DMA2D interrupt flag clear          register
        using Addr = Register::Address<0x4002b008,0xffffffc0,0x00000000,std::uint32_t>;
        ///Clear Transfer error interrupt flag              Programming this bit to 1 clears the TEIF flag in the              DMA2D_ISR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif{}; 
        ///Clear transfer complete interrupt flag              Programming this bit to 1 clears the TCIF flag in the              DMA2D_ISR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif{}; 
        ///Clear transfer watermark interrupt flag              Programming this bit to 1 clears the TWIF flag in the              DMA2D_ISR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctwif{}; 
        ///Clear CLUT access error interrupt flag              Programming this bit to 1 clears the CAEIF flag in              the DMA2D_ISR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> caecif{}; 
        ///Clear CLUT transfer complete interrupt              flag Programming this bit to 1 clears the CTCIF flag              in the DMA2D_ISR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cctcif{}; 
        ///Clear configuration error interrupt flag              Programming this bit to 1 clears the CEIF flag in the              DMA2D_ISR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cceif{}; 
    }
    namespace Dma2dDma2dFgmar{    ///<DMA2D foreground memory address          register
        using Addr = Register::Address<0x4002b00c,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Address of the data used              for the foreground image. This register can only be              written when data transfers are disabled. Once the              data transfer has started, this register is              read-only. The address alignment must match the image              format selected e.g. a 32-bit per pixel format must              be 32-bit aligned, a 16-bit per pixel format must be              16-bit aligned and a 4-bit per pixel format must be              8-bit aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2dDma2dFgor{    ///<DMA2D foreground offset          register
        using Addr = Register::Address<0x4002b010,0xffffc000,0x00000000,std::uint32_t>;
        ///Line offset Line offset used for the              foreground expressed in pixel. This value is used to              generate the address. It is added at the end of each              line to determine the starting address of the next              line. These bits can only be written when data              transfers are disabled. Once a data transfer has              started, they become read-only. If the image format              is 4-bit per pixel, the line offset must be              even.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
    }
    namespace Dma2dDma2dBgmar{    ///<DMA2D background memory address          register
        using Addr = Register::Address<0x4002b014,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Address of the data used              for the background image. This register can only be              written when data transfers are disabled. Once a data              transfer has started, this register is read-only. The              address alignment must match the image format              selected e.g. a 32-bit per pixel format must be              32-bit aligned, a 16-bit per pixel format must be              16-bit aligned and a 4-bit per pixel format must be              8-bit aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2dDma2dBgor{    ///<DMA2D background offset          register
        using Addr = Register::Address<0x4002b018,0xffffc000,0x00000000,std::uint32_t>;
        ///Line offset Line offset used for the              background image (expressed in pixel). This value is              used for the address generation. It is added at the              end of each line to determine the starting address of              the next line. These bits can only be written when              data transfers are disabled. Once data transfer has              started, they become read-only. If the image format              is 4-bit per pixel, the line offset must be              even.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
    }
    namespace Dma2dDma2dFgpfccr{    ///<DMA2D foreground PFC control          register
        using Addr = Register::Address<0x4002b01c,0x00c000c0,0x00000000,std::uint32_t>;
        ///Color mode These bits defines the color              format of the foreground image. They can only be              written when data transfers are disabled. Once the              transfer has started, they are read-only. others:              meaningless
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cm{}; 
        ///CLUT color mode This bit defines the              color format of the CLUT. It can only be written when              the transfer is disabled. Once the CLUT transfer has              started, this bit is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccm{}; 
        ///Start This bit can be set to start the              automatic loading of the CLUT. It is automatically              reset: ** at the end of the transfer ** when the              transfer is aborted by the user application by              setting the ABORT bit in DMA2D_CR ** when a transfer              error occurs ** when the transfer has not started due              to a configuration error or another transfer              operation already ongoing (data transfer or automatic              background CLUT transfer).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> start{}; 
        ///CLUT size These bits define the size of              the CLUT used for the foreground image. Once the CLUT              transfer has started, this field is read-only. The              number of CLUT entries is equal to CS[7:0] +              1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Alpha mode These bits select the alpha              channel value to be used for the foreground image.              They can only be written data the transfer are              disabled. Once the transfer has started, they become              read-only. other configurations are              meaningless
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> am{}; 
        ///Chroma Sub-Sampling These bits define              the chroma sub-sampling mode for YCbCr color mode.              Once the transfer has started, these bits are              read-only. others: meaningless
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> css{}; 
        ///Alpha Inverted This bit inverts the              alpha value. Once the transfer has started, this bit              is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ai{}; 
        ///Red Blue Swap This bit allows to swap              the R &amp; B to support BGR or ABGR color              formats. Once the transfer has started, this bit is              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rbs{}; 
        ///Alpha value These bits define a fixed              alpha channel value which can replace the original              alpha value or be multiplied by the original alpha              value according to the alpha mode selected through              the AM[1:0] bits. These bits can only be written when              data transfers are disabled. Once a transfer has              started, they become read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
    }
    namespace Dma2dDma2dFgcolr{    ///<DMA2D foreground color          register
        using Addr = Register::Address<0x4002b020,0xff000000,0x00000000,std::uint32_t>;
        ///Blue Value These bits defines the blue              value for the A4 or A8 mode of the foreground image.              They can only be written when data transfers are              disabled. Once the transfer has started, They are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        ///Green Value These bits defines the green              value for the A4 or A8 mode of the foreground image.              They can only be written when data transfers are              disabled. Once the transfer has started, They are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Red Value These bits defines the red              value for the A4 or A8 mode of the foreground image.              They can only be written when data transfers are              disabled. Once the transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
    }
    namespace Dma2dDma2dBgpfccr{    ///<DMA2D background PFC control          register
        using Addr = Register::Address<0x4002b024,0x00cc00c0,0x00000000,std::uint32_t>;
        ///Color mode These bits define the color              format of the foreground image. These bits can only              be written when data transfers are disabled. Once the              transfer has started, they are read-only. others:              meaningless
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cm{}; 
        ///CLUT Color mode These bits define the              color format of the CLUT. This register can only be              written when the transfer is disabled. Once the CLUT              transfer has started, this bit is              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ccm{}; 
        ///Start This bit is set to start the              automatic loading of the CLUT. This bit is              automatically reset: ** at the end of the transfer **              when the transfer is aborted by the user application              by setting the ABORT bit in the DMA2D_CR ** when a              transfer error occurs ** when the transfer has not              started due to a configuration error or another              transfer operation already on going (data transfer or              automatic BackGround CLUT transfer).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> start{}; 
        ///CLUT size These bits define the size of              the CLUT used for the BG. Once the CLUT transfer has              started, this field is read-only. The number of CLUT              entries is equal to CS[7:0] + 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Alpha mode These bits define which alpha              channel value to be used for the background image.              These bits can only be written when data transfers              are disabled. Once the transfer has started, they are              read-only. others: meaningless
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> am{}; 
        ///Alpha Inverted This bit inverts the              alpha value. Once the transfer has started, this bit              is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ai{}; 
        ///Red Blue Swap This bit allows to swap              the R &amp; B to support BGR or ABGR color              formats. Once the transfer has started, this bit is              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rbs{}; 
        ///Alpha value These bits define a fixed              alpha channel value which can replace the original              alpha value or be multiplied with the original alpha              value according to the alpha mode selected with bits              AM[1: 0]. These bits can only be written when data              transfers are disabled. Once the transfer has              started, they are read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
    }
    namespace Dma2dDma2dBgcolr{    ///<DMA2D background color          register
        using Addr = Register::Address<0x4002b028,0xff000000,0x00000000,std::uint32_t>;
        ///Blue Value These bits define the blue              value for the A4 or A8 mode of the background. These              bits can only be written when data transfers are              disabled. Once the transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        ///Green Value These bits define the green              value for the A4 or A8 mode of the background. These              bits can only be written when data transfers are              disabled. Once the transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Red Value These bits define the red              value for the A4 or A8 mode of the background. These              bits can only be written when data transfers are              disabled. Once the transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
    }
    namespace Dma2dDma2dFgcmar{    ///<DMA2D foreground CLUT memory address          register
        using Addr = Register::Address<0x4002b02c,0x00000000,0x00000000,std::uint32_t>;
        ///Memory Address Address of the data used              for the CLUT address dedicated to the foreground              image. This register can only be written when no              transfer is ongoing. Once the CLUT transfer has              started, this register is read-only. If the              foreground CLUT format is 32-bit, the address must be              32-bit aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2dDma2dBgcmar{    ///<DMA2D background CLUT memory address          register
        using Addr = Register::Address<0x4002b030,0x00000000,0x00000000,std::uint32_t>;
        ///Memory address Address of the data used              for the CLUT address dedicated to the background              image. This register can only be written when no              transfer is on going. Once the CLUT transfer has              started, this register is read-only. If the              background CLUT format is 32-bit, the address must be              32-bit aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2dDma2dOpfccr{    ///<DMA2D output PFC control          register
        using Addr = Register::Address<0x4002b034,0xffcffff8,0x00000000,std::uint32_t>;
        ///Color mode These bits define the color              format of the output image. These bits can only be              written when data transfers are disabled. Once the              transfer has started, they are read-only. others:              meaningless
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cm{}; 
        ///Alpha Inverted This bit inverts the              alpha value. Once the transfer has started, this bit              is read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ai{}; 
        ///Red Blue Swap This bit allows to swap              the R &amp; B to support BGR or ABGR color              formats. Once the transfer has started, this bit is              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rbs{}; 
    }
    namespace Dma2dDma2dOcolr{    ///<DMA2D output color register
        using Addr = Register::Address<0x4002b038,0x00000000,0x00000000,std::uint32_t>;
        ///Blue Value These bits define the blue              value of the output image. These bits can only be              written when data transfers are disabled. Once the              transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> blue{}; 
        ///Green Value These bits define the green              value of the output image. These bits can only be              written when data transfers are disabled. Once the              transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Red Value These bits define the red              value of the output image. These bits can only be              written when data transfers are disabled. Once the              transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> red{}; 
        ///Alpha Channel Value These bits define              the alpha channel of the output color. These bits can              only be written when data transfers are disabled.              Once the transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> alpha{}; 
    }
    namespace Dma2dDma2dOmar{    ///<DMA2D output memory address          register
        using Addr = Register::Address<0x4002b03c,0x00000000,0x00000000,std::uint32_t>;
        ///Memory Address Address of the data used              for the output FIFO. These bits can only be written              when data transfers are disabled. Once the transfer              has started, they are read-only. The address              alignment must match the image format selected e.g. a              32-bit per pixel format must be 32-bit aligned and a              16-bit per pixel format must be 16-bit              aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2dDma2dOor{    ///<DMA2D output offset register
        using Addr = Register::Address<0x4002b040,0xffffc000,0x00000000,std::uint32_t>;
        ///Line Offset Line offset used for the              output (expressed in pixels). This value is used for              the address generation. It is added at the end of              each line to determine the starting address of the              next line. These bits can only be written when data              transfers are disabled. Once the transfer has              started, they are read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> lo{}; 
    }
    namespace Dma2dDma2dNlr{    ///<DMA2D number of line register
        using Addr = Register::Address<0x4002b044,0xc0000000,0x00000000,std::uint32_t>;
        ///Number of lines Number of lines of the              area to be transferred. These bits can only be              written when data transfers are disabled. Once the              transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nl{}; 
        ///Pixel per lines Number of pixels per              lines of the area to be transferred. These bits can              only be written when data transfers are disabled.              Once the transfer has started, they are read-only. If              any of the input image format is 4-bit per pixel,              pixel per lines must be even.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> pl{}; 
    }
    namespace Dma2dDma2dLwr{    ///<DMA2D line watermark register
        using Addr = Register::Address<0x4002b048,0xffff0000,0x00000000,std::uint32_t>;
        ///Line watermark These bits allow to              configure the line watermark for interrupt              generation. An interrupt is raised when the last              pixel of the watermarked line has been transferred.              These bits can only be written when data transfers              are disabled. Once the transfer has started, they are              read-only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lw{}; 
    }
    namespace Dma2dDma2dAmtcr{    ///<DMA2D AXI master timer configuration          register
        using Addr = Register::Address<0x4002b04c,0xffff00fe,0x00000000,std::uint32_t>;
        ///Enable Enables the dead time              functionality.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Dead Time Dead time value in the AXI              clock cycle inserted between two consecutive accesses              on the AXI master port. These bits represent the              minimum guaranteed number of cycles between two              consecutive AXI accesses.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dt{}; 
    }
}
