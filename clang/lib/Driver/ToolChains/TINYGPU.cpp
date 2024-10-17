#include "TINYGPU.h"
#include "CommonArgs.h"
#include "clang/Driver/Compilation.h"
#include "clang/Driver/Driver.h"
#include "clang/Driver/Options.h"
#include "llvm/Option/ArgList.h"

using namespace clang::driver;
using namespace clang::driver::toolchains;
using namespace clang;
using namespace llvm::opt;

TINYGPUToolChain::TINYGPUToolChain(const Driver &D, const llvm::Triple &Triple,
                               const ArgList &Args)
    : ToolChain(D, Triple, Args) {
  // ProgramPaths are found via 'PATH' environment variable.
}
bool TINYGPUToolChain::isPICDefault() const { return true; }
// bool TINYGPUToolChain::isPIEDefault() const { return false; }
bool TINYGPUToolChain::isPICDefaultForced() const { return true; }
bool TINYGPUToolChain::SupportsProfiling() const { return false; }
bool TINYGPUToolChain::hasBlocksRuntime() const { return false; }