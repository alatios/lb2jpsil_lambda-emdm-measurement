// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AngularDistribution
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "AngularDistribution.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_AngularDistribution(void *p = 0);
   static void *newArray_AngularDistribution(Long_t size, void *p);
   static void delete_AngularDistribution(void *p);
   static void deleteArray_AngularDistribution(void *p);
   static void destruct_AngularDistribution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AngularDistribution*)
   {
      ::AngularDistribution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AngularDistribution >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AngularDistribution", ::AngularDistribution::Class_Version(), "AngularDistribution.h", 16,
                  typeid(::AngularDistribution), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AngularDistribution::Dictionary, isa_proxy, 4,
                  sizeof(::AngularDistribution) );
      instance.SetNew(&new_AngularDistribution);
      instance.SetNewArray(&newArray_AngularDistribution);
      instance.SetDelete(&delete_AngularDistribution);
      instance.SetDeleteArray(&deleteArray_AngularDistribution);
      instance.SetDestructor(&destruct_AngularDistribution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AngularDistribution*)
   {
      return GenerateInitInstanceLocal((::AngularDistribution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AngularDistribution*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AngularDistribution::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AngularDistribution::Class_Name()
{
   return "AngularDistribution";
}

//______________________________________________________________________________
const char *AngularDistribution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AngularDistribution*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AngularDistribution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AngularDistribution*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AngularDistribution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AngularDistribution*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AngularDistribution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AngularDistribution*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void AngularDistribution::Streamer(TBuffer &R__b)
{
   // Stream an object of class AngularDistribution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AngularDistribution::Class(),this);
   } else {
      R__b.WriteClassBuffer(AngularDistribution::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AngularDistribution(void *p) {
      return  p ? new(p) ::AngularDistribution : new ::AngularDistribution;
   }
   static void *newArray_AngularDistribution(Long_t nElements, void *p) {
      return p ? new(p) ::AngularDistribution[nElements] : new ::AngularDistribution[nElements];
   }
   // Wrapper around operator delete
   static void delete_AngularDistribution(void *p) {
      delete ((::AngularDistribution*)p);
   }
   static void deleteArray_AngularDistribution(void *p) {
      delete [] ((::AngularDistribution*)p);
   }
   static void destruct_AngularDistribution(void *p) {
      typedef ::AngularDistribution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AngularDistribution

namespace {
  void TriggerDictionaryInitialization_G__AngularDistribution_Impl() {
    static const char* headers[] = {
"AngularDistribution.h",
0
    };
    static const char* includePaths[] = {
"/home/adegenna/.local/opt/root-6.24.06/include/",
"/home/adegenna/lambda-emdm-measurement/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__AngularDistribution dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate(R"ATTRDUMP(Your description goes here...)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$AngularDistribution.h")))  AngularDistribution;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__AngularDistribution dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "AngularDistribution.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AngularDistribution", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__AngularDistribution",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__AngularDistribution_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__AngularDistribution_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__AngularDistribution() {
  TriggerDictionaryInitialization_G__AngularDistribution_Impl();
}
