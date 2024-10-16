#include "TINYGPU.h"
#include "clang/Basic/MacroBuilder.h"
#include "llvm/ADT/StringSwitch.h"

using namespace clang;
using namespace clang::targets;

const char *const TINYGPUTargetInfo::GCCRegNames[] = {
    "r0","r1","r2","r3","r4","r5","r6","r7","r8","r9","r10",
    "r11","r12","r13","r14","r15"
};

ArrayRef<const char *> TINYGPUTargetInfo::getGCCRegNames()const{
    return llvm::ArrayRef(GCCRegNames);
}