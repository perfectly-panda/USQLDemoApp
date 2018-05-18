#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_GetSStream_0 = 1,
UID_GetSStream_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_Process_2 = 5,
UID_Process_2_Data0 = 6,
UID_Process_3 = 7,
UID_SV1_Extract_out0 = 8,
UID_GetSStream_4 = 9,
UID_GetSStream_4_Data0 = 10,
UID_Process_5 = 11,
UID_SV3_Extract_out0 = 12,
UID_GetSStream_6 = 13,
UID_GetSStream_6_Data0 = 14,
UID_Process_7 = 15,
UID_SV4_Extract_out0 = 16,
UID_Aggregate_8 = 17,
UID_Aggregate_8_Data0 = 18,
UID_Process_9 = 19,
UID_SV5_Combine_out0 = 20,
UID_Process_10 = 21,
UID_Process_10_Data0 = 22,
UID_Split_11 = 23,
UID_SV6_Split_out0 = 24,
UID_SV6_Split_out1 = 25,
UID_HashJoin_12 = 26,
UID_HashJoin_12_Data0 = 27,
UID_GetSStream_13 = 28,
UID_GetSStream_13_Data0 = 29,
UID_Process_14 = 30,
UID_Process_14_Data0 = 31,
UID_Process_15 = 32,
UID_Process_15_Data0 = 33,
UID_Process_16 = 34,
UID_Process_16_Data0 = 35,
UID_Split_17 = 36,
UID_SV8_Extract_Split_out0 = 37,
UID_SV8_Extract_Split_out1 = 38,
UID_Process_18 = 39,
UID_Process_18_Data0 = 40,
UID_Process_19 = 41,
UID_Process_19_Data0 = 42,
UID_Process_20 = 43,
UID_Process_20_Data0 = 44,
UID_Process_21 = 45,
UID_Process_21_Data0 = 46,
UID_Process_22 = 47,
UID_Process_22_Data0 = 48,
UID_Process_23 = 49,
UID_Process_23_Data0 = 50,
UID_Split_24 = 51,
UID_SV9_Split_out0 = 52,
UID_SV9_Split_out1 = 53,
UID_HashJoin_25 = 54,
UID_HashJoin_25_Data0 = 55,
UID_Process_26 = 56,
UID_Process_26_Data0 = 57,
UID_Process_27 = 58,
UID_Process_27_Data0 = 59,
UID_Process_28 = 60,
UID_Process_28_Data0 = 61,
UID_Process_29 = 62,
UID_Process_29_Data0 = 63,
UID_SV10_Combine_out0 = 64,
UID_SV7_Process_out0 = 65,
UID_Output_32 = 66,
UID_Output_33 = 67,
UID_SV2_Process_out0 = 68,
UID_Output_35 = 69,
UID_Split_11_0,
UID_Split_11_1,
UID_Split_17_0,
UID_Split_17_1,
UID_Split_24_0,
UID_Split_24_1,
UID_HashJoin_12_0,
UID_HashJoin_12_1,
UID_HashJoin_25_0,
UID_HashJoin_25_1,
UID_HashJoin_12_FB_0,
UID_HashJoin_12_FB_1,
UID_HashJoin_25_FB_0,
UID_HashJoin_25_FB_1,
UID_Process_10_0,
UID_Process_21_0,
UID_Process_23_0,
UID_Process_10_1,
UID_Process_21_1,
UID_Process_23_1,
UID_Process_2_Prefix,
UID_Process_5_Prefix,
UID_Process_7_Prefix,
UID_Process_15_Prefix,
UID_Process_19_Prefix,
UID_Process_22_Prefix,
UID_Process_26_Prefix
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class PartitionSchema_GetSStream_0
    {
    public:
        FString m_SeriesName;
        PartitionSchema_GetSStream_0();
        PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static string GetDefinition()
        {
            return std::string{ u8"SeriesName:string" };
        }

        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string" };
        }

        friend ostream & operator<<(ostream & os, PartitionSchema_GetSStream_0 & row);

    };


    INLINE ostream & operator<<(ostream & os, PartitionSchema_GetSStream_0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class PartitionKeySchema_GetSStream_0
    {
    public:
        FString m_Synonym;
        PartitionKeySchema_GetSStream_0();
        PartitionKeySchema_GetSStream_0(const PartitionKeySchema_GetSStream_0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionKeySchema_GetSStream_0(const PartitionKeySchema_GetSStream_0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Synonym:string" };
        }

        friend ostream & operator<<(ostream & os, PartitionKeySchema_GetSStream_0 & row);

    };


    INLINE ostream & operator<<(ostream & os, PartitionKeySchema_GetSStream_0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashAggregatorState_Process_1
    {
    public:
        HashAggregatorState_Process_1();
        HashAggregatorState_Process_1(const HashAggregatorState_Process_1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_1(const HashAggregatorState_Process_1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{};
        }

        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_1 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class PartitionKeySchema_GetSStream_4
    {
    public:
        int m_RatingID;
        PartitionKeySchema_GetSStream_4();
        PartitionKeySchema_GetSStream_4(const PartitionKeySchema_GetSStream_4 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionKeySchema_GetSStream_4(const PartitionKeySchema_GetSStream_4 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"RatingID:int" };
        }

        friend ostream & operator<<(ostream & os, PartitionKeySchema_GetSStream_4 & row);

    };


    INLINE ostream & operator<<(ostream & os, PartitionKeySchema_GetSStream_4 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class GetSStream_4_Data0
    {
    public:
        FString m_SeriesName;
        FString m_RatingName;
        float m_Rating;
        GetSStream_4_Data0();
        GetSStream_4_Data0(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        GetSStream_4_Data0(const GetSStream_4_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,RatingName:string,Rating:float" };
        }

        friend ostream & operator<<(ostream & os, GetSStream_4_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, GetSStream_4_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_10_Data0
    {
    public:
        NativeNullable<__int64> m_Score;
        FString m_SeriesName;
        Process_10_Data0();
        Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_10_Data0(const Process_10_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Score:long?,SeriesName:string" };
        }

        friend ostream & operator<<(ostream & os, Process_10_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_10_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SequenceProjectSchemaGroup_Process_10
    {
    public:
        FString m_RatingName;
        SequenceProjectSchemaGroup_Process_10();
        SequenceProjectSchemaGroup_Process_10(const SequenceProjectSchemaGroup_Process_10 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SequenceProjectSchemaGroup_Process_10(const SequenceProjectSchemaGroup_Process_10 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"RatingName:string" };
        }

        friend ostream & operator<<(ostream & os, SequenceProjectSchemaGroup_Process_10 & row);

    };


    INLINE ostream & operator<<(ostream & os, SequenceProjectSchemaGroup_Process_10 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SequenceProjectSchemaValue_Process_10
    {
    public:
        float m_Rating;
        SequenceProjectSchemaValue_Process_10();
        SequenceProjectSchemaValue_Process_10(const SequenceProjectSchemaValue_Process_10 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SequenceProjectSchemaValue_Process_10(const SequenceProjectSchemaValue_Process_10 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Rating:float" };
        }

        friend ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_10 & row);

    };


    INLINE ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_10 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV6_Split_out0
    {
    public:
        NativeNullable<__int64> m_Score;
        FString m_SeriesName1;
        SV6_Split_out0();
        SV6_Split_out0(const SV6_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV6_Split_out0(const SV6_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Score:long?,SeriesName1:string" };
        }

        friend ostream & operator<<(ostream & os, SV6_Split_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV6_Split_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV6_Split_out1
    {
    public:
        FString m_SeriesName;
        NativeNullable<__int64> m_Score;
        SV6_Split_out1();
        SV6_Split_out1(const SV6_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV6_Split_out1(const SV6_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,Score:long?" };
        }

        friend ostream & operator<<(ostream & os, SV6_Split_out1 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV6_Split_out1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class PartitionKeySchema_GetSStream_13
    {
    public:
        __int64 m_TweetID;
        PartitionKeySchema_GetSStream_13();
        PartitionKeySchema_GetSStream_13(const PartitionKeySchema_GetSStream_13 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionKeySchema_GetSStream_13(const PartitionKeySchema_GetSStream_13 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"TweetID:long" };
        }

        friend ostream & operator<<(ostream & os, PartitionKeySchema_GetSStream_13 & row);

    };


    INLINE ostream & operator<<(ostream & os, PartitionKeySchema_GetSStream_13 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class GetSStream_13_Data0
    {
    public:
        FString m_Tweet;
        int m_RetweetCount;
        FString m_Sentiment;
        FString m_SeriesName;
        GetSStream_13_Data0();
        GetSStream_13_Data0(const GetSStream_13_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        GetSStream_13_Data0(const GetSStream_13_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Tweet:string,RetweetCount:int,Sentiment:string,SeriesName:string" };
        }

        friend ostream & operator<<(ostream & os, GetSStream_13_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, GetSStream_13_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV8_Extract_Split_out0
    {
    public:
        FString m_SeriesName;
        __int64 m_TweetCount;
        NativeNullable<__int64> m_RetweetCount;
        SV8_Extract_Split_out0();
        SV8_Extract_Split_out0(const SV8_Extract_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV8_Extract_Split_out0(const SV8_Extract_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,TweetCount:long,RetweetCount:long?" };
        }

        friend ostream & operator<<(ostream & os, SV8_Extract_Split_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV8_Extract_Split_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV8_Extract_Split_out1
    {
    public:
        FString m_SeriesName;
        FString m_Tweet;
        int m_RetweetCount;
        FString m_Sentiment;
        SV8_Extract_Split_out1();
        SV8_Extract_Split_out1(const SV8_Extract_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV8_Extract_Split_out1(const SV8_Extract_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,Tweet:string,RetweetCount:int,Sentiment:string" };
        }

        friend ostream & operator<<(ostream & os, SV8_Extract_Split_out1 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV8_Extract_Split_out1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_20_Data0
    {
    public:
        FString m_SeriesName;
        NativeNullable<__int64> m_RetweetCount;
        NativeNullable<__int64> m_TweetCount;
        Process_20_Data0();
        Process_20_Data0(const Process_20_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_20_Data0(const Process_20_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,RetweetCount:long?,TweetCount:long?" };
        }

        friend ostream & operator<<(ostream & os, Process_20_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_20_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_21_Data0
    {
    public:
        NativeNullable<__int64> m_TweetScore;
        FString m_SeriesName;
        NativeNullable<__int64> m_RetweetCount;
        Process_21_Data0();
        Process_21_Data0(const Process_21_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_21_Data0(const Process_21_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"TweetScore:long?,SeriesName:string,RetweetCount:long?" };
        }

        friend ostream & operator<<(ostream & os, Process_21_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_21_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SequenceProjectSchemaValue_Process_21
    {
    public:
        NativeNullable<__int64> m_TweetCount;
        SequenceProjectSchemaValue_Process_21();
        SequenceProjectSchemaValue_Process_21(const SequenceProjectSchemaValue_Process_21 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SequenceProjectSchemaValue_Process_21(const SequenceProjectSchemaValue_Process_21 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"TweetCount:long?" };
        }

        friend ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_21 & row);

    };


    INLINE ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_21 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_23_Data0
    {
    public:
        NativeNullable<__int64> m_RetweetScore;
        FString m_SeriesName;
        NativeNullable<__int64> m_TweetScore;
        Process_23_Data0();
        Process_23_Data0(const Process_23_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_23_Data0(const Process_23_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"RetweetScore:long?,SeriesName:string,TweetScore:long?" };
        }

        friend ostream & operator<<(ostream & os, Process_23_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_23_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SequenceProjectSchemaValue_Process_23
    {
    public:
        NativeNullable<__int64> m_RetweetCount;
        SequenceProjectSchemaValue_Process_23();
        SequenceProjectSchemaValue_Process_23(const SequenceProjectSchemaValue_Process_23 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SequenceProjectSchemaValue_Process_23(const SequenceProjectSchemaValue_Process_23 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"RetweetCount:long?" };
        }

        friend ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_23 & row);

    };


    INLINE ostream & operator<<(ostream & os, SequenceProjectSchemaValue_Process_23 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV9_Split_out0
    {
    public:
        NativeNullable<__int64> m_TweetScore;
        NativeNullable<__int64> m_RetweetScore;
        FString m_SeriesName2;
        SV9_Split_out0();
        SV9_Split_out0(const SV9_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV9_Split_out0(const SV9_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"TweetScore:long?,RetweetScore:long?,SeriesName2:string" };
        }

        friend ostream & operator<<(ostream & os, SV9_Split_out0 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV9_Split_out0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class SV9_Split_out1
    {
    public:
        FString m_SeriesName;
        NativeNullable<__int64> m_TweetScore;
        NativeNullable<__int64> m_RetweetScore;
        SV9_Split_out1();
        SV9_Split_out1(const SV9_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV9_Split_out1(const SV9_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,TweetScore:long?,RetweetScore:long?" };
        }

        friend ostream & operator<<(ostream & os, SV9_Split_out1 & row);

    };


    INLINE ostream & operator<<(ostream & os, SV9_Split_out1 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineKey_HashJoin_12
    {
    public:
        FString m_SeriesName_SeriesName1;
        HashCombineKey_HashJoin_12();
        HashCombineKey_HashJoin_12(const HashCombineKey_HashJoin_12 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_12(const HashCombineKey_HashJoin_12 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName_SeriesName1:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_12 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_12 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineValue_HashJoin_12
    {
    public:
        NativeNullable<__int64> m_Score;
        HashCombineValue_HashJoin_12();
        HashCombineValue_HashJoin_12(const HashCombineValue_HashJoin_12 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_12(const HashCombineValue_HashJoin_12 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Score:long?" };
        }

        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_12 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_12 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashJoin_25_Data0
    {
    public:
        FString m_SeriesName;
        NativeNullable<__int64> m_Score;
        NativeNullable<__int64> m_TweetScore;
        NativeNullable<__int64> m_RetweetScore;
        HashJoin_25_Data0();
        HashJoin_25_Data0(const HashJoin_25_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_25_Data0(const HashJoin_25_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,Score:long?,TweetScore:long?,RetweetScore:long?" };
        }

        friend ostream & operator<<(ostream & os, HashJoin_25_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashJoin_25_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineKey_HashJoin_25
    {
    public:
        FString m_SeriesName_SeriesName2;
        HashCombineKey_HashJoin_25();
        HashCombineKey_HashJoin_25(const HashCombineKey_HashJoin_25 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_25(const HashCombineKey_HashJoin_25 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName_SeriesName2:string" };
        }

        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_25 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_25 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class HashCombineValue_HashJoin_25
    {
    public:
        NativeNullable<__int64> m_TweetScore;
        NativeNullable<__int64> m_RetweetScore;
        HashCombineValue_HashJoin_25();
        HashCombineValue_HashJoin_25(const HashCombineValue_HashJoin_25 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_25(const HashCombineValue_HashJoin_25 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"TweetScore:long?,RetweetScore:long?" };
        }

        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_25 & row);

    };


    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_25 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_27_Data0
    {
    public:
        FString m_SeriesName;
        NativeNullable<__int64> m_TweetScore;
        NativeNullable<__int64> m_RetweetScore;
        NativeNullable<__int64> m_Expr_0;
        NativeNullable<__int64> m_Expr_1;
        Process_27_Data0();
        Process_27_Data0(const Process_27_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_27_Data0(const Process_27_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,TweetScore:long?,RetweetScore:long?,Expr_0:long?,Expr_1:long?" };
        }

        friend ostream & operator<<(ostream & os, Process_27_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_27_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_29_Data0
    {
    public:
        FString m_SeriesName;
        NativeNullable<__int64> m_OverallScore;
        NativeNullable<__int64> m_RatingsScore;
        NativeNullable<__int64> m_TweetScore;
        NativeNullable<__int64> m_RetweetScore;
        Process_29_Data0();
        Process_29_Data0(const Process_29_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_29_Data0(const Process_29_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"SeriesName:string,OverallScore:long?,RatingsScore:long?,TweetScore:long?,RetweetScore:long?" };
        }

        friend ostream & operator<<(ostream & os, Process_29_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_29_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



#if defined(COMPILE_MANAGED)

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<PartitionSchema_GetSStream_0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_SeriesName);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static bool DeserializeKeyForSS(MemoryInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_SeriesName);
                }
                else
                {
                    char ___masking___[1];
                    input->Read(___masking___[0]); 
                    if ((___masking___[0] & 1 ) != 1)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static void DeserializeKey(ResourceInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            char type = 0, null = 0;
                input->Read(type);
                SCOPE_ASSERT(type != 34 && type != 35);
                input->Read(null);
                if (null)
                {
                    row.m_SeriesName.SetNull();
                }
                else
                {
                    input->Read(row.m_SeriesName);
                }
        }
        static void DeserializePartitionSpec(ResourceInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            char ___masking___[1];
            input->Read(___masking___); 
            if ((___masking___[0] & 1 ) != 1)
            {
                input->Read(row.m_SeriesName);
            }
            else
            {
                row.m_SeriesName.SetNull();
            }
        }

    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<PartitionSchema_GetSStream_0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, PartitionSchema_GetSStream_0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const PartitionSchema_GetSStream_0 & row)
        {
            SCOPE_ASSERT(false); 
        }
        static void SerializeKeyForSS(MemoryOutputStream* output, const PartitionSchema_GetSStream_0 & row)        
        {
            char b = 0;
            char ___masking___[1];
            memset(___masking___, 0, sizeof(___masking___));

            bool hasNull = false;
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                b = 1;
                ___masking___[0] |= 1;
            }
            output->Write(b);

            if (hasNull)
            {
                output->Write(___masking___, sizeof(___masking___));
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<GetSStream_4_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, GetSStream_4_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_SeriesName);
                    input->Read(row.m_RatingName);
                    input->Read(row.m_Rating);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_RatingName);
                    }
                    else
                    {
                        row.m_RatingName.SetNull();
                    }
                    input->Read(row.m_Rating);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<GetSStream_4_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, GetSStream_4_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_RatingName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            if (!row.m_RatingName.IsNull())
            {
                output->Write(row.m_RatingName);
            }
            output->Write(row.m_Rating);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const GetSStream_4_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const GetSStream_4_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV6_Split_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV6_Split_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Score);
                    input->Read(row.m_SeriesName1);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Score);
                    }
                    else
                    {
                        row.m_Score.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_SeriesName1);
                    }
                    else
                    {
                        row.m_SeriesName1.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV6_Split_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV6_Split_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Score.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_SeriesName1.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_Score.IsNull())
            {
                output->Write(row.m_Score);
            }
            if (!row.m_SeriesName1.IsNull())
            {
                output->Write(row.m_SeriesName1);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV6_Split_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV6_Split_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV8_Extract_Split_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV8_Extract_Split_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_SeriesName);
                    input->Read(row.m_TweetCount);
                    input->Read(row.m_RetweetCount);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                    input->Read(row.m_TweetCount);
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_RetweetCount);
                    }
                    else
                    {
                        row.m_RetweetCount.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV8_Extract_Split_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV8_Extract_Split_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_RetweetCount.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            output->Write(row.m_TweetCount);
            if (!row.m_RetweetCount.IsNull())
            {
                output->Write(row.m_RetweetCount);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV8_Extract_Split_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV8_Extract_Split_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<GetSStream_13_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, GetSStream_13_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Tweet);
                    input->Read(row.m_RetweetCount);
                    input->Read(row.m_Sentiment);
                    input->Read(row.m_SeriesName);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Tweet);
                    }
                    else
                    {
                        row.m_Tweet.SetNull();
                    }
                    input->Read(row.m_RetweetCount);
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Sentiment);
                    }
                    else
                    {
                        row.m_Sentiment.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<GetSStream_13_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, GetSStream_13_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Tweet.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Sentiment.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_Tweet.IsNull())
            {
                output->Write(row.m_Tweet);
            }
            output->Write(row.m_RetweetCount);
            if (!row.m_Sentiment.IsNull())
            {
                output->Write(row.m_Sentiment);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const GetSStream_13_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const GetSStream_13_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV9_Split_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV9_Split_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_TweetScore);
                    input->Read(row.m_RetweetScore);
                    input->Read(row.m_SeriesName2);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_TweetScore);
                    }
                    else
                    {
                        row.m_TweetScore.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_RetweetScore);
                    }
                    else
                    {
                        row.m_RetweetScore.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_SeriesName2);
                    }
                    else
                    {
                        row.m_SeriesName2.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV9_Split_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV9_Split_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_TweetScore.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_RetweetScore.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_SeriesName2.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_TweetScore.IsNull())
            {
                output->Write(row.m_TweetScore);
            }
            if (!row.m_RetweetScore.IsNull())
            {
                output->Write(row.m_RetweetScore);
            }
            if (!row.m_SeriesName2.IsNull())
            {
                output->Write(row.m_SeriesName2);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV9_Split_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV9_Split_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_21_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_21_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_TweetScore);
                    input->Read(row.m_SeriesName);
                    input->Read(row.m_RetweetCount);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_TweetScore);
                    }
                    else
                    {
                        row.m_TweetScore.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_RetweetCount);
                    }
                    else
                    {
                        row.m_RetweetCount.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_21_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_21_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_TweetScore.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_RetweetCount.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_TweetScore.IsNull())
            {
                output->Write(row.m_TweetScore);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            if (!row.m_RetweetCount.IsNull())
            {
                output->Write(row.m_RetweetCount);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const Process_21_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_21_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV6_Split_out1>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV6_Split_out1 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_SeriesName);
                    input->Read(row.m_Score);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Score);
                    }
                    else
                    {
                        row.m_Score.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV6_Split_out1>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV6_Split_out1 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Score.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            if (!row.m_Score.IsNull())
            {
                output->Write(row.m_Score);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const SV6_Split_out1 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV6_Split_out1 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_25_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_25_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_SeriesName);
                    input->Read(row.m_Score);
                    input->Read(row.m_TweetScore);
                    input->Read(row.m_RetweetScore);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_SeriesName);
                    }
                    else
                    {
                        row.m_SeriesName.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_Score);
                    }
                    else
                    {
                        row.m_Score.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_TweetScore);
                    }
                    else
                    {
                        row.m_TweetScore.SetNull();
                    }
                    if ((___masking___[0] & 16 ) != 16)
                    {
                        input->Read(row.m_RetweetScore);
                    }
                    else
                    {
                        row.m_RetweetScore.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_25_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, HashJoin_25_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_SeriesName.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_Score.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_TweetScore.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (row.m_RetweetScore.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 16;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_SeriesName.IsNull())
            {
                output->Write(row.m_SeriesName);
            }
            if (!row.m_Score.IsNull())
            {
                output->Write(row.m_Score);
            }
            if (!row.m_TweetScore.IsNull())
            {
                output->Write(row.m_TweetScore);
            }
            if (!row.m_RetweetScore.IsNull())
            {
                output->Write(row.m_RetweetScore);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_25_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_25_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionSchema_GetSStream_0::PartitionSchema_GetSStream_0()
    {
    }
    INLINE PartitionSchema_GetSStream_0::PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc) :
            m_SeriesName(c.m_SeriesName, alloc)
    {
    }

    template <typename Allocator>
    INLINE PartitionSchema_GetSStream_0::PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SeriesName = c.m_SeriesName;
        memoryManager->Copy(m_SeriesName);
    }

    template <typename Allocator>
    INLINE void PartitionSchema_GetSStream_0::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_SeriesName);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionKeySchema_GetSStream_0::PartitionKeySchema_GetSStream_0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_1::HashAggregatorState_Process_1()
    {
    }
    INLINE HashAggregatorState_Process_1::HashAggregatorState_Process_1(const HashAggregatorState_Process_1 & c, IncrementalAllocator * alloc)
    {
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_1::HashAggregatorState_Process_1(const HashAggregatorState_Process_1 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_1::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionKeySchema_GetSStream_4::PartitionKeySchema_GetSStream_4()
    {
        m_RatingID = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE GetSStream_4_Data0::GetSStream_4_Data0()
    {
        m_Rating = 0.0;
    }
    INLINE GetSStream_4_Data0::GetSStream_4_Data0(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc) :
            m_SeriesName(c.m_SeriesName, alloc),
            m_RatingName(c.m_RatingName, alloc)
    {
        m_Rating = c.m_Rating;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_10_Data0::Process_10_Data0()
    {
    }
    INLINE Process_10_Data0::Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc) :
            m_Score(c.m_Score),
            m_SeriesName(c.m_SeriesName, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SequenceProjectSchemaGroup_Process_10::SequenceProjectSchemaGroup_Process_10()
    {
    }
    INLINE SequenceProjectSchemaGroup_Process_10::SequenceProjectSchemaGroup_Process_10(const SequenceProjectSchemaGroup_Process_10 & c, IncrementalAllocator * alloc) :
            m_RatingName(c.m_RatingName, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SequenceProjectSchemaValue_Process_10::SequenceProjectSchemaValue_Process_10()
    {
        m_Rating = 0.0;
    }
    INLINE SequenceProjectSchemaValue_Process_10::SequenceProjectSchemaValue_Process_10(const SequenceProjectSchemaValue_Process_10 & c, IncrementalAllocator * alloc)
    {
        m_Rating = c.m_Rating;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV6_Split_out0::SV6_Split_out0()
    {
    }
    INLINE SV6_Split_out0::SV6_Split_out0(const SV6_Split_out0 & c, IncrementalAllocator * alloc) :
            m_Score(c.m_Score),
            m_SeriesName1(c.m_SeriesName1, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV6_Split_out1::SV6_Split_out1()
    {
    }
    INLINE SV6_Split_out1::SV6_Split_out1(const SV6_Split_out1 & c, IncrementalAllocator * alloc) :
            m_SeriesName(c.m_SeriesName, alloc),
            m_Score(c.m_Score)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionKeySchema_GetSStream_13::PartitionKeySchema_GetSStream_13()
    {
        m_TweetID = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE GetSStream_13_Data0::GetSStream_13_Data0()
    {
        m_RetweetCount = 0;
    }
    INLINE GetSStream_13_Data0::GetSStream_13_Data0(const GetSStream_13_Data0 & c, IncrementalAllocator * alloc) :
            m_Tweet(c.m_Tweet, alloc),
            m_Sentiment(c.m_Sentiment, alloc),
            m_SeriesName(c.m_SeriesName, alloc)
    {
        m_RetweetCount = c.m_RetweetCount;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV8_Extract_Split_out0::SV8_Extract_Split_out0()
    {
        m_TweetCount = 0;
    }
    INLINE SV8_Extract_Split_out0::SV8_Extract_Split_out0(const SV8_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
            m_SeriesName(c.m_SeriesName, alloc),
            m_RetweetCount(c.m_RetweetCount)
    {
        m_TweetCount = c.m_TweetCount;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV8_Extract_Split_out1::SV8_Extract_Split_out1()
    {
        m_RetweetCount = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_20_Data0::Process_20_Data0()
    {
    }
    INLINE Process_20_Data0::Process_20_Data0(const Process_20_Data0 & c, IncrementalAllocator * alloc) :
            m_SeriesName(c.m_SeriesName, alloc),
            m_RetweetCount(c.m_RetweetCount),
            m_TweetCount(c.m_TweetCount)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_21_Data0::Process_21_Data0()
    {
    }
    INLINE Process_21_Data0::Process_21_Data0(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
            m_TweetScore(c.m_TweetScore),
            m_SeriesName(c.m_SeriesName, alloc),
            m_RetweetCount(c.m_RetweetCount)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SequenceProjectSchemaValue_Process_21::SequenceProjectSchemaValue_Process_21()
    {
    }
    INLINE SequenceProjectSchemaValue_Process_21::SequenceProjectSchemaValue_Process_21(const SequenceProjectSchemaValue_Process_21 & c, IncrementalAllocator * alloc) :
            m_TweetCount(c.m_TweetCount)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_23_Data0::Process_23_Data0()
    {
    }
    INLINE Process_23_Data0::Process_23_Data0(const Process_23_Data0 & c, IncrementalAllocator * alloc) :
            m_RetweetScore(c.m_RetweetScore),
            m_SeriesName(c.m_SeriesName, alloc),
            m_TweetScore(c.m_TweetScore)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SequenceProjectSchemaValue_Process_23::SequenceProjectSchemaValue_Process_23()
    {
    }
    INLINE SequenceProjectSchemaValue_Process_23::SequenceProjectSchemaValue_Process_23(const SequenceProjectSchemaValue_Process_23 & c, IncrementalAllocator * alloc) :
            m_RetweetCount(c.m_RetweetCount)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV9_Split_out0::SV9_Split_out0()
    {
    }
    INLINE SV9_Split_out0::SV9_Split_out0(const SV9_Split_out0 & c, IncrementalAllocator * alloc) :
            m_TweetScore(c.m_TweetScore),
            m_RetweetScore(c.m_RetweetScore),
            m_SeriesName2(c.m_SeriesName2, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV9_Split_out1::SV9_Split_out1()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_12::HashCombineKey_HashJoin_12()
    {
    }
    INLINE HashCombineKey_HashJoin_12::HashCombineKey_HashJoin_12(const HashCombineKey_HashJoin_12 & c, IncrementalAllocator * alloc) :
            m_SeriesName_SeriesName1(c.m_SeriesName_SeriesName1, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_12::HashCombineKey_HashJoin_12(const HashCombineKey_HashJoin_12 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SeriesName_SeriesName1 = c.m_SeriesName_SeriesName1;
        memoryManager->Copy(m_SeriesName_SeriesName1);
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_12::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_SeriesName_SeriesName1);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_12::HashCombineValue_HashJoin_12()
    {
    }
    INLINE HashCombineValue_HashJoin_12::HashCombineValue_HashJoin_12(const HashCombineValue_HashJoin_12 & c, IncrementalAllocator * alloc) :
            m_Score(c.m_Score)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_12::HashCombineValue_HashJoin_12(const HashCombineValue_HashJoin_12 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Score = c.m_Score;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_12::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_25_Data0::HashJoin_25_Data0()
    {
    }
    INLINE HashJoin_25_Data0::HashJoin_25_Data0(const HashJoin_25_Data0 & c, IncrementalAllocator * alloc) :
            m_SeriesName(c.m_SeriesName, alloc),
            m_Score(c.m_Score),
            m_TweetScore(c.m_TweetScore),
            m_RetweetScore(c.m_RetweetScore)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_25::HashCombineKey_HashJoin_25()
    {
    }
    INLINE HashCombineKey_HashJoin_25::HashCombineKey_HashJoin_25(const HashCombineKey_HashJoin_25 & c, IncrementalAllocator * alloc) :
            m_SeriesName_SeriesName2(c.m_SeriesName_SeriesName2, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_25::HashCombineKey_HashJoin_25(const HashCombineKey_HashJoin_25 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SeriesName_SeriesName2 = c.m_SeriesName_SeriesName2;
        memoryManager->Copy(m_SeriesName_SeriesName2);
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_25::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_SeriesName_SeriesName2);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_25::HashCombineValue_HashJoin_25()
    {
    }
    INLINE HashCombineValue_HashJoin_25::HashCombineValue_HashJoin_25(const HashCombineValue_HashJoin_25 & c, IncrementalAllocator * alloc) :
            m_TweetScore(c.m_TweetScore),
            m_RetweetScore(c.m_RetweetScore)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_25::HashCombineValue_HashJoin_25(const HashCombineValue_HashJoin_25 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_TweetScore = c.m_TweetScore;
        m_RetweetScore = c.m_RetweetScore;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_25::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_27_Data0::Process_27_Data0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_29_Data0::Process_29_Data0()
    {
    }

#pragma endregion Schema Constructors
// SV3_EXTRACT SV4_EXTRACT 
#pragma region shared code 
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SStreamV3ExtractPolicy<GetSStream_4_Data0, UID_GetSStream_4, NullSchema>
    {
    public:
        typedef NullSchema CorrelatedParameters;
        typedef bool (*PredFn)(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, CorrelatedParameters* params);

    public:
        typedef GetSStream_4_Data0 DataRowSchema;
        typedef PartitionSchema_GetSStream_0 PartitionSchema;
        typedef PartitionKeySchema_GetSStream_4 DataKeySchema;
        typedef RowComparePolicy<DataKeySchema, DataKeySchema, UID_GetSStream_4> DataKeyComparePolicy;

        static const PartitioningType m_partitioning = HashPartition;
        static const bool m_residualFilterForKeyRange = false;
        static const bool m_residualFilterForRefinedHash = false;
        static const int m_numberOfPartitionAfterRefinedHash = 0;
        static const bool m_keyRangeSeek = false;
        static const bool m_truncatedRangeKey = false;
        static const bool m_generateMetadata = false;
        static const UINT m_numOfBuffers = 4;
        static const bool m_hasCorrelatedSchema = false;

        // FailFastSStreamRead ignores the maxUnavailability value and forces a fast failure in case of store errors
        static const bool m_skipUnavailable = true/*0*/;

        static const string& DataSchemaString()
        {
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RatingID</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>SeriesName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RatingName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Rating</Name>\r\n      <Type>float</Type>\r\n    </Column>\r\n  </Columns>\r\n</Schema>" });
            return *spDataSchemaString;
        }

        static BYTE* DataColumnSizes()
        {
            static BYTE sizes[] = 
            {
                4,
                0,
                0,
                4,
            };

            return sizes;
        }
        static const UINT m_dataColumnSizesCnt = 4;

        static BYTE* IndexColumnSizes()
        {
            static BYTE sizes[] = 
                {
                // Low key
                4,
                // Hi Key
                4,
                8, // BlockOffset
                8, // BlockLength
                4, // RowCount
                };

            return sizes;
        }
        static const UINT m_indexColumnSizesCnt = 2 * 1 + 3;

        static UINT* SortKeys()
        {
            static UINT keys[] = 
                {
                0,
                };
            return keys;
        }
        static const UINT m_sortKeysCnt = 1;

        static const bool m_descending = false;


        static bool Deserialize(SSLibV3::ColumnIterator* iters, DataRowSchema & row, IncrementalAllocator* alloc, const BYTE* blockEnd, UINT32 defaultDistributionId, UINT64 defaultRowId)
        {
            SCOPE_ASSERT(iters[1].HasData(blockEnd));
            if (iters[1].IsNull())
            {
                row.m_SeriesName.SetNull();
            }
            else
            {
                row.m_SeriesName.CopyFromNotNull((FString::PointerType)iters[1].DataRaw(), (int)iters[1].Length(), alloc);
            }
            SCOPE_ASSERT(iters[2].HasData(blockEnd));
            if (iters[2].IsNull())
            {
                row.m_RatingName.SetNull();
            }
            else
            {
                row.m_RatingName.CopyFromNotNull((FString::PointerType)iters[2].DataRaw(), (int)iters[2].Length(), alloc);
            }
            SCOPE_ASSERT(iters[3].HasData(blockEnd));
            row.m_Rating = iters[3].Data<float>();
            return true;
        }

        static void SkipRow(SSLibV3::ColumnIterator* iters)
        {
            if (iters[1].IsNull())
            {
                iters[1].IncrementNull();
            }
            else
            {
                iters[1].IncrementVariable();
            }
            if (iters[2].IsNull())
            {
                iters[2].IncrementNull();
            }
            else
            {
                iters[2].IncrementVariable();
            }
            iters[3].IncrementFixedNotNullable<4>();
            //// Section of the Partition Key iterators skip.
            iters[0].IncrementFixedNotNullable<4>();
            //// Section of the System column iterators skip.
        }

        static PredFn* PredicatesLow() { return nullptr; }
        static PredFn* PredicatesHi() { return nullptr; }
        static const UINT m_predicateCnt = 0;
        static bool LowIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        // PredicateRefinedHashResidual
        static bool PredicateRefinedHashResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, int partitionIndex, int numberOfPartitions)
        {
            return true;
 
        }
    };


#endif // defined(COMPILE_NATIVE)
#pragma endregion shared code 
// SV3_EXTRACT SV4_EXTRACT 
#pragma region shared code 
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_4_Data0,UID_Process_5>
    {
    public:
        struct KeyStruct
        {
            FString m_RatingName;
            float m_Rating;
            FString m_SeriesName;

            KeyStruct(GetSStream_4_Data0 & c) :
                m_RatingName(c.m_RatingName),
                m_Rating(c.m_Rating),
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<GetSStream_4_Data0&>(c).m_RatingName, alloc),
                m_Rating(const_cast<GetSStream_4_Data0&>(c).m_Rating),
                m_SeriesName(const_cast<GetSStream_4_Data0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RatingName(c.m_RatingName),
                m_Rating(c.m_Rating),
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<KeyStruct&>(c).m_RatingName, alloc),
                m_Rating(const_cast<KeyStruct&>(c).m_Rating),
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_RatingName(),
                m_Rating(0.0),
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRatingName:\t" << row.m_RatingName << endl;
                os << "\tRating:\t" << row.m_Rating << endl;
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RatingName, key.m_RatingName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Rating, key.m_Rating)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_4_Data0 * n1, GetSStream_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RatingName, (*n2).m_RatingName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Rating, (*n2).m_Rating)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(GetSStream_4_Data0 * p, int depth)
        {

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(GetSStream_4_Data0 * p, int depth)
        {
            return true;
        }
    };

#pragma endregion shared code 
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SStreamV3ExtractPolicy<PartitionSchema_GetSStream_0, UID_GetSStream_0, NullSchema>
    {
    public:
        typedef NullSchema CorrelatedParameters;
        typedef bool (*PredFn)(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, CorrelatedParameters* params);

    public:
        typedef PartitionSchema_GetSStream_0 DataRowSchema;
        typedef PartitionSchema_GetSStream_0 PartitionSchema;
        typedef PartitionKeySchema_GetSStream_0 DataKeySchema;
        typedef RowComparePolicy<DataKeySchema, DataKeySchema, UID_GetSStream_0> DataKeyComparePolicy;

        static const PartitioningType m_partitioning = HashPartition;
        static const bool m_residualFilterForKeyRange = false;
        static const bool m_residualFilterForRefinedHash = false;
        static const int m_numberOfPartitionAfterRefinedHash = 0;
        static const bool m_keyRangeSeek = false;
        static const bool m_truncatedRangeKey = false;
        static const bool m_generateMetadata = false;
        static const UINT m_numOfBuffers = 4;
        static const bool m_hasCorrelatedSchema = false;

        // FailFastSStreamRead ignores the maxUnavailability value and forces a fast failure in case of store errors
        static const bool m_skipUnavailable = true/*0*/;

        static const string& DataSchemaString()
        {
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>SeriesName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Synonym</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n  </Columns>\r\n</Schema>" });
            return *spDataSchemaString;
        }

        static BYTE* DataColumnSizes()
        {
            static BYTE sizes[] = 
            {
                0,
                0,
            };

            return sizes;
        }
        static const UINT m_dataColumnSizesCnt = 2;

        static BYTE* IndexColumnSizes()
        {
            static BYTE sizes[] = 
                {
                // Low key
                0,
                // Hi Key
                0,
                8, // BlockOffset
                8, // BlockLength
                4, // RowCount
                };

            return sizes;
        }
        static const UINT m_indexColumnSizesCnt = 2 * 1 + 3;

        static UINT* SortKeys()
        {
            static UINT keys[] = 
                {
                1,
                };
            return keys;
        }
        static const UINT m_sortKeysCnt = 1;

        static const bool m_descending = false;


        static bool Deserialize(SSLibV3::ColumnIterator* iters, DataRowSchema & row, IncrementalAllocator* alloc, const BYTE* blockEnd, UINT32 defaultDistributionId, UINT64 defaultRowId)
        {
            SCOPE_ASSERT(iters[0].HasData(blockEnd));
            if (iters[0].IsNull())
            {
                row.m_SeriesName.SetNull();
            }
            else
            {
                row.m_SeriesName.CopyFromNotNull((FString::PointerType)iters[0].DataRaw(), (int)iters[0].Length(), alloc);
            }
            return true;
        }

        static void SkipRow(SSLibV3::ColumnIterator* iters)
        {
            if (iters[0].IsNull())
            {
                iters[0].IncrementNull();
            }
            else
            {
                iters[0].IncrementVariable();
            }
            //// Section of the Partition Key iterators skip.
            if (iters[1].IsNull())
            {
                iters[1].IncrementNull();
            }
            else
            {
                iters[1].IncrementVariable();
            }
            //// Section of the System column iterators skip.
        }

        static PredFn* PredicatesLow() { return nullptr; }
        static PredFn* PredicatesHi() { return nullptr; }
        static const UINT m_predicateCnt = 0;
        static bool LowIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        // PredicateRefinedHashResidual
        static bool PredicateRefinedHashResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, int partitionIndex, int numberOfPartitions)
        {
            return true;
 
        }
    };


#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_GetSStream_0,UID_Process_3>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(PartitionSchema_GetSStream_0 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<PartitionSchema_GetSStream_0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_GetSStream_0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(PartitionSchema_GetSStream_0 * n1, PartitionSchema_GetSStream_0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename PartitionSchema_GetSStream_0, typename PartitionSchema_GetSStream_0, UID_Process_3> 
    {
    public:
        
        AggregationPolicy()
            :
            m_SeriesName_SeriesName_FIRST("FIRST_SeriesName_SeriesName")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<PartitionSchema_GetSStream_0,UID_Process_3>::KeyType * input, PartitionSchema_GetSStream_0 * output)
        {
            (*output).m_SeriesName = (*input).m_SeriesName;
        }

        // process input row, called for each row in key range
        void AddRow(PartitionSchema_GetSStream_0 * input)
        {
            m_SeriesName_SeriesName_FIRST.Add((*input).m_SeriesName);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(PartitionSchema_GetSStream_0 * output)
        {
            m_SeriesName_SeriesName_FIRST.Aggregate(&(*output).m_SeriesName);
        }

        // write aggregated data
        void GetValue(PartitionSchema_GetSStream_0 * output)
        {
            m_SeriesName_SeriesName_FIRST.GetValue(&(*output).m_SeriesName);
        }

        // reset for new key
        void Reset()
        {
            m_SeriesName_SeriesName_FIRST.Reset();
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root)
        {
            m_SeriesName_SeriesName_FIRST.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_SeriesName_SeriesName_FIRST.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<FString> m_SeriesName_SeriesName_FIRST;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_GetSStream_0,UID_Process_2>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(PartitionSchema_GetSStream_0 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<PartitionSchema_GetSStream_0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_GetSStream_0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(PartitionSchema_GetSStream_0 * n1, PartitionSchema_GetSStream_0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(PartitionSchema_GetSStream_0 * p, int depth)
        {
            if (depth < 1 && (*p).m_SeriesName.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_SeriesName.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_SeriesName.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_SeriesName.buffer()[depth]));
            }

            depth -= (int) ((*p).m_SeriesName.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(PartitionSchema_GetSStream_0 * p, int depth)
        {
            depth -= (int) ((*p).m_SeriesName.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<PartitionSchema_GetSStream_0, PartitionSchema_GetSStream_0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(PartitionSchema_GetSStream_0 & input, PartitionSchema_GetSStream_0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<PartitionSchema_GetSStream_0, PartitionSchema_GetSStream_0, UID_Process_1>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const PartitionSchema_GetSStream_0& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_SeriesName);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const PartitionSchema_GetSStream_0& left, const PartitionSchema_GetSStream_0& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SeriesName, right.m_SeriesName)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const PartitionSchema_GetSStream_0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const PartitionSchema_GetSStream_0& left, const PartitionSchema_GetSStream_0& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SeriesName, right.m_SeriesName)) return false;
                return true;
            }
        };
 
        typedef PartitionSchema_GetSStream_0 KeySchema;
        typedef HashAggregatorState_Process_1 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3403677694ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const PartitionSchema_GetSStream_0 & row, KeySchema & key)
        {
           key.m_SeriesName = row.m_SeriesName;
        }

        static void DeepCopyRowToKey(const PartitionSchema_GetSStream_0 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           FString tmp_SeriesName(row.m_SeriesName, alloc);
           key.m_SeriesName = tmp_SeriesName;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const PartitionSchema_GetSStream_0 & row, ValueSchema & value)
        {
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const PartitionSchema_GetSStream_0 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const PartitionSchema_GetSStream_0 & update, IncrementalAllocator* alloc)
        {
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, PartitionSchema_GetSStream_0 & row)
        {
            row.m_SeriesName = key.m_SeriesName;
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<PartitionSchema_GetSStream_0, PartitionSchema_GetSStream_0, UID_Process_3>
    {
    public:

        static bool FilterTransformRow(PartitionSchema_GetSStream_0 & input, PartitionSchema_GetSStream_0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractor<PartitionSchema_GetSStream_0, SStreamV3ExtractPolicy<PartitionSchema_GetSStream_0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_GetSStream_0;
    SStreamV3ExtractorType_SV1_Extract_GetSStream_0 * CreateExtractor_SV1_Extract_GetSStream_0(unique_ptr<SStreamV3ExtractorType_SV1_Extract_GetSStream_0> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_GetSStream_0(0, "", UID_GetSStream_0));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        unique_ptr<SStreamV3ExtractorType_SV1_Extract_GetSStream_0> extractor_0_ptr;
        SStreamV3ExtractorType_SV1_Extract_GetSStream_0 * extractor_0 = CreateExtractor_SV1_Extract_GetSStream_0(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define hash aggregator type
        typedef LocalHashAggregatorV2<SStreamV3ExtractorType_SV1_Extract_GetSStream_0, PartitionSchema_GetSStream_0, PartitionSchema_GetSStream_0, UID_Process_1> LocalHashAggregatorType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_1> localHashAggregator_Process_1_ptr (new LocalHashAggregatorType_Process_1(extractor_0, UID_Process_1));
        LocalHashAggregatorType_Process_1 * localHashAggregator_Process_1 = localHashAggregator_Process_1_ptr.get();
        ULONG localHashAggregator_Process_1_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<PartitionSchema_GetSStream_0>> delegate_localHashAggregator_Process_1_ptr (new OperatorDelegate<PartitionSchema_GetSStream_0>(OperatorDelegate<PartitionSchema_GetSStream_0>::FromOperator(localHashAggregator_Process_1)));
        OperatorDelegate<PartitionSchema_GetSStream_0> * delegate_localHashAggregator_Process_1 = delegate_localHashAggregator_Process_1_ptr.get();
        ULONG delegate_localHashAggregator_Process_1_count = 1;
        // Define sorter type
        typedef Sorter<PartitionSchema_GetSStream_0> SorterType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_2> sorter_Process_2_ptr (new SorterType_Process_2(delegate_localHashAggregator_Process_1, &MKQSort<PartitionSchema_GetSStream_0>::Sort<KeyComparePolicy<PartitionSchema_GetSStream_0, UID_Process_2>, (sizeof(PartitionSchema_GetSStream_0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<PartitionSchema_GetSStream_0>::CreateDelegate<UID_Process_2>(), false, 2434793470 /*memoryQuota*/, UID_Process_2));
        SorterType_Process_2 * sorter_Process_2 = sorter_Process_2_ptr.get();
        ULONG sorter_Process_2_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_2, PartitionSchema_GetSStream_0, PartitionSchema_GetSStream_0, UID_Process_3> StreamAggregatorType_Process_3;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_3> streamAggregator_Process_3_ptr (new StreamAggregatorType_Process_3(sorter_Process_2, false, UID_Process_3));
        StreamAggregatorType_Process_3 * streamAggregator_Process_3 = streamAggregator_Process_3_ptr.get();
        ULONG streamAggregator_Process_3_count = 1;
        // Define outputer type
        typedef Outputer<StreamAggregatorType_Process_3, PartitionSchema_GetSStream_0, BinaryOutputPolicy<PartitionSchema_GetSStream_0>, BinaryOutputStream, false> OutputerType1_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType1_SV1_Extract(streamAggregator_Process_3, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType1_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            PartitionSchema_GetSStream_0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
#pragma region SV2_Process
#if defined(COMPILE_SV2_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<PartitionSchema_GetSStream_0, UID_SV2_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, PartitionSchema_GetSStream_0 & row)
        {
            if (!row.m_SeriesName.IsNull())
            {
                output->Write<FString,true>(row.m_SeriesName);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("SeriesName", 10));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<PartitionSchema_GetSStream_0, BinaryExtractPolicy<PartitionSchema_GetSStream_0>, BinaryInputStream> ExtractorType1_SV2_Process;        
        unique_ptr<ExtractorType1_SV2_Process> extractor_0_ptr= make_unique<ExtractorType1_SV2_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV2_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define outputer type
        typedef Outputer<ExtractorType1_SV2_Process, PartitionSchema_GetSStream_0, TextOutputPolicy<PartitionSchema_GetSStream_0, UID_SV2_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV2_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Process> outputer_SV2_Process_out0_ptr(new OutputerType2_SV2_Process(extractor_0, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV2_Process_out0));
        OutputerType2_SV2_Process * outputer_SV2_Process_out0 = outputer_SV2_Process_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Process_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            PartitionSchema_GetSStream_0 row;
            outputer_SV2_Process_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV2_Process_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV2_Process
#pragma region SV3_Extract
#if defined(COMPILE_SV3_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractor<GetSStream_4_Data0, SStreamV3ExtractPolicy<GetSStream_4_Data0, UID_GetSStream_4, NullSchema>, UID_GetSStream_4, NullSchema, false> SStreamV3ExtractorType_SV3_Extract_GetSStream_4;
    SStreamV3ExtractorType_SV3_Extract_GetSStream_4 * CreateExtractor_SV3_Extract_GetSStream_4(unique_ptr<SStreamV3ExtractorType_SV3_Extract_GetSStream_4> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV3_Extract_GetSStream_4(4, "", UID_GetSStream_4));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        unique_ptr<SStreamV3ExtractorType_SV3_Extract_GetSStream_4> extractor_0_ptr;
        SStreamV3ExtractorType_SV3_Extract_GetSStream_4 * extractor_0 = CreateExtractor_SV3_Extract_GetSStream_4(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<GetSStream_4_Data0>> delegate_extractor_0_ptr (new OperatorDelegate<GetSStream_4_Data0>(OperatorDelegate<GetSStream_4_Data0>::FromOperator(extractor_0)));
        OperatorDelegate<GetSStream_4_Data0> * delegate_extractor_0 = delegate_extractor_0_ptr.get();
        ULONG delegate_extractor_0_count = 1;
        // Define sorter type
        typedef Sorter<GetSStream_4_Data0> SorterType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_5> sorter_Process_5_ptr (new SorterType_Process_5(delegate_extractor_0, &StdSort<GetSStream_4_Data0>::Sort<KeyComparePolicy<GetSStream_4_Data0, UID_Process_5>, (sizeof(GetSStream_4_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<GetSStream_4_Data0>::CreateDelegate<UID_Process_5>(), false, 5846859773 /*memoryQuota*/, UID_Process_5));
        SorterType_Process_5 * sorter_Process_5 = sorter_Process_5_ptr.get();
        ULONG sorter_Process_5_count = 1;
        // Define outputer type
        typedef Outputer<SorterType_Process_5, GetSStream_4_Data0, BinaryOutputPolicy<GetSStream_4_Data0>, BinaryOutputStream, false> OutputerType1_SV3_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV3_Extract> outputer_SV3_Extract_out0_ptr(new OutputerType1_SV3_Extract(sorter_Process_5, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV3_Extract_out0));
        OutputerType1_SV3_Extract * outputer_SV3_Extract_out0 = outputer_SV3_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV3_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            GetSStream_4_Data0 row;
            outputer_SV3_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV3_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV3_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV3_Extract
#pragma region SV4_Extract
#if defined(COMPILE_SV4_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractor<GetSStream_4_Data0, SStreamV3ExtractPolicy<GetSStream_4_Data0, UID_GetSStream_4, NullSchema>, UID_GetSStream_4, NullSchema, false> SStreamV3ExtractorType_SV4_Extract_GetSStream_6;
    SStreamV3ExtractorType_SV4_Extract_GetSStream_6 * CreateExtractor_SV4_Extract_GetSStream_6(unique_ptr<SStreamV3ExtractorType_SV4_Extract_GetSStream_6> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV4_Extract_GetSStream_6(6, "", UID_GetSStream_6));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV4_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        unique_ptr<SStreamV3ExtractorType_SV4_Extract_GetSStream_6> extractor_0_ptr;
        SStreamV3ExtractorType_SV4_Extract_GetSStream_6 * extractor_0 = CreateExtractor_SV4_Extract_GetSStream_6(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<GetSStream_4_Data0>> delegate_extractor_0_ptr (new OperatorDelegate<GetSStream_4_Data0>(OperatorDelegate<GetSStream_4_Data0>::FromOperator(extractor_0)));
        OperatorDelegate<GetSStream_4_Data0> * delegate_extractor_0 = delegate_extractor_0_ptr.get();
        ULONG delegate_extractor_0_count = 1;
        // Define sorter type
        typedef Sorter<GetSStream_4_Data0> SorterType_Process_7;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_7> sorter_Process_7_ptr (new SorterType_Process_7(delegate_extractor_0, &StdSort<GetSStream_4_Data0>::Sort<KeyComparePolicy<GetSStream_4_Data0, UID_Process_5>, (sizeof(GetSStream_4_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<GetSStream_4_Data0>::CreateDelegate<UID_Process_5>(), false, 5846859773 /*memoryQuota*/, UID_Process_7));
        SorterType_Process_7 * sorter_Process_7 = sorter_Process_7_ptr.get();
        ULONG sorter_Process_7_count = 1;
        // Define outputer type
        typedef Outputer<SorterType_Process_7, GetSStream_4_Data0, BinaryOutputPolicy<GetSStream_4_Data0>, BinaryOutputStream, false> OutputerType1_SV4_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV4_Extract> outputer_SV4_Extract_out0_ptr(new OutputerType1_SV4_Extract(sorter_Process_7, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV4_Extract_out0));
        OutputerType1_SV4_Extract * outputer_SV4_Extract_out0 = outputer_SV4_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV4_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            GetSStream_4_Data0 row;
            outputer_SV4_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV4_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV4_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV4_Extract
#pragma region SV5_Combine
#if defined(COMPILE_SV5_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_4_Data0,UID_Process_9>
    {
    public:
        struct KeyStruct
        {
            FString m_RatingName;
            float m_Rating;
            FString m_SeriesName;

            KeyStruct(GetSStream_4_Data0 & c) :
                m_RatingName(c.m_RatingName),
                m_Rating(c.m_Rating),
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<GetSStream_4_Data0&>(c).m_RatingName, alloc),
                m_Rating(const_cast<GetSStream_4_Data0&>(c).m_Rating),
                m_SeriesName(const_cast<GetSStream_4_Data0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RatingName(c.m_RatingName),
                m_Rating(c.m_Rating),
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<KeyStruct&>(c).m_RatingName, alloc),
                m_Rating(const_cast<KeyStruct&>(c).m_Rating),
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_RatingName(),
                m_Rating(0.0),
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRatingName:\t" << row.m_RatingName << endl;
                os << "\tRating:\t" << row.m_Rating << endl;
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RatingName, key.m_RatingName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Rating, key.m_Rating)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_4_Data0 * n1, GetSStream_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RatingName, (*n2).m_RatingName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Rating, (*n2).m_Rating)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename GetSStream_4_Data0, typename GetSStream_4_Data0, UID_Process_9> 
    {
    public:
        
        AggregationPolicy()
            :
            m_RatingName_RatingName_FIRST("FIRST_RatingName_RatingName"),
            m_Rating_Rating_FIRST("FIRST_Rating_Rating"),
            m_SeriesName_SeriesName_FIRST("FIRST_SeriesName_SeriesName")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<GetSStream_4_Data0,UID_Process_9>::KeyType * input, GetSStream_4_Data0 * output)
        {
            (*output).m_RatingName = (*input).m_RatingName;
            (*output).m_Rating = (*input).m_Rating;
            (*output).m_SeriesName = (*input).m_SeriesName;
        }

        // process input row, called for each row in key range
        void AddRow(GetSStream_4_Data0 * input)
        {
            m_RatingName_RatingName_FIRST.Add((*input).m_RatingName);
            m_Rating_Rating_FIRST.Add((*input).m_Rating);
            m_SeriesName_SeriesName_FIRST.Add((*input).m_SeriesName);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(GetSStream_4_Data0 * output)
        {
            m_RatingName_RatingName_FIRST.Aggregate(&(*output).m_RatingName);
            m_Rating_Rating_FIRST.Aggregate(&(*output).m_Rating);
            m_SeriesName_SeriesName_FIRST.Aggregate(&(*output).m_SeriesName);
        }

        // write aggregated data
        void GetValue(GetSStream_4_Data0 * output)
        {
            m_RatingName_RatingName_FIRST.GetValue(&(*output).m_RatingName);
            m_Rating_Rating_FIRST.GetValue(&(*output).m_Rating);
            m_SeriesName_SeriesName_FIRST.GetValue(&(*output).m_SeriesName);
        }

        // reset for new key
        void Reset()
        {
            m_RatingName_RatingName_FIRST.Reset();
            m_Rating_Rating_FIRST.Reset();
            m_SeriesName_SeriesName_FIRST.Reset();
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root)
        {
            m_RatingName_RatingName_FIRST.WriteRuntimeStats(root);
            m_Rating_Rating_FIRST.WriteRuntimeStats(root);
            m_SeriesName_SeriesName_FIRST.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_RatingName_RatingName_FIRST.GetOperatorRequirements());
            result.Add(m_Rating_Rating_FIRST.GetOperatorRequirements());
            result.Add(m_SeriesName_SeriesName_FIRST.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<FString> m_RatingName_RatingName_FIRST;
        Aggregate_FIRST<float> m_Rating_Rating_FIRST;
        Aggregate_FIRST<FString> m_SeriesName_SeriesName_FIRST;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_4_Data0,UID_Aggregate_8>
    {
    public:
        struct KeyStruct
        {
            FString m_RatingName;
            float m_Rating;
            FString m_SeriesName;

            KeyStruct(GetSStream_4_Data0 & c) :
                m_RatingName(c.m_RatingName),
                m_Rating(c.m_Rating),
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<GetSStream_4_Data0&>(c).m_RatingName, alloc),
                m_Rating(const_cast<GetSStream_4_Data0&>(c).m_Rating),
                m_SeriesName(const_cast<GetSStream_4_Data0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RatingName(c.m_RatingName),
                m_Rating(c.m_Rating),
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<KeyStruct&>(c).m_RatingName, alloc),
                m_Rating(const_cast<KeyStruct&>(c).m_Rating),
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_RatingName(),
                m_Rating(0.0),
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRatingName:\t" << row.m_RatingName << endl;
                os << "\tRating:\t" << row.m_Rating << endl;
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RatingName, key.m_RatingName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Rating, key.m_Rating)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_4_Data0 * n1, GetSStream_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RatingName, (*n2).m_RatingName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Rating, (*n2).m_Rating)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<GetSStream_4_Data0, GetSStream_4_Data0, UID_Process_9>
    {
    public:

        static bool FilterTransformRow(GetSStream_4_Data0 & input, GetSStream_4_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV5_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<GetSStream_4_Data0, BinaryExtractPolicy<GetSStream_4_Data0>, BinaryInputStream> ExtractorType1_SV5_Combine;        
        unique_ptr<ExtractorType1_SV5_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV5_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Extract_out0);
        ExtractorType1_SV5_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<GetSStream_4_Data0, BinaryExtractPolicy<GetSStream_4_Data0>, BinaryInputStream> ExtractorType2_SV5_Combine;        
        unique_ptr<ExtractorType2_SV5_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV5_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV4_Extract_out0);
        ExtractorType2_SV5_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;
        // Construct combined operator and initialize it
        unique_ptr<OperatorDelegate<GetSStream_4_Data0>> delegate_E80A65A22A55629F_array[2];
        delegate_E80A65A22A55629F_array[0].reset(new OperatorDelegate<GetSStream_4_Data0>(extractor_0));
        delegate_E80A65A22A55629F_array[1].reset(new OperatorDelegate<GetSStream_4_Data0>(extractor_1));
        OperatorDelegate<GetSStream_4_Data0> ** delegate_E80A65A22A55629F = (OperatorDelegate<GetSStream_4_Data0> **)delegate_E80A65A22A55629F_array;
        // Define the type of the operator
        typedef Merger<OperatorDelegate<GetSStream_4_Data0>, GetSStream_4_Data0, ScopeLoserTree<OperatorDelegate<GetSStream_4_Data0>, GetSStream_4_Data0, UID_Aggregate_8>, UID_Aggregate_8> AggregateType_Aggregate_8;
        // Construct operator object and initialize it
        unique_ptr<AggregateType_Aggregate_8> aggregate_Aggregate_8_ptr(new AggregateType_Aggregate_8(delegate_E80A65A22A55629F + 0, 2, UID_Aggregate_8));
        AggregateType_Aggregate_8 * aggregate_Aggregate_8 = aggregate_Aggregate_8_ptr.get();
        ULONG aggregate_Aggregate_8_count = 1; 
        // Define stream aggregator type
        typedef StreamAggregator<AggregateType_Aggregate_8, GetSStream_4_Data0, GetSStream_4_Data0, UID_Process_9> StreamAggregatorType_Process_9;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_9> streamAggregator_Process_9_ptr (new StreamAggregatorType_Process_9(aggregate_Aggregate_8, false, UID_Process_9));
        StreamAggregatorType_Process_9 * streamAggregator_Process_9 = streamAggregator_Process_9_ptr.get();
        ULONG streamAggregator_Process_9_count = 1;
        // Define outputer type
        typedef Outputer<StreamAggregatorType_Process_9, GetSStream_4_Data0, BinaryOutputPolicy<GetSStream_4_Data0>, BinaryOutputStream, false> OutputerType3_SV5_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType3_SV5_Combine> outputer_SV5_Combine_out0_ptr(new OutputerType3_SV5_Combine(streamAggregator_Process_9, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV5_Combine_out0));
        OutputerType3_SV5_Combine * outputer_SV5_Combine_out0 = outputer_SV5_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV5_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            GetSStream_4_Data0 row;
            outputer_SV5_Combine_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV5_Combine_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV5_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV5_Combine
#pragma region SV6_Split
#if defined(COMPILE_SV6_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_4_Data0,UID_Process_10_0>
    {
    public:
        struct KeyStruct
        {
            FString m_RatingName;

            KeyStruct(GetSStream_4_Data0 & c) :
                m_RatingName(c.m_RatingName)
            {
            }

            KeyStruct(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<GetSStream_4_Data0&>(c).m_RatingName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RatingName(c.m_RatingName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RatingName(const_cast<KeyStruct&>(c).m_RatingName, alloc)
            {
            }

            KeyStruct() :
                m_RatingName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRatingName:\t" << row.m_RatingName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RatingName, key.m_RatingName)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_4_Data0 * n1, GetSStream_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RatingName, (*n2).m_RatingName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_4_Data0,UID_Process_10_1>
    {
    public:
        struct KeyStruct
        {
            float m_Rating;

            KeyStruct(GetSStream_4_Data0 & c) :
                m_Rating(c.m_Rating)
            {
            }

            KeyStruct(const GetSStream_4_Data0 & c, IncrementalAllocator * alloc) :
                m_Rating(const_cast<GetSStream_4_Data0&>(c).m_Rating)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Rating(c.m_Rating)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Rating(const_cast<KeyStruct&>(c).m_Rating)
            {
            }

            KeyStruct() :
                m_Rating(0.0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRating:\t" << row.m_Rating << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Rating, key.m_Rating)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_4_Data0 * n1, GetSStream_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Rating, (*n2).m_Rating)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<GetSStream_4_Data0, Process_10_Data0, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(GetSStream_4_Data0 & input, Process_10_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SequenceProjectPolicy<typename GetSStream_4_Data0, typename Process_10_Data0, UID_Process_10> 
    {
    public:
        typedef KeyComparePolicy<GetSStream_4_Data0, UID_Process_10_0> GroupKeyPolicy;
        typedef KeyComparePolicy<GetSStream_4_Data0, UID_Process_10_1> ValueKeyPolicy;

        void SetVertexID(__int64 vertexID)
        {
            m_vertexID = vertexID;
        }

        // Advance all sequence functions to the next row, and copy their values to the output.
        //
        void AdvanceAndOutput(bool isNewGroup, bool isNewOrder, Process_10_Data0 &output, GetSStream_4_Data0 &input)
        {
                output.m_Score = _function0.Step(isNewGroup);
                output.m_SeriesName = input.m_SeriesName;
        }

    private:
        __int64 m_vertexID;
            SequenceFunction_ROW_NUMBER _function0;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<SV6_Split_out1, UID_Output_32>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, SV6_Split_out1 & row)
        {
            if (!row.m_SeriesName.IsNull())
            {
                output->Write<FString,true>(row.m_SeriesName);
            }
            output->WriteDelimiter();
            if (!row.m_Score.IsNull())
            {
                output->Write<__int64,false>(row.m_Score);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("SeriesName", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Score", 5));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_11_0 [] =
    {
        "Score",
        "SeriesName",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_10_Data0, SV6_Split_out0, UID_Split_11_0>
    {
    public:

        void Init(ManagedRow<Process_10_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_10_Data0 & input, SV6_Split_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_Score = input.m_Score;
                    exceptionIndex++;
                    output.m_SeriesName1 = input.m_SeriesName;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_11_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_11_1 [] =
    {
        "SeriesName",
        "Score",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_10_Data0, SV6_Split_out1, UID_Split_11_1>
    {
    public:

        void Init(ManagedRow<Process_10_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_10_Data0 & input, SV6_Split_out1 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    output.m_Score = input.m_Score;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_11_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename Process_10_Data0, UID_Split_11>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<Process_10_Data0> SplitOutputType_Split_11_2;
        SplitOutputType_Split_11_2 splitOutputter_Split_11_2;

        typedef SplitOutputter<SplitOutputType_Split_11_2, SV6_Split_out1, TextOutputPolicy<SV6_Split_out1, UID_Output_32>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_11_1> SplitOutputType_Split_11_1;
        SplitOutputType_Split_11_1 splitOutputter_Split_11_1;


        typedef SplitOutputter<SplitOutputType_Split_11_1, SV6_Split_out0, BinaryOutputPolicy<SV6_Split_out0>, BinaryOutputStream, UID_Split_11_0> SplitOutputType_Split_11_0;
        SplitOutputType_Split_11_0 splitOutputter_Split_11_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_11_1(&splitOutputter_Split_11_2, outputFiles[1].outputFileName, outputFiles[1].isFirstOutputPiece, outputBufSize, outputBufCnt, UID_SV6_Split_out1, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16)),
            splitOutputter_Split_11_0(&splitOutputter_Split_11_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV6_Split_out0)
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_11_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_11_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_11_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_11_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_11_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_11_0.OutputHeader();
        }

        void ProcessRow(Process_10_Data0 & input)
        {
            splitOutputter_Split_11_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_11_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_11_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_11_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_11_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_11_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_11_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV6_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<GetSStream_4_Data0, BinaryExtractPolicy<GetSStream_4_Data0>, BinaryInputStream> ExtractorType1_SV6_Split;        
        unique_ptr<ExtractorType1_SV6_Split> extractor_0_ptr= make_unique<ExtractorType1_SV6_Split>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV5_Combine_out0);
        ExtractorType1_SV6_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define the type of the operator
        typedef SequenceProject<ExtractorType1_SV6_Split, GetSStream_4_Data0, Process_10_Data0, UID_Process_10> SequenceProjectType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<SequenceProjectType_Process_10> sequence_project_Process_10_ptr (new SequenceProjectType_Process_10(extractor_0, UID_Process_10));
        SequenceProjectType_Process_10 * sequence_project_Process_10 = sequence_project_Process_10_ptr.get();
        ULONG sequence_project_Process_10_count = 1;
        __int64 sequence_project_vertexID_Process_10 = vertexExecutionInfo->m_vertexId;
        sequence_project_Process_10->SetVertexID(sequence_project_vertexID_Process_10);
        // Define splitter type

        typedef Splitter<SequenceProjectType_Process_10, Process_10_Data0, false, UID_Split_11> SplitterType_Split_11;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_11> splitter_Split_11_ptr (new SplitterType_Split_11(sequence_project_Process_10, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_11));
        SplitterType_Split_11 * splitter_Split_11 = splitter_Split_11_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_11->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_11.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_11->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_10_Data0 row;
            splitter_Split_11->GetNextRow(row);

            // Close operator chain
            splitter_Split_11->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_11->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV6_Split
#pragma region SV7_Process
#if defined(COMPILE_SV7_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<GetSStream_4_Data0, UID_SV7_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, GetSStream_4_Data0 & row)
        {
            if (!row.m_SeriesName.IsNull())
            {
                output->Write<FString,true>(row.m_SeriesName);
            }
            output->WriteDelimiter();
            if (!row.m_RatingName.IsNull())
            {
                output->Write<FString,true>(row.m_RatingName);
            }
            output->WriteDelimiter();
            output->Write<float,false>(row.m_Rating);
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("SeriesName", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RatingName", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Rating", 6));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV7_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<GetSStream_4_Data0, BinaryExtractPolicy<GetSStream_4_Data0>, BinaryInputStream> ExtractorType1_SV7_Process;        
        unique_ptr<ExtractorType1_SV7_Process> extractor_0_ptr= make_unique<ExtractorType1_SV7_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV5_Combine_out0);
        ExtractorType1_SV7_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define outputer type
        typedef Outputer<ExtractorType1_SV7_Process, GetSStream_4_Data0, TextOutputPolicy<GetSStream_4_Data0, UID_SV7_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV7_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV7_Process> outputer_SV7_Process_out0_ptr(new OutputerType2_SV7_Process(extractor_0, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV7_Process_out0));
        OutputerType2_SV7_Process * outputer_SV7_Process_out0 = outputer_SV7_Process_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV7_Process_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            GetSStream_4_Data0 row;
            outputer_SV7_Process_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV7_Process_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV7_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV7_Process
#pragma region SV8_Extract_Split
#if defined(COMPILE_SV8_EXTRACT_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SStreamV3ExtractPolicy<GetSStream_13_Data0, UID_GetSStream_13, NullSchema>
    {
    public:
        typedef NullSchema CorrelatedParameters;
        typedef bool (*PredFn)(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, CorrelatedParameters* params);

    public:
        typedef GetSStream_13_Data0 DataRowSchema;
        typedef PartitionSchema_GetSStream_0 PartitionSchema;
        typedef PartitionKeySchema_GetSStream_13 DataKeySchema;
        typedef RowComparePolicy<DataKeySchema, DataKeySchema, UID_GetSStream_13> DataKeyComparePolicy;

        static const PartitioningType m_partitioning = HashPartition;
        static const bool m_residualFilterForKeyRange = false;
        static const bool m_residualFilterForRefinedHash = false;
        static const int m_numberOfPartitionAfterRefinedHash = 0;
        static const bool m_keyRangeSeek = false;
        static const bool m_truncatedRangeKey = false;
        static const bool m_generateMetadata = false;
        static const UINT m_numOfBuffers = 4;
        static const bool m_hasCorrelatedSchema = false;

        // FailFastSStreamRead ignores the maxUnavailability value and forces a fast failure in case of store errors
        static const bool m_skipUnavailable = true/*0*/;

        static const string& DataSchemaString()
        {
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>TweetID</Name>\r\n      <Type>long</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>CreatedAt</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>UserName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>ScreenName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Tweet</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RetweetCount</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FavoriteCount</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Sentiment</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>SeriesName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n  </Columns>\r\n</Schema>" });
            return *spDataSchemaString;
        }

        static BYTE* DataColumnSizes()
        {
            static BYTE sizes[] = 
            {
                8,
                0,
                0,
                0,
                0,
                4,
                4,
                0,
                0,
            };

            return sizes;
        }
        static const UINT m_dataColumnSizesCnt = 9;

        static BYTE* IndexColumnSizes()
        {
            static BYTE sizes[] = 
                {
                // Low key
                8,
                // Hi Key
                8,
                8, // BlockOffset
                8, // BlockLength
                4, // RowCount
                };

            return sizes;
        }
        static const UINT m_indexColumnSizesCnt = 2 * 1 + 3;

        static UINT* SortKeys()
        {
            static UINT keys[] = 
                {
                0,
                };
            return keys;
        }
        static const UINT m_sortKeysCnt = 1;

        static const bool m_descending = false;


        static bool Deserialize(SSLibV3::ColumnIterator* iters, DataRowSchema & row, IncrementalAllocator* alloc, const BYTE* blockEnd, UINT32 defaultDistributionId, UINT64 defaultRowId)
        {
            SCOPE_ASSERT(iters[4].HasData(blockEnd));
            if (iters[4].IsNull())
            {
                row.m_Tweet.SetNull();
            }
            else
            {
                row.m_Tweet.CopyFromNotNull((FString::PointerType)iters[4].DataRaw(), (int)iters[4].Length(), alloc);
            }
            SCOPE_ASSERT(iters[5].HasData(blockEnd));
            row.m_RetweetCount = iters[5].Data<int>();
            SCOPE_ASSERT(iters[7].HasData(blockEnd));
            if (iters[7].IsNull())
            {
                row.m_Sentiment.SetNull();
            }
            else
            {
                row.m_Sentiment.CopyFromNotNull((FString::PointerType)iters[7].DataRaw(), (int)iters[7].Length(), alloc);
            }
            SCOPE_ASSERT(iters[8].HasData(blockEnd));
            if (iters[8].IsNull())
            {
                row.m_SeriesName.SetNull();
            }
            else
            {
                row.m_SeriesName.CopyFromNotNull((FString::PointerType)iters[8].DataRaw(), (int)iters[8].Length(), alloc);
            }
            return true;
        }

        static void SkipRow(SSLibV3::ColumnIterator* iters)
        {
            if (iters[4].IsNull())
            {
                iters[4].IncrementNull();
            }
            else
            {
                iters[4].IncrementVariable();
            }
            iters[5].IncrementFixedNotNullable<4>();
            if (iters[7].IsNull())
            {
                iters[7].IncrementNull();
            }
            else
            {
                iters[7].IncrementVariable();
            }
            if (iters[8].IsNull())
            {
                iters[8].IncrementNull();
            }
            else
            {
                iters[8].IncrementVariable();
            }
            //// Section of the Partition Key iterators skip.
            iters[0].IncrementFixedNotNullable<8>();
            //// Section of the System column iterators skip.
        }

        static PredFn* PredicatesLow() { return nullptr; }
        static PredFn* PredicatesHi() { return nullptr; }
        static const UINT m_predicateCnt = 0;
        static bool LowIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        // PredicateRefinedHashResidual
        static bool PredicateRefinedHashResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, int partitionIndex, int numberOfPartitions)
        {
            return true;
 
        }
    };


#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_13_Data0,UID_Process_16>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;
            FString m_Tweet;
            int m_RetweetCount;
            FString m_Sentiment;

            KeyStruct(GetSStream_13_Data0 & c) :
                m_SeriesName(c.m_SeriesName),
                m_Tweet(c.m_Tweet),
                m_RetweetCount(c.m_RetweetCount),
                m_Sentiment(c.m_Sentiment)
            {
            }

            KeyStruct(const GetSStream_13_Data0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<GetSStream_13_Data0&>(c).m_SeriesName, alloc),
                m_Tweet(const_cast<GetSStream_13_Data0&>(c).m_Tweet, alloc),
                m_RetweetCount(const_cast<GetSStream_13_Data0&>(c).m_RetweetCount),
                m_Sentiment(const_cast<GetSStream_13_Data0&>(c).m_Sentiment, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName),
                m_Tweet(c.m_Tweet),
                m_RetweetCount(c.m_RetweetCount),
                m_Sentiment(c.m_Sentiment)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc),
                m_Tweet(const_cast<KeyStruct&>(c).m_Tweet, alloc),
                m_RetweetCount(const_cast<KeyStruct&>(c).m_RetweetCount),
                m_Sentiment(const_cast<KeyStruct&>(c).m_Sentiment, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName(),
                m_Tweet(),
                m_RetweetCount(0),
                m_Sentiment()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
                os << "\tTweet:\t" << row.m_Tweet << endl;
                os << "\tRetweetCount:\t" << row.m_RetweetCount << endl;
                os << "\tSentiment:\t" << row.m_Sentiment << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_13_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Tweet, key.m_Tweet)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_RetweetCount, key.m_RetweetCount)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Sentiment, key.m_Sentiment)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_13_Data0 * n1, GetSStream_13_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Tweet, (*n2).m_Tweet)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_RetweetCount, (*n2).m_RetweetCount)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Sentiment, (*n2).m_Sentiment)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename GetSStream_13_Data0, typename GetSStream_13_Data0, UID_Process_16> 
    {
    public:
        
        AggregationPolicy()
            :
            m_SeriesName_SeriesName_FIRST("FIRST_SeriesName_SeriesName"),
            m_Tweet_Tweet_FIRST("FIRST_Tweet_Tweet"),
            m_RetweetCount_RetweetCount_FIRST("FIRST_RetweetCount_RetweetCount"),
            m_Sentiment_Sentiment_FIRST("FIRST_Sentiment_Sentiment")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<GetSStream_13_Data0,UID_Process_16>::KeyType * input, GetSStream_13_Data0 * output)
        {
            (*output).m_SeriesName = (*input).m_SeriesName;
            (*output).m_Tweet = (*input).m_Tweet;
            (*output).m_RetweetCount = (*input).m_RetweetCount;
            (*output).m_Sentiment = (*input).m_Sentiment;
        }

        // process input row, called for each row in key range
        void AddRow(GetSStream_13_Data0 * input)
        {
            m_SeriesName_SeriesName_FIRST.Add((*input).m_SeriesName);
            m_Tweet_Tweet_FIRST.Add((*input).m_Tweet);
            m_RetweetCount_RetweetCount_FIRST.Add((*input).m_RetweetCount);
            m_Sentiment_Sentiment_FIRST.Add((*input).m_Sentiment);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(GetSStream_13_Data0 * output)
        {
            m_SeriesName_SeriesName_FIRST.Aggregate(&(*output).m_SeriesName);
            m_Tweet_Tweet_FIRST.Aggregate(&(*output).m_Tweet);
            m_RetweetCount_RetweetCount_FIRST.Aggregate(&(*output).m_RetweetCount);
            m_Sentiment_Sentiment_FIRST.Aggregate(&(*output).m_Sentiment);
        }

        // write aggregated data
        void GetValue(GetSStream_13_Data0 * output)
        {
            m_SeriesName_SeriesName_FIRST.GetValue(&(*output).m_SeriesName);
            m_Tweet_Tweet_FIRST.GetValue(&(*output).m_Tweet);
            m_RetweetCount_RetweetCount_FIRST.GetValue(&(*output).m_RetweetCount);
            m_Sentiment_Sentiment_FIRST.GetValue(&(*output).m_Sentiment);
        }

        // reset for new key
        void Reset()
        {
            m_SeriesName_SeriesName_FIRST.Reset();
            m_Tweet_Tweet_FIRST.Reset();
            m_RetweetCount_RetweetCount_FIRST.Reset();
            m_Sentiment_Sentiment_FIRST.Reset();
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root)
        {
            m_SeriesName_SeriesName_FIRST.WriteRuntimeStats(root);
            m_Tweet_Tweet_FIRST.WriteRuntimeStats(root);
            m_RetweetCount_RetweetCount_FIRST.WriteRuntimeStats(root);
            m_Sentiment_Sentiment_FIRST.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_SeriesName_SeriesName_FIRST.GetOperatorRequirements());
            result.Add(m_Tweet_Tweet_FIRST.GetOperatorRequirements());
            result.Add(m_RetweetCount_RetweetCount_FIRST.GetOperatorRequirements());
            result.Add(m_Sentiment_Sentiment_FIRST.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<FString> m_SeriesName_SeriesName_FIRST;
        Aggregate_FIRST<FString> m_Tweet_Tweet_FIRST;
        Aggregate_FIRST<int> m_RetweetCount_RetweetCount_FIRST;
        Aggregate_FIRST<FString> m_Sentiment_Sentiment_FIRST;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<GetSStream_13_Data0,UID_Process_15>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;
            FString m_Tweet;
            int m_RetweetCount;
            FString m_Sentiment;

            KeyStruct(GetSStream_13_Data0 & c) :
                m_SeriesName(c.m_SeriesName),
                m_Tweet(c.m_Tweet),
                m_RetweetCount(c.m_RetweetCount),
                m_Sentiment(c.m_Sentiment)
            {
            }

            KeyStruct(const GetSStream_13_Data0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<GetSStream_13_Data0&>(c).m_SeriesName, alloc),
                m_Tweet(const_cast<GetSStream_13_Data0&>(c).m_Tweet, alloc),
                m_RetweetCount(const_cast<GetSStream_13_Data0&>(c).m_RetweetCount),
                m_Sentiment(const_cast<GetSStream_13_Data0&>(c).m_Sentiment, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName),
                m_Tweet(c.m_Tweet),
                m_RetweetCount(c.m_RetweetCount),
                m_Sentiment(c.m_Sentiment)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc),
                m_Tweet(const_cast<KeyStruct&>(c).m_Tweet, alloc),
                m_RetweetCount(const_cast<KeyStruct&>(c).m_RetweetCount),
                m_Sentiment(const_cast<KeyStruct&>(c).m_Sentiment, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName(),
                m_Tweet(),
                m_RetweetCount(0),
                m_Sentiment()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
                os << "\tTweet:\t" << row.m_Tweet << endl;
                os << "\tRetweetCount:\t" << row.m_RetweetCount << endl;
                os << "\tSentiment:\t" << row.m_Sentiment << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(GetSStream_13_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Tweet, key.m_Tweet)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_RetweetCount, key.m_RetweetCount)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Sentiment, key.m_Sentiment)) != 0)
                return r;
            return r;
        }

        static int Compare(GetSStream_13_Data0 * n1, GetSStream_13_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Tweet, (*n2).m_Tweet)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_RetweetCount, (*n2).m_RetweetCount)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Sentiment, (*n2).m_Sentiment)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(GetSStream_13_Data0 * p, int depth)
        {
            if (depth < 1 && (*p).m_SeriesName.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_SeriesName.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_SeriesName.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_SeriesName.buffer()[depth]));
            }

            depth -= (int) ((*p).m_SeriesName.size() + 1);

            if (depth < 1 && (*p).m_Tweet.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_Tweet.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_Tweet.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_Tweet.buffer()[depth]));
            }

            depth -= (int) ((*p).m_Tweet.size() + 1);

            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_RetweetCount);
            }

            --depth;
            if (depth < 1 && (*p).m_Sentiment.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_Sentiment.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_Sentiment.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_Sentiment.buffer()[depth]));
            }

            depth -= (int) ((*p).m_Sentiment.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(GetSStream_13_Data0 * p, int depth)
        {
            depth -= (int) ((*p).m_SeriesName.size() + 1);
            if (depth < 0)
                return false;
            depth -= (int) ((*p).m_Tweet.size() + 1);
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            depth -= (int) ((*p).m_Sentiment.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_14 [] =
    {
        "SeriesName != \"Unknown\"",
        "Tweet",
        "RetweetCount",
        "Sentiment",
        "SeriesName",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_13_Data0, GetSStream_13_Data0, UID_Process_14>
    {
    public:

        static bool FilterTransformRow(GetSStream_13_Data0 & input, GetSStream_13_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_SeriesName != staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_Tweet = input.m_Tweet;
                    exceptionIndex++;
                    output.m_RetweetCount = input.m_RetweetCount;
                    exceptionIndex++;
                    output.m_Sentiment = input.m_Sentiment;
                    exceptionIndex++;
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_14[exceptionIndex]));
                }
}
        static FString staticconstant_0;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("Unknown", 7);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_13_Data0, GetSStream_13_Data0, UID_Process_14>::staticconstant_0;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<GetSStream_13_Data0, GetSStream_13_Data0, UID_Process_16>
    {
    public:

        static bool FilterTransformRow(GetSStream_13_Data0 & input, GetSStream_13_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<SV8_Extract_Split_out1, UID_Output_35>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, SV8_Extract_Split_out1 & row)
        {
            if (!row.m_SeriesName.IsNull())
            {
                output->Write<FString,true>(row.m_SeriesName);
            }
            output->WriteDelimiter();
            if (!row.m_Tweet.IsNull())
            {
                output->Write<FString,true>(row.m_Tweet);
            }
            output->WriteDelimiter();
            output->Write<int,false>(row.m_RetweetCount);
            output->WriteDelimiter();
            if (!row.m_Sentiment.IsNull())
            {
                output->Write<FString,true>(row.m_Sentiment);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("SeriesName", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Tweet", 5));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RetweetCount", 12));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Sentiment", 9));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_17_0 [] =
    {
        "SeriesName",
        "(long)(Tweet == null ? 0 : 1)",
        "(long?)(RetweetCount)",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_13_Data0, SV8_Extract_Split_out0, UID_Split_17_0>
    {
    public:

        void Init(ManagedRow<GetSStream_13_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(GetSStream_13_Data0 & input, SV8_Extract_Split_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    output.m_TweetCount = scope_cast<__int64>(((input.m_Tweet.IsNull() ? 0 : 1)));
                    exceptionIndex++;
                    output.m_RetweetCount = scope_cast<NativeNullable<__int64>>((input.m_RetweetCount));
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_17_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_17_1 [] =
    {
        "SeriesName",
        "Tweet",
        "RetweetCount",
        "Sentiment",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_13_Data0, SV8_Extract_Split_out1, UID_Split_17_1>
    {
    public:

        void Init(ManagedRow<GetSStream_13_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(GetSStream_13_Data0 & input, SV8_Extract_Split_out1 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    output.m_Tweet = input.m_Tweet;
                    exceptionIndex++;
                    output.m_RetweetCount = input.m_RetweetCount;
                    exceptionIndex++;
                    output.m_Sentiment = input.m_Sentiment;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_17_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename GetSStream_13_Data0, UID_Split_17>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<GetSStream_13_Data0> SplitOutputType_Split_17_2;
        SplitOutputType_Split_17_2 splitOutputter_Split_17_2;

        typedef SplitOutputter<SplitOutputType_Split_17_2, SV8_Extract_Split_out1, TextOutputPolicy<SV8_Extract_Split_out1, UID_Output_35>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_17_1> SplitOutputType_Split_17_1;
        SplitOutputType_Split_17_1 splitOutputter_Split_17_1;


        typedef SplitOutputter<SplitOutputType_Split_17_1, SV8_Extract_Split_out0, BinaryOutputPolicy<SV8_Extract_Split_out0>, BinaryOutputStream, UID_Split_17_0> SplitOutputType_Split_17_0;
        SplitOutputType_Split_17_0 splitOutputter_Split_17_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_17_1(&splitOutputter_Split_17_2, outputFiles[1].outputFileName, outputFiles[1].isFirstOutputPiece, outputBufSize, outputBufCnt, UID_SV8_Extract_Split_out1, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16)),
            splitOutputter_Split_17_0(&splitOutputter_Split_17_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV8_Extract_Split_out0)
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_17_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_17_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_17_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_17_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_17_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_17_0.OutputHeader();
        }

        void ProcessRow(GetSStream_13_Data0 & input)
        {
            splitOutputter_Split_17_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_17_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_17_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_17_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_17_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_17_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_17_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractor<GetSStream_13_Data0, SStreamV3ExtractPolicy<GetSStream_13_Data0, UID_GetSStream_13, NullSchema>, UID_GetSStream_13, NullSchema, false> SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13;
    SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13 * CreateExtractor_SV8_Extract_Split_GetSStream_13(unique_ptr<SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13(13, "", UID_GetSStream_13));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV8_Extract_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        unique_ptr<SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13> extractor_0_ptr;
        SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13 * extractor_0 = CreateExtractor_SV8_Extract_Split_GetSStream_13(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV8_Extract_Split_GetSStream_13, GetSStream_13_Data0, GetSStream_13_Data0, UID_Process_14> FilterTransformerType_Process_14;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_14> filterTransformer_Process_14_ptr (new FilterTransformerType_Process_14(extractor_0, UID_Process_14));
        FilterTransformerType_Process_14 * filterTransformer_Process_14 = filterTransformer_Process_14_ptr.get();
        ULONG filterTransformer_Process_14_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<GetSStream_13_Data0>> delegate_filterTransformer_Process_14_ptr (new OperatorDelegate<GetSStream_13_Data0>(OperatorDelegate<GetSStream_13_Data0>::FromOperator(filterTransformer_Process_14)));
        OperatorDelegate<GetSStream_13_Data0> * delegate_filterTransformer_Process_14 = delegate_filterTransformer_Process_14_ptr.get();
        ULONG delegate_filterTransformer_Process_14_count = 1;
        // Define sorter type
        typedef Sorter<GetSStream_13_Data0> SorterType_Process_15;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_15> sorter_Process_15_ptr (new SorterType_Process_15(delegate_filterTransformer_Process_14, &MKQSort<GetSStream_13_Data0>::Sort<KeyComparePolicy<GetSStream_13_Data0, UID_Process_15>, (sizeof(GetSStream_13_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<GetSStream_13_Data0>::CreateDelegate<UID_Process_15>(), false, 5800722428 /*memoryQuota*/, UID_Process_15));
        SorterType_Process_15 * sorter_Process_15 = sorter_Process_15_ptr.get();
        ULONG sorter_Process_15_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_15, GetSStream_13_Data0, GetSStream_13_Data0, UID_Process_16> StreamAggregatorType_Process_16;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_16> streamAggregator_Process_16_ptr (new StreamAggregatorType_Process_16(sorter_Process_15, false, UID_Process_16));
        StreamAggregatorType_Process_16 * streamAggregator_Process_16 = streamAggregator_Process_16_ptr.get();
        ULONG streamAggregator_Process_16_count = 1;
        // Define splitter type

        typedef Splitter<StreamAggregatorType_Process_16, GetSStream_13_Data0, false, UID_Split_17> SplitterType_Split_17;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_17> splitter_Split_17_ptr (new SplitterType_Split_17(streamAggregator_Process_16, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_17));
        SplitterType_Split_17 * splitter_Split_17 = splitter_Split_17_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_17->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_17.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_17->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            GetSStream_13_Data0 row;
            splitter_Split_17->GetNextRow(row);

            // Close operator chain
            splitter_Split_17->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_17->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV8_Extract_Split
#pragma region SV9_Split
#if defined(COMPILE_SV9_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV8_Extract_Split_out0,UID_Process_18>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(SV8_Extract_Split_out0 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const SV8_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<SV8_Extract_Split_out0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV8_Extract_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(SV8_Extract_Split_out0 * n1, SV8_Extract_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename SV8_Extract_Split_out0, typename SV8_Extract_Split_out0, UID_Process_18> 
    {
    public:
        
        AggregationPolicy()
            :
            m_SeriesName_SeriesName_FIRST("FIRST_SeriesName_SeriesName"),
            m_TweetCount_TweetCount_UNCHECKED_SUM("UNCHECKED_SUM_TweetCount_TweetCount"),
            m_RetweetCount_RetweetCount_SUM("SUM_RetweetCount_RetweetCount")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<SV8_Extract_Split_out0,UID_Process_18>::KeyType * input, SV8_Extract_Split_out0 * output)
        {
            (*output).m_SeriesName = (*input).m_SeriesName;
        }

        // process input row, called for each row in key range
        void AddRow(SV8_Extract_Split_out0 * input)
        {
            m_SeriesName_SeriesName_FIRST.Add((*input).m_SeriesName);
            m_TweetCount_TweetCount_UNCHECKED_SUM.Add((*input).m_TweetCount);
            m_RetweetCount_RetweetCount_SUM.Add((*input).m_RetweetCount);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(SV8_Extract_Split_out0 * output)
        {
            m_SeriesName_SeriesName_FIRST.Aggregate(&(*output).m_SeriesName);
            m_TweetCount_TweetCount_UNCHECKED_SUM.Aggregate(&(*output).m_TweetCount);
            m_RetweetCount_RetweetCount_SUM.Aggregate(&(*output).m_RetweetCount);
        }

        // write aggregated data
        void GetValue(SV8_Extract_Split_out0 * output)
        {
            m_SeriesName_SeriesName_FIRST.GetValue(&(*output).m_SeriesName);
            m_TweetCount_TweetCount_UNCHECKED_SUM.GetValue(&(*output).m_TweetCount);
            m_RetweetCount_RetweetCount_SUM.GetValue(&(*output).m_RetweetCount);
        }

        // reset for new key
        void Reset()
        {
            m_SeriesName_SeriesName_FIRST.Reset();
            m_TweetCount_TweetCount_UNCHECKED_SUM.Reset();
            m_RetweetCount_RetweetCount_SUM.Reset();
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root)
        {
            m_SeriesName_SeriesName_FIRST.WriteRuntimeStats(root);
            m_TweetCount_TweetCount_UNCHECKED_SUM.WriteRuntimeStats(root);
            m_RetweetCount_RetweetCount_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_SeriesName_SeriesName_FIRST.GetOperatorRequirements());
            result.Add(m_TweetCount_TweetCount_UNCHECKED_SUM.GetOperatorRequirements());
            result.Add(m_RetweetCount_RetweetCount_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<FString> m_SeriesName_SeriesName_FIRST;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_TweetCount_TweetCount_UNCHECKED_SUM;
        Aggregate_SUM<NativeNullable<__int64>,NativeNullable<__int64>> m_RetweetCount_RetweetCount_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV8_Extract_Split_out0,UID_Process_19>
    {
    public:
        struct KeyStruct
        {
            __int64 m_TweetCount;

            KeyStruct(SV8_Extract_Split_out0 & c) :
                m_TweetCount(c.m_TweetCount)
            {
            }

            KeyStruct(const SV8_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
                m_TweetCount(const_cast<SV8_Extract_Split_out0&>(c).m_TweetCount)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_TweetCount(c.m_TweetCount)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_TweetCount(const_cast<KeyStruct&>(c).m_TweetCount)
            {
            }

            KeyStruct() :
                m_TweetCount(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tTweetCount:\t" << row.m_TweetCount << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV8_Extract_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_TweetCount, key.m_TweetCount)) != 0)
                return r;
            return r;
        }

        static int Compare(SV8_Extract_Split_out0 * n1, SV8_Extract_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_TweetCount, (*n2).m_TweetCount)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV8_Extract_Split_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_TweetCount);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV8_Extract_Split_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_Process_22>
    {
    public:
        struct KeyStruct
        {
            NativeNullable<__int64> m_RetweetCount;

            KeyStruct(Process_21_Data0 & c) :
                m_RetweetCount(c.m_RetweetCount)
            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
                m_RetweetCount(const_cast<Process_21_Data0&>(c).m_RetweetCount)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RetweetCount(c.m_RetweetCount)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RetweetCount(const_cast<KeyStruct&>(c).m_RetweetCount)
            {
            }

            KeyStruct() :
                m_RetweetCount()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRetweetCount:\t" << row.m_RetweetCount << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RetweetCount, key.m_RetweetCount)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RetweetCount, (*n2).m_RetweetCount)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_21_Data0 * p, int depth)
        {

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_21_Data0 * p, int depth)
        {
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<SV8_Extract_Split_out0, SV8_Extract_Split_out0, UID_Process_18>
    {
    public:

        static bool FilterTransformRow(SV8_Extract_Split_out0 & input, SV8_Extract_Split_out0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_20 [] =
    {
        "SeriesName",
        "RetweetCount",
        "(long?)TweetCount",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<SV8_Extract_Split_out0, Process_20_Data0, UID_Process_20>
    {
    public:

        static bool FilterTransformRow(SV8_Extract_Split_out0 & input, Process_20_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    output.m_RetweetCount = input.m_RetweetCount;
                    exceptionIndex++;
                    output.m_TweetCount = scope_cast<NativeNullable<__int64>>(input.m_TweetCount);
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_20[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_20_Data0,UID_Process_21_0>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(Process_20_Data0 & c) 

            {
            }

            KeyStruct(const Process_20_Data0 & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct(KeyStruct & c) 

            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct() 

            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_20_Data0 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(Process_20_Data0 * n1, Process_20_Data0 * n2)
        {
            int r = 0;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_20_Data0,UID_Process_21_1>
    {
    public:
        struct KeyStruct
        {
            NativeNullable<__int64> m_TweetCount;

            KeyStruct(Process_20_Data0 & c) :
                m_TweetCount(c.m_TweetCount)
            {
            }

            KeyStruct(const Process_20_Data0 & c, IncrementalAllocator * alloc) :
                m_TweetCount(const_cast<Process_20_Data0&>(c).m_TweetCount)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_TweetCount(c.m_TweetCount)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_TweetCount(const_cast<KeyStruct&>(c).m_TweetCount)
            {
            }

            KeyStruct() :
                m_TweetCount()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tTweetCount:\t" << row.m_TweetCount << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_20_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_TweetCount, key.m_TweetCount)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_20_Data0 * n1, Process_20_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_TweetCount, (*n2).m_TweetCount)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_20_Data0, Process_21_Data0, UID_Process_21>
    {
    public:

        static bool FilterTransformRow(Process_20_Data0 & input, Process_21_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SequenceProjectPolicy<typename Process_20_Data0, typename Process_21_Data0, UID_Process_21> 
    {
    public:
        typedef KeyComparePolicy<Process_20_Data0, UID_Process_21_0> GroupKeyPolicy;
        typedef KeyComparePolicy<Process_20_Data0, UID_Process_21_1> ValueKeyPolicy;

        void SetVertexID(__int64 vertexID)
        {
            m_vertexID = vertexID;
        }

        // Advance all sequence functions to the next row, and copy their values to the output.
        //
        void AdvanceAndOutput(bool isNewGroup, bool isNewOrder, Process_21_Data0 &output, Process_20_Data0 &input)
        {
                output.m_TweetScore = _function0.Step(isNewGroup);
                output.m_SeriesName = input.m_SeriesName;
                output.m_RetweetCount = input.m_RetweetCount;
        }

    private:
        __int64 m_vertexID;
            SequenceFunction_ROW_NUMBER _function0;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_Process_23_0>
    {
    public:
        struct KeyStruct
        {

            KeyStruct(Process_21_Data0 & c) 

            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct(KeyStruct & c) 

            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) 

            {
            }

            KeyStruct() 

            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_Process_23_1>
    {
    public:
        struct KeyStruct
        {
            NativeNullable<__int64> m_RetweetCount;

            KeyStruct(Process_21_Data0 & c) :
                m_RetweetCount(c.m_RetweetCount)
            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
                m_RetweetCount(const_cast<Process_21_Data0&>(c).m_RetweetCount)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RetweetCount(c.m_RetweetCount)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RetweetCount(const_cast<KeyStruct&>(c).m_RetweetCount)
            {
            }

            KeyStruct() :
                m_RetweetCount()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tRetweetCount:\t" << row.m_RetweetCount << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RetweetCount, key.m_RetweetCount)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RetweetCount, (*n2).m_RetweetCount)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_21_Data0, Process_23_Data0, UID_Process_23>
    {
    public:

        static bool FilterTransformRow(Process_21_Data0 & input, Process_23_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SequenceProjectPolicy<typename Process_21_Data0, typename Process_23_Data0, UID_Process_23> 
    {
    public:
        typedef KeyComparePolicy<Process_21_Data0, UID_Process_23_0> GroupKeyPolicy;
        typedef KeyComparePolicy<Process_21_Data0, UID_Process_23_1> ValueKeyPolicy;

        void SetVertexID(__int64 vertexID)
        {
            m_vertexID = vertexID;
        }

        // Advance all sequence functions to the next row, and copy their values to the output.
        //
        void AdvanceAndOutput(bool isNewGroup, bool isNewOrder, Process_23_Data0 &output, Process_21_Data0 &input)
        {
                output.m_RetweetScore = _function0.Step(isNewGroup);
                output.m_SeriesName = input.m_SeriesName;
                output.m_TweetScore = input.m_TweetScore;
        }

    private:
        __int64 m_vertexID;
            SequenceFunction_ROW_NUMBER _function0;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<SV9_Split_out1, UID_Output_33>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, SV9_Split_out1 & row)
        {
            if (!row.m_SeriesName.IsNull())
            {
                output->Write<FString,true>(row.m_SeriesName);
            }
            output->WriteDelimiter();
            if (!row.m_TweetScore.IsNull())
            {
                output->Write<__int64,false>(row.m_TweetScore);
            }
            output->WriteDelimiter();
            if (!row.m_RetweetScore.IsNull())
            {
                output->Write<__int64,false>(row.m_RetweetScore);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("SeriesName", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("TweetScore", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RetweetScore", 12));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_24_0 [] =
    {
        "TweetScore",
        "RetweetScore",
        "SeriesName",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_23_Data0, SV9_Split_out0, UID_Split_24_0>
    {
    public:

        void Init(ManagedRow<Process_23_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_23_Data0 & input, SV9_Split_out0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_TweetScore = input.m_TweetScore;
                    exceptionIndex++;
                    output.m_RetweetScore = input.m_RetweetScore;
                    exceptionIndex++;
                    output.m_SeriesName2 = input.m_SeriesName;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_24_0[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_24_1 [] =
    {
        "SeriesName",
        "TweetScore",
        "RetweetScore",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_23_Data0, SV9_Split_out1, UID_Split_24_1>
    {
    public:

        void Init(ManagedRow<Process_23_Data0> *)
        {
            // Nothing to do
        }
        static bool FilterTransformRow(Process_23_Data0 & input, SV9_Split_out1 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    output.m_TweetScore = input.m_TweetScore;
                    exceptionIndex++;
                    output.m_RetweetScore = input.m_RetweetScore;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Split_24_1[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename Process_23_Data0, UID_Split_24>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<Process_23_Data0> SplitOutputType_Split_24_2;
        SplitOutputType_Split_24_2 splitOutputter_Split_24_2;

        typedef SplitOutputter<SplitOutputType_Split_24_2, SV9_Split_out1, TextOutputPolicy<SV9_Split_out1, UID_Output_33>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, UID_Split_24_1> SplitOutputType_Split_24_1;
        SplitOutputType_Split_24_1 splitOutputter_Split_24_1;


        typedef SplitOutputter<SplitOutputType_Split_24_1, SV9_Split_out0, BinaryOutputPolicy<SV9_Split_out0>, BinaryOutputStream, UID_Split_24_0> SplitOutputType_Split_24_0;
        SplitOutputType_Split_24_0 splitOutputter_Split_24_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_24_1(&splitOutputter_Split_24_2, outputFiles[1].outputFileName, outputFiles[1].isFirstOutputPiece, outputBufSize, outputBufCnt, UID_SV9_Split_out1, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16)),
            splitOutputter_Split_24_0(&splitOutputter_Split_24_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV9_Split_out0)
        {
        }

        void SetSequenceNumber(int sequenceNumber)
        {
            splitOutputter_Split_24_1.SetSequenceNumber(sequenceNumber);
            splitOutputter_Split_24_0.SetSequenceNumber(sequenceNumber);
        }

        void Init()
        {
            splitOutputter_Split_24_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_24_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_24_0.ProcessMetadata(metadata);
        }

        void OutputHeader()
        {
            splitOutputter_Split_24_0.OutputHeader();
        }

        void ProcessRow(Process_23_Data0 & input)
        {
            splitOutputter_Split_24_0.ProcessRow(input);
        }

        __declspec(noinline)
		void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_24_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_24_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_24_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, Configuration::GetGlobal().GetMaxOnDiskRowSize(), m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_24_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_24_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_24_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV9_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV8_Extract_Split_out0, BinaryExtractPolicy<SV8_Extract_Split_out0>, BinaryInputStream> ExtractorType1_SV9_Split;        
        unique_ptr<ExtractorType1_SV9_Split> extractor_0_ptr= make_unique<ExtractorType1_SV9_Split>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV8_Extract_Split_out0);
        ExtractorType1_SV9_Split * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<ExtractorType1_SV9_Split, SV8_Extract_Split_out0, SV8_Extract_Split_out0, UID_Process_18> StreamAggregatorType_Process_18;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_18> streamAggregator_Process_18_ptr (new StreamAggregatorType_Process_18(extractor_0, false, UID_Process_18));
        StreamAggregatorType_Process_18 * streamAggregator_Process_18 = streamAggregator_Process_18_ptr.get();
        ULONG streamAggregator_Process_18_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV8_Extract_Split_out0>> delegate_streamAggregator_Process_18_ptr (new OperatorDelegate<SV8_Extract_Split_out0>(OperatorDelegate<SV8_Extract_Split_out0>::FromOperator(streamAggregator_Process_18)));
        OperatorDelegate<SV8_Extract_Split_out0> * delegate_streamAggregator_Process_18 = delegate_streamAggregator_Process_18_ptr.get();
        ULONG delegate_streamAggregator_Process_18_count = 1;
        // Define sorter type
        typedef Sorter<SV8_Extract_Split_out0> SorterType_Process_19;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_19> sorter_Process_19_ptr (new SorterType_Process_19(delegate_streamAggregator_Process_18, &StdSort<SV8_Extract_Split_out0>::Sort<KeyComparePolicy<SV8_Extract_Split_out0, UID_Process_19>, (sizeof(SV8_Extract_Split_out0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<SV8_Extract_Split_out0>::CreateDelegate<UID_Process_19>(), false, 2887778301 /*memoryQuota*/, UID_Process_19));
        SorterType_Process_19 * sorter_Process_19 = sorter_Process_19_ptr.get();
        ULONG sorter_Process_19_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_19, SV8_Extract_Split_out0, Process_20_Data0, UID_Process_20> FilterTransformerType_Process_20;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_20> filterTransformer_Process_20_ptr (new FilterTransformerType_Process_20(sorter_Process_19, UID_Process_20));
        FilterTransformerType_Process_20 * filterTransformer_Process_20 = filterTransformer_Process_20_ptr.get();
        ULONG filterTransformer_Process_20_count = 1;
        // Define the type of the operator
        typedef SequenceProject<FilterTransformerType_Process_20, Process_20_Data0, Process_21_Data0, UID_Process_21> SequenceProjectType_Process_21;
        // Construct operator and initialize it.
        unique_ptr<SequenceProjectType_Process_21> sequence_project_Process_21_ptr (new SequenceProjectType_Process_21(filterTransformer_Process_20, UID_Process_21));
        SequenceProjectType_Process_21 * sequence_project_Process_21 = sequence_project_Process_21_ptr.get();
        ULONG sequence_project_Process_21_count = 1;
        __int64 sequence_project_vertexID_Process_21 = vertexExecutionInfo->m_vertexId;
        sequence_project_Process_21->SetVertexID(sequence_project_vertexID_Process_21);
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_21_Data0>> delegate_sequence_project_Process_21_ptr (new OperatorDelegate<Process_21_Data0>(OperatorDelegate<Process_21_Data0>::FromOperator(sequence_project_Process_21)));
        OperatorDelegate<Process_21_Data0> * delegate_sequence_project_Process_21 = delegate_sequence_project_Process_21_ptr.get();
        ULONG delegate_sequence_project_Process_21_count = 1;
        // Define sorter type
        typedef Sorter<Process_21_Data0> SorterType_Process_22;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_22> sorter_Process_22_ptr (new SorterType_Process_22(delegate_sequence_project_Process_21, &StdSort<Process_21_Data0>::Sort<KeyComparePolicy<Process_21_Data0, UID_Process_22>, (sizeof(Process_21_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_21_Data0>::CreateDelegate<UID_Process_22>(), false, 2887778301 /*memoryQuota*/, UID_Process_22));
        SorterType_Process_22 * sorter_Process_22 = sorter_Process_22_ptr.get();
        ULONG sorter_Process_22_count = 1;
        // Define the type of the operator
        typedef SequenceProject<SorterType_Process_22, Process_21_Data0, Process_23_Data0, UID_Process_23> SequenceProjectType_Process_23;
        // Construct operator and initialize it.
        unique_ptr<SequenceProjectType_Process_23> sequence_project_Process_23_ptr (new SequenceProjectType_Process_23(sorter_Process_22, UID_Process_23));
        SequenceProjectType_Process_23 * sequence_project_Process_23 = sequence_project_Process_23_ptr.get();
        ULONG sequence_project_Process_23_count = 1;
        __int64 sequence_project_vertexID_Process_23 = vertexExecutionInfo->m_vertexId;
        sequence_project_Process_23->SetVertexID(sequence_project_vertexID_Process_23);
        // Define splitter type

        typedef Splitter<SequenceProjectType_Process_23, Process_23_Data0, false, UID_Split_24> SplitterType_Split_24;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_24> splitter_Split_24_ptr (new SplitterType_Split_24(sequence_project_Process_23, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_24));
        SplitterType_Split_24 * splitter_Split_24 = splitter_Split_24_ptr.get();

        if (argv != nullptr && argc > 0)
        {
            try
            {
                int sequenceNumber = GetSequenceNumber(argv, argc);
                splitter_Split_24->SetSequenceNumber(sequenceNumber);
            }
            catch(const RuntimeException&)
            {
                // Sequence number will remain 0 in splitter_Split_24.
            }
        }

        try
        {
            // Init operator chain
            splitter_Split_24->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_23_Data0 row;
            splitter_Split_24->GetNextRow(row);

            // Close operator chain
            splitter_Split_24->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_24->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV9_Split
#pragma region SV10_Combine
#if defined(COMPILE_SV10_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_27_Data0,UID_Process_28>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;
            NativeNullable<__int64> m_TweetScore;
            NativeNullable<__int64> m_RetweetScore;

            KeyStruct(Process_27_Data0 & c) :
                m_SeriesName(c.m_SeriesName),
                m_TweetScore(c.m_TweetScore),
                m_RetweetScore(c.m_RetweetScore)
            {
            }

            KeyStruct(const Process_27_Data0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<Process_27_Data0&>(c).m_SeriesName, alloc),
                m_TweetScore(const_cast<Process_27_Data0&>(c).m_TweetScore),
                m_RetweetScore(const_cast<Process_27_Data0&>(c).m_RetweetScore)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName),
                m_TweetScore(c.m_TweetScore),
                m_RetweetScore(c.m_RetweetScore)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc),
                m_TweetScore(const_cast<KeyStruct&>(c).m_TweetScore),
                m_RetweetScore(const_cast<KeyStruct&>(c).m_RetweetScore)
            {
            }

            KeyStruct() :
                m_SeriesName(),
                m_TweetScore(),
                m_RetweetScore()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
                os << "\tTweetScore:\t" << row.m_TweetScore << endl;
                os << "\tRetweetScore:\t" << row.m_RetweetScore << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_27_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_TweetScore, key.m_TweetScore)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_RetweetScore, key.m_RetweetScore)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_27_Data0 * n1, Process_27_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_TweetScore, (*n2).m_TweetScore)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_RetweetScore, (*n2).m_RetweetScore)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename Process_27_Data0, typename Process_27_Data0, UID_Process_28> 
    {
    public:
        
        AggregationPolicy()
            :
            m_SeriesName_SeriesName_FIRST("FIRST_SeriesName_SeriesName"),
            m_TweetScore_TweetScore_FIRST("FIRST_TweetScore_TweetScore"),
            m_RetweetScore_RetweetScore_FIRST("FIRST_RetweetScore_RetweetScore"),
            m_Expr_0_Expr_0_SUM("SUM_Expr_0_Expr_0"),
            m_Expr_1_Expr_1_SUM("SUM_Expr_1_Expr_1")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<Process_27_Data0,UID_Process_28>::KeyType * input, Process_27_Data0 * output)
        {
            (*output).m_SeriesName = (*input).m_SeriesName;
            (*output).m_TweetScore = (*input).m_TweetScore;
            (*output).m_RetweetScore = (*input).m_RetweetScore;
        }

        // process input row, called for each row in key range
        void AddRow(Process_27_Data0 * input)
        {
            m_SeriesName_SeriesName_FIRST.Add((*input).m_SeriesName);
            m_TweetScore_TweetScore_FIRST.Add((*input).m_TweetScore);
            m_RetweetScore_RetweetScore_FIRST.Add((*input).m_RetweetScore);
            m_Expr_0_Expr_0_SUM.Add((*input).m_Expr_0);
            m_Expr_1_Expr_1_SUM.Add((*input).m_Expr_1);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(Process_27_Data0 * output)
        {
            m_SeriesName_SeriesName_FIRST.Aggregate(&(*output).m_SeriesName);
            m_TweetScore_TweetScore_FIRST.Aggregate(&(*output).m_TweetScore);
            m_RetweetScore_RetweetScore_FIRST.Aggregate(&(*output).m_RetweetScore);
            m_Expr_0_Expr_0_SUM.Aggregate(&(*output).m_Expr_0);
            m_Expr_1_Expr_1_SUM.Aggregate(&(*output).m_Expr_1);
        }

        // write aggregated data
        void GetValue(Process_27_Data0 * output)
        {
            m_SeriesName_SeriesName_FIRST.GetValue(&(*output).m_SeriesName);
            m_TweetScore_TweetScore_FIRST.GetValue(&(*output).m_TweetScore);
            m_RetweetScore_RetweetScore_FIRST.GetValue(&(*output).m_RetweetScore);
            m_Expr_0_Expr_0_SUM.GetValue(&(*output).m_Expr_0);
            m_Expr_1_Expr_1_SUM.GetValue(&(*output).m_Expr_1);
        }

        // reset for new key
        void Reset()
        {
            m_SeriesName_SeriesName_FIRST.Reset();
            m_TweetScore_TweetScore_FIRST.Reset();
            m_RetweetScore_RetweetScore_FIRST.Reset();
            m_Expr_0_Expr_0_SUM.Reset();
            m_Expr_1_Expr_1_SUM.Reset();
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root)
        {
            m_SeriesName_SeriesName_FIRST.WriteRuntimeStats(root);
            m_TweetScore_TweetScore_FIRST.WriteRuntimeStats(root);
            m_RetweetScore_RetweetScore_FIRST.WriteRuntimeStats(root);
            m_Expr_0_Expr_0_SUM.WriteRuntimeStats(root);
            m_Expr_1_Expr_1_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_SeriesName_SeriesName_FIRST.GetOperatorRequirements());
            result.Add(m_TweetScore_TweetScore_FIRST.GetOperatorRequirements());
            result.Add(m_RetweetScore_RetweetScore_FIRST.GetOperatorRequirements());
            result.Add(m_Expr_0_Expr_0_SUM.GetOperatorRequirements());
            result.Add(m_Expr_1_Expr_1_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<FString> m_SeriesName_SeriesName_FIRST;
        Aggregate_FIRST<NativeNullable<__int64>> m_TweetScore_TweetScore_FIRST;
        Aggregate_FIRST<NativeNullable<__int64>> m_RetweetScore_RetweetScore_FIRST;
        Aggregate_SUM<NativeNullable<__int64>,NativeNullable<__int64>> m_Expr_0_Expr_0_SUM;
        Aggregate_SUM<NativeNullable<__int64>,NativeNullable<__int64>> m_Expr_1_Expr_1_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_25_Data0,UID_Process_26>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;
            NativeNullable<__int64> m_TweetScore;
            NativeNullable<__int64> m_RetweetScore;

            KeyStruct(HashJoin_25_Data0 & c) :
                m_SeriesName(c.m_SeriesName),
                m_TweetScore(c.m_TweetScore),
                m_RetweetScore(c.m_RetweetScore)
            {
            }

            KeyStruct(const HashJoin_25_Data0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<HashJoin_25_Data0&>(c).m_SeriesName, alloc),
                m_TweetScore(const_cast<HashJoin_25_Data0&>(c).m_TweetScore),
                m_RetweetScore(const_cast<HashJoin_25_Data0&>(c).m_RetweetScore)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName),
                m_TweetScore(c.m_TweetScore),
                m_RetweetScore(c.m_RetweetScore)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc),
                m_TweetScore(const_cast<KeyStruct&>(c).m_TweetScore),
                m_RetweetScore(const_cast<KeyStruct&>(c).m_RetweetScore)
            {
            }

            KeyStruct() :
                m_SeriesName(),
                m_TweetScore(),
                m_RetweetScore()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
                os << "\tTweetScore:\t" << row.m_TweetScore << endl;
                os << "\tRetweetScore:\t" << row.m_RetweetScore << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_25_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_TweetScore, key.m_TweetScore)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_RetweetScore, key.m_RetweetScore)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_25_Data0 * n1, HashJoin_25_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_TweetScore, (*n2).m_TweetScore)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_RetweetScore, (*n2).m_RetweetScore)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_25_Data0 * p, int depth)
        {

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_25_Data0 * p, int depth)
        {
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_GetSStream_0,UID_HashJoin_12_FB_0>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(PartitionSchema_GetSStream_0 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<PartitionSchema_GetSStream_0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_GetSStream_0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(PartitionSchema_GetSStream_0 * n1, PartitionSchema_GetSStream_0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(PartitionSchema_GetSStream_0 * p, int depth)
        {
            if (depth < 1 && (*p).m_SeriesName.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_SeriesName.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_SeriesName.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_SeriesName.buffer()[depth]));
            }

            depth -= (int) ((*p).m_SeriesName.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(PartitionSchema_GetSStream_0 * p, int depth)
        {
            depth -= (int) ((*p).m_SeriesName.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV6_Split_out0,UID_HashJoin_12_FB_1>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName1;

            KeyStruct(SV6_Split_out0 & c) :
                m_SeriesName1(c.m_SeriesName1)
            {
            }

            KeyStruct(const SV6_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SeriesName1(const_cast<SV6_Split_out0&>(c).m_SeriesName1, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName1(c.m_SeriesName1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName1(const_cast<KeyStruct&>(c).m_SeriesName1, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName1()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName1:\t" << row.m_SeriesName1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV6_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName1, key.m_SeriesName1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV6_Split_out0 * n1, SV6_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName1, (*n2).m_SeriesName1)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV6_Split_out0 * p, int depth)
        {
            if (depth < 1 && (*p).m_SeriesName1.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_SeriesName1.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_SeriesName1.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_SeriesName1.buffer()[depth]));
            }

            depth -= (int) ((*p).m_SeriesName1.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV6_Split_out0 * p, int depth)
        {
            depth -= (int) ((*p).m_SeriesName1.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<PartitionSchema_GetSStream_0,UID_HashJoin_12_0>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(PartitionSchema_GetSStream_0 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<PartitionSchema_GetSStream_0&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(PartitionSchema_GetSStream_0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(PartitionSchema_GetSStream_0 * n1, PartitionSchema_GetSStream_0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV6_Split_out0,UID_HashJoin_12_1>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName1;

            KeyStruct(SV6_Split_out0 & c) :
                m_SeriesName1(c.m_SeriesName1)
            {
            }

            KeyStruct(const SV6_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SeriesName1(const_cast<SV6_Split_out0&>(c).m_SeriesName1, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName1(c.m_SeriesName1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName1(const_cast<KeyStruct&>(c).m_SeriesName1, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName1()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName1:\t" << row.m_SeriesName1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV6_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName1, key.m_SeriesName1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV6_Split_out0 * n1, SV6_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName1, (*n2).m_SeriesName1)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_12> 
    {
    public:
        typedef KeyComparePolicy<PartitionSchema_GetSStream_0,UID_HashJoin_12_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV6_Split_out0,UID_HashJoin_12_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const PartitionSchema_GetSStream_0 * left, const SV6_Split_out0 * right)
        {
            int r = 0;
            PartitionSchema_GetSStream_0 * n1 = const_cast<PartitionSchema_GetSStream_0 *>(left);
            SV6_Split_out0 * n2 = const_cast<SV6_Split_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName1)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(PartitionSchema_GetSStream_0 * left, SV6_Split_out0 * right, SV6_Split_out1 * out)
        {
                (*out).m_SeriesName = (*left).m_SeriesName;
                (*out).m_Score = (*right).m_Score;
        }

        static void CopyLeftRow(PartitionSchema_GetSStream_0 * left, SV6_Split_out1 * out)
        {
            (*out).m_SeriesName = (*left).m_SeriesName;
        }

        static void NullifyRightSide(SV6_Split_out1 * out)
        {
            (*out).m_Score.SetNull();
        }

        static void CopyRightRow(SV6_Split_out0 * right, SV6_Split_out1 * out)
        {
            (*out).m_Score = (*right).m_Score;
        }

        static void NullifyLeftSide(SV6_Split_out1 * out)
        {
            (*out).m_SeriesName.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<PartitionSchema_GetSStream_0, SV6_Split_out0, SV6_Split_out1, UID_HashJoin_12>
    {
    public:
        static const int ProbeSorterUID = UID_HashJoin_12_FB_0;
        static const int BuildSorterUID = UID_HashJoin_12_FB_1;
        typedef MKQSort<PartitionSchema_GetSStream_0> ProbeSorterAlgorithm;
        typedef MKQSort<SV6_Split_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<PartitionSchema_GetSStream_0, SV6_Split_out0, SV6_Split_out1, UID_HashJoin_12>
    {
    public:
        typedef HashCombinerPolicyV2<PartitionSchema_GetSStream_0, SV6_Split_out0, SV6_Split_out1, UID_HashJoin_12> P;

        typedef HashCombineKey_HashJoin_12 KeySchema;
        typedef HashCombineValue_HashJoin_12 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_12& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName_SeriesName1);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV6_Split_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName1);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const PartitionSchema_GetSStream_0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_12& left, const HashCombineKey_HashJoin_12& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SeriesName_SeriesName1, right.m_SeriesName_SeriesName1)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const PartitionSchema_GetSStream_0& left, const HashCombineKey_HashJoin_12& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SeriesName, right.m_SeriesName_SeriesName1)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
            static const bool s_disable{ false };
            static const bool s_raiseUserError{ false };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 2260729854ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const PartitionSchema_GetSStream_0 & probe, const ValueSchema * build, SV6_Split_out1 & output)
        {
            // copy probe
            output.m_SeriesName = probe.m_SeriesName;

            // copy build
            output.m_Score = (*build).m_Score;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const PartitionSchema_GetSStream_0 & probe, SV6_Split_out1 & output)
        {
            // copy probe
            output.m_SeriesName = probe.m_SeriesName;

            // nullify build
            output.m_Score.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const SV6_Split_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
            FString tmp_SeriesName1(row.m_SeriesName1, alloc);
           key.m_SeriesName_SeriesName1 = tmp_SeriesName1;
            // copy value
            (*value).m_Score = row.m_Score;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV6_Split_out0 & row)
         {
            // copy key
           row.m_SeriesName1 = key.m_SeriesName_SeriesName1;
            // copy value
            row.m_Score = (*value).m_Score;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV6_Split_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV6_Split_out1,UID_HashJoin_25_FB_0>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(SV6_Split_out1 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const SV6_Split_out1 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<SV6_Split_out1&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV6_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(SV6_Split_out1 * n1, SV6_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV6_Split_out1 * p, int depth)
        {
            if (depth < 1 && (*p).m_SeriesName.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_SeriesName.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_SeriesName.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_SeriesName.buffer()[depth]));
            }

            depth -= (int) ((*p).m_SeriesName.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV6_Split_out1 * p, int depth)
        {
            depth -= (int) ((*p).m_SeriesName.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV9_Split_out0,UID_HashJoin_25_FB_1>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName2;

            KeyStruct(SV9_Split_out0 & c) :
                m_SeriesName2(c.m_SeriesName2)
            {
            }

            KeyStruct(const SV9_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SeriesName2(const_cast<SV9_Split_out0&>(c).m_SeriesName2, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName2(c.m_SeriesName2)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName2(const_cast<KeyStruct&>(c).m_SeriesName2, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName2()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName2:\t" << row.m_SeriesName2 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV9_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName2, key.m_SeriesName2)) != 0)
                return r;
            return r;
        }

        static int Compare(SV9_Split_out0 * n1, SV9_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName2, (*n2).m_SeriesName2)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV9_Split_out0 * p, int depth)
        {
            if (depth < 1 && (*p).m_SeriesName2.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_SeriesName2.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_SeriesName2.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_SeriesName2.buffer()[depth]));
            }

            depth -= (int) ((*p).m_SeriesName2.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV9_Split_out0 * p, int depth)
        {
            depth -= (int) ((*p).m_SeriesName2.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV6_Split_out1,UID_HashJoin_25_0>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName;

            KeyStruct(SV6_Split_out1 & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const SV6_Split_out1 & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<SV6_Split_out1&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName(c.m_SeriesName)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName(const_cast<KeyStruct&>(c).m_SeriesName, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName:\t" << row.m_SeriesName << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV6_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName, key.m_SeriesName)) != 0)
                return r;
            return r;
        }

        static int Compare(SV6_Split_out1 * n1, SV6_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV9_Split_out0,UID_HashJoin_25_1>
    {
    public:
        struct KeyStruct
        {
            FString m_SeriesName2;

            KeyStruct(SV9_Split_out0 & c) :
                m_SeriesName2(c.m_SeriesName2)
            {
            }

            KeyStruct(const SV9_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SeriesName2(const_cast<SV9_Split_out0&>(c).m_SeriesName2, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SeriesName2(c.m_SeriesName2)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SeriesName2(const_cast<KeyStruct&>(c).m_SeriesName2, alloc)
            {
            }

            KeyStruct() :
                m_SeriesName2()
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSeriesName2:\t" << row.m_SeriesName2 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV9_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SeriesName2, key.m_SeriesName2)) != 0)
                return r;
            return r;
        }

        static int Compare(SV9_Split_out0 * n1, SV9_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SeriesName2, (*n2).m_SeriesName2)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_25> 
    {
    public:
        typedef KeyComparePolicy<SV6_Split_out1,UID_HashJoin_25_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV9_Split_out0,UID_HashJoin_25_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const SV6_Split_out1 * left, const SV9_Split_out0 * right)
        {
            int r = 0;
            SV6_Split_out1 * n1 = const_cast<SV6_Split_out1 *>(left);
            SV9_Split_out0 * n2 = const_cast<SV9_Split_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_SeriesName, (*n2).m_SeriesName2)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(SV6_Split_out1 * left, SV9_Split_out0 * right, HashJoin_25_Data0 * out)
        {
                (*out).m_SeriesName = (*left).m_SeriesName;
                (*out).m_Score = (*left).m_Score;
                (*out).m_TweetScore = (*right).m_TweetScore;
                (*out).m_RetweetScore = (*right).m_RetweetScore;
        }

        static void CopyLeftRow(SV6_Split_out1 * left, HashJoin_25_Data0 * out)
        {
            (*out).m_SeriesName = (*left).m_SeriesName;
            (*out).m_Score = (*left).m_Score;
        }

        static void NullifyRightSide(HashJoin_25_Data0 * out)
        {
            (*out).m_TweetScore.SetNull();
            (*out).m_RetweetScore.SetNull();
        }

        static void CopyRightRow(SV9_Split_out0 * right, HashJoin_25_Data0 * out)
        {
            (*out).m_TweetScore = (*right).m_TweetScore;
            (*out).m_RetweetScore = (*right).m_RetweetScore;
        }

        static void NullifyLeftSide(HashJoin_25_Data0 * out)
        {
            (*out).m_SeriesName.SetNull();
            (*out).m_Score.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<SV6_Split_out1, SV9_Split_out0, HashJoin_25_Data0, UID_HashJoin_25>
    {
    public:
        static const int ProbeSorterUID = UID_HashJoin_25_FB_0;
        static const int BuildSorterUID = UID_HashJoin_25_FB_1;
        typedef MKQSort<SV6_Split_out1> ProbeSorterAlgorithm;
        typedef MKQSort<SV9_Split_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<SV6_Split_out1, SV9_Split_out0, HashJoin_25_Data0, UID_HashJoin_25>
    {
    public:
        typedef HashCombinerPolicyV2<SV6_Split_out1, SV9_Split_out0, HashJoin_25_Data0, UID_HashJoin_25> P;

        typedef HashCombineKey_HashJoin_25 KeySchema;
        typedef HashCombineValue_HashJoin_25 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_25& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName_SeriesName2);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV9_Split_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName2);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV6_Split_out1& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SeriesName);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_25& left, const HashCombineKey_HashJoin_25& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SeriesName_SeriesName2, right.m_SeriesName_SeriesName2)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const SV6_Split_out1& left, const HashCombineKey_HashJoin_25& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SeriesName, right.m_SeriesName_SeriesName2)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
            static const bool s_disable{ false };
            static const bool s_raiseUserError{ false };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 2260729854ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef ValueSchema Value;
        typedef void** ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::ONE;

        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const SV6_Split_out1 & probe, const ValueSchema * build, HashJoin_25_Data0 & output)
        {
            // copy probe
            output.m_SeriesName = probe.m_SeriesName;
            output.m_Score = probe.m_Score;

            // copy build
            output.m_TweetScore = (*build).m_TweetScore;
            output.m_RetweetScore = (*build).m_RetweetScore;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const SV6_Split_out1 & probe, HashJoin_25_Data0 & output)
        {
            // copy probe
            output.m_SeriesName = probe.m_SeriesName;
            output.m_Score = probe.m_Score;

            // nullify build
            output.m_TweetScore.SetNull();
            output.m_RetweetScore.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const SV9_Split_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
            FString tmp_SeriesName2(row.m_SeriesName2, alloc);
           key.m_SeriesName_SeriesName2 = tmp_SeriesName2;
            // copy value
            (*value).m_TweetScore = row.m_TweetScore;
            (*value).m_RetweetScore = row.m_RetweetScore;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV9_Split_out0 & row)
         {
            // copy key
           row.m_SeriesName2 = key.m_SeriesName_SeriesName2;
            // copy value
            row.m_TweetScore = (*value).m_TweetScore;
            row.m_RetweetScore = (*value).m_RetweetScore;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV9_Split_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema value;
            DeepCopyBuildRowToKeyValue(row, key, &value, &alloc);

            auto it = ht.InsertWithPrecomputedHash(hash, { key, value });
            SCOPE_ASSERT(it.second && "Key uniqueness constraint is violated"); // check uniqueness
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_27 [] =
    {
        "SeriesName",
        "TweetScore",
        "RetweetScore",
        "(Score)",
        "(Score)",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<HashJoin_25_Data0, Process_27_Data0, UID_Process_27>
    {
    public:

        static bool FilterTransformRow(HashJoin_25_Data0 & input, Process_27_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;
                    output.m_TweetScore = input.m_TweetScore;
                    exceptionIndex++;
                    output.m_RetweetScore = input.m_RetweetScore;
                    exceptionIndex++;
                    output.m_Expr_0 = (input.m_Score);
                    exceptionIndex++;
                    output.m_Expr_1 = (input.m_Score);
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_27[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_27_Data0, Process_27_Data0, UID_Process_28>
    {
    public:

        static bool FilterTransformRow(Process_27_Data0 & input, Process_27_Data0 & output, IncrementalAllocator * alloc)
        {
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_29 [] =
    {
        "SeriesName",
        "RetweetScore == null ? 0 : RetweetScore",
        "TweetScore == null ? 0 : TweetScore",
        "Expr_0 == null ? 0 : Expr_1",
        "tmp_3 + tmp_4 + tmp_5",
        "tmp_3",
        "tmp_4",
        "tmp_5",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_27_Data0, Process_29_Data0, UID_Process_29>
    {
    public:

        static bool FilterTransformRow(Process_27_Data0 & input, Process_29_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_SeriesName = input.m_SeriesName;
                    exceptionIndex++;

                exceptionIndex++;
                                 NativeNullable<__int64> tmp_5 = (input.m_RetweetScore.IsNull() ? scope_cast<NativeNullable<__int64>>(0) : input.m_RetweetScore);

                exceptionIndex++;
                                 NativeNullable<__int64> tmp_4 = (input.m_TweetScore.IsNull() ? scope_cast<NativeNullable<__int64>>(0) : input.m_TweetScore);

                exceptionIndex++;
                                 NativeNullable<__int64> tmp_3 = (input.m_Expr_0.IsNull() ? scope_cast<NativeNullable<__int64>>(0) : input.m_Expr_1);
                    output.m_OverallScore = tmp_3 + tmp_4 + tmp_5;
                    exceptionIndex++;
                    output.m_RatingsScore = tmp_3;
                    exceptionIndex++;
                    output.m_TweetScore = tmp_4;
                    exceptionIndex++;
                    output.m_RetweetScore = tmp_5;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_29[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements().AddMemoryInRows(1, 1);
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_29_Data0, UID_SV10_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_29_Data0 & row)
        {
            if (!row.m_SeriesName.IsNull())
            {
                output->Write<FString,true>(row.m_SeriesName);
            }
            output->WriteDelimiter();
            if (!row.m_OverallScore.IsNull())
            {
                output->Write<__int64,false>(row.m_OverallScore);
            }
            output->WriteDelimiter();
            if (!row.m_RatingsScore.IsNull())
            {
                output->Write<__int64,false>(row.m_RatingsScore);
            }
            output->WriteDelimiter();
            if (!row.m_TweetScore.IsNull())
            {
                output->Write<__int64,false>(row.m_TweetScore);
            }
            output->WriteDelimiter();
            if (!row.m_RetweetScore.IsNull())
            {
                output->Write<__int64,false>(row.m_RetweetScore);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("SeriesName", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("OverallScore", 12));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RatingsScore", 12));
            output->WriteDelimiter();
            output->Write<string,true>(FString("TweetScore", 10));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RetweetScore", 12));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV10_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<PartitionSchema_GetSStream_0, BinaryExtractPolicy<PartitionSchema_GetSStream_0>, BinaryInputStream> ExtractorType1_SV10_Combine;        
        unique_ptr<ExtractorType1_SV10_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV10_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV10_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV6_Split_out0, BinaryExtractPolicy<SV6_Split_out0>, BinaryInputStream> ExtractorType2_SV10_Combine;        
        unique_ptr<ExtractorType2_SV10_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV10_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV6_Split_out0);
        ExtractorType2_SV10_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;
        // Define extractor type and construct object
        typedef Extractor<SV9_Split_out0, BinaryExtractPolicy<SV9_Split_out0>, BinaryInputStream> ExtractorType3_SV10_Combine;        
        unique_ptr<ExtractorType3_SV10_Combine> extractor_2_ptr= make_unique<ExtractorType3_SV10_Combine>(inputs[2], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV9_Split_out0);
        ExtractorType3_SV10_Combine * extractor_2 = extractor_2_ptr.get();
        ULONG extractor_2_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType1_SV10_Combine, PartitionSchema_GetSStream_0, ExtractorType2_SV10_Combine, SV6_Split_out0, SV6_Split_out1, HashLeftOuterJoinerV2, LeftOuterJoiner, UID_HashJoin_12> CombinerType_HashJoin_12;
        unique_ptr<CombinerType_HashJoin_12> combiner_HashJoin_12_ptr;
        combiner_HashJoin_12_ptr.reset(new CombinerType_HashJoin_12(extractor_0, extractor_1, UID_HashJoin_12, 0));

        CombinerType_HashJoin_12 * combiner_HashJoin_12 = combiner_HashJoin_12_ptr.get();
        ULONG combiner_HashJoin_12_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<CombinerType_HashJoin_12, SV6_Split_out1, ExtractorType3_SV10_Combine, SV9_Split_out0, HashJoin_25_Data0, HashLeftOuterJoinerV2, LeftOuterJoiner, UID_HashJoin_25> CombinerType_HashJoin_25;
        unique_ptr<CombinerType_HashJoin_25> combiner_HashJoin_25_ptr;
        combiner_HashJoin_25_ptr.reset(new CombinerType_HashJoin_25(combiner_HashJoin_12, extractor_2, UID_HashJoin_25, 0));

        CombinerType_HashJoin_25 * combiner_HashJoin_25 = combiner_HashJoin_25_ptr.get();
        ULONG combiner_HashJoin_25_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<HashJoin_25_Data0>> delegate_combiner_HashJoin_25_ptr (new OperatorDelegate<HashJoin_25_Data0>(OperatorDelegate<HashJoin_25_Data0>::FromOperator(combiner_HashJoin_25)));
        OperatorDelegate<HashJoin_25_Data0> * delegate_combiner_HashJoin_25 = delegate_combiner_HashJoin_25_ptr.get();
        ULONG delegate_combiner_HashJoin_25_count = 1;
        // Define sorter type
        typedef Sorter<HashJoin_25_Data0> SorterType_Process_26;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_26> sorter_Process_26_ptr (new SorterType_Process_26(delegate_combiner_HashJoin_25, &StdSort<HashJoin_25_Data0>::Sort<KeyComparePolicy<HashJoin_25_Data0, UID_Process_26>, (sizeof(HashJoin_25_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<HashJoin_25_Data0>::CreateDelegate<UID_Process_26>(), false, 1291845630 /*memoryQuota*/, UID_Process_26));
        SorterType_Process_26 * sorter_Process_26 = sorter_Process_26_ptr.get();
        ULONG sorter_Process_26_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_26, HashJoin_25_Data0, Process_27_Data0, UID_Process_27> FilterTransformerType_Process_27;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_27> filterTransformer_Process_27_ptr (new FilterTransformerType_Process_27(sorter_Process_26, UID_Process_27));
        FilterTransformerType_Process_27 * filterTransformer_Process_27 = filterTransformer_Process_27_ptr.get();
        ULONG filterTransformer_Process_27_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<FilterTransformerType_Process_27, Process_27_Data0, Process_27_Data0, UID_Process_28> StreamAggregatorType_Process_28;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_28> streamAggregator_Process_28_ptr (new StreamAggregatorType_Process_28(filterTransformer_Process_27, false, UID_Process_28));
        StreamAggregatorType_Process_28 * streamAggregator_Process_28 = streamAggregator_Process_28_ptr.get();
        ULONG streamAggregator_Process_28_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_28, Process_27_Data0, Process_29_Data0, UID_Process_29> FilterTransformerType_Process_29;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_29> filterTransformer_Process_29_ptr (new FilterTransformerType_Process_29(streamAggregator_Process_28, UID_Process_29));
        FilterTransformerType_Process_29 * filterTransformer_Process_29 = filterTransformer_Process_29_ptr.get();
        ULONG filterTransformer_Process_29_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_29, Process_29_Data0, TextOutputPolicy<Process_29_Data0, UID_SV10_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType4_SV10_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType4_SV10_Combine> outputer_SV10_Combine_out0_ptr(new OutputerType4_SV10_Combine(filterTransformer_Process_29, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV10_Combine_out0));
        OutputerType4_SV10_Combine * outputer_SV10_Combine_out0 = outputer_SV10_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV10_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_29_Data0 row;
            outputer_SV10_Combine_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV10_Combine_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV10_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV10_Combine
// Empty footer
