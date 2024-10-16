#include "TINYGPU.h"
#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/MacroBuilder.h"
#include "clang/Basic/TargetBuiltins.h"
#include "llvm/ADT/StringSwitch.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/TargetParser/RISCVTargetParser.h"
#include <optional>

using namespace clang;
using namespace clang::targets;

const char *const TINYGPUTargetInfo::GCCRegNames[] = {
    "r0","r1","r2","r3","r4","r5","r6","r7","r8","r9","r10",
    "r11","r12","r13","r14","r15"
};

const TargetInfo::GCCRegAlias GCCRegAliases[] = {
    {{"zero"},"r0"},{{"one"},"r1"},{{"two"},"r2"},{{"three"},"r3"},{{"four"},"r4"},
    {{"five"},"r5"},{{"six"},"r6"},{{"seven"},"r7"},{{"eight"},"r8"},{{"nine"},"r9"},
    {{"ten"},"r10"},{{"eleven"},"r11"},{{"twelve"},"r12"},{{"blockidx"},"r13"},{{"blockDim"},"r14"},
    {{"threadidx"},"r15"}
};

ArrayRef<const char *> TINYGPUTargetInfo::getGCCRegNames()const{
    return llvm::ArrayRef(GCCRegNames);
}

ArrayRef<TargetInfo::GCCRegAlias> TINYGPUTargetInfo::getGCCRegAliases()const{
    return llvm::ArrayRef(GCCRegAliases);
}