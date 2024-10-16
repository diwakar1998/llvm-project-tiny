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
        void getTargetDefines(const LangOptions &Opts,
                            MacroBuilder &Builder) const override;
        BuiltinVaListKind getBuiltinVaListKind() const override{
            return TargetInfo::VoidPtrBuiltinVaList;
        }
        ArrayRef<Builtin::Info> getTargetBuiltins() const override{
            return None;
        }      
        bool validateAsmConstraint(const char *&Name,
        TargetInfo::ConstraintInfo &info) const override{
            return false;
        }                  

        const char* getClobbers() const override{
            return "";
        }
    };

/*TODO:getTargetDefines()x
    getTargetBuiltins()x
    getBuiltinVaListKind()x
    validateAsmConstraint()x
    getClobbers();
    getGCCReg() // written but check about warning
*/
    }//End of namespace targets
}//End of namespace clang

#endif