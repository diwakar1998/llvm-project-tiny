//Declare the target feature support here

#ifndef LLVM_CLANG_LIB_BASIC_TARGETS_TINYGPU_H
#define LLVM_CLANG_LIB_BASIC_TARGETS_TINYGPU_H

#include "clang/Basic/TargetInfo.h"
#include "clang/Basic/TargetOptions.h"
#include "llvm/TargetParser/Triple.h"
#include "llvm/Support/Compiler.h"

namespace clang {
namespace targets {
class LLVM_LIBRARY_VISIBILITY TINYGPUTargetInfo : public TargetInfo {
    static const char *const GCCRegNames[];
    public:
        TINYGPUTargetInfo(const llvm::Triple &Triple,const TargetOptions &)
        :TargetInfo(Triple){
            //info about Target to be specified here
            WIntType = UnsignedInt;
        }

          ArrayRef<const char *> getGCCRegNames() const override;
    };
    }//End of namespace targets
}//End of namespace clang

#endif