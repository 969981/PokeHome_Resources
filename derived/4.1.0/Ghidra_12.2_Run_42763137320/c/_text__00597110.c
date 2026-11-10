/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00597110; name: FUN_.text__00597110
 */


ulong FUN__text__00597110(ulong param_1,undefined8 param_2,ulong param_3)

{
  Md5Impl aMStack_90 [88];
  undefined4 local_38;
  
  local_38 = 0;
  nn::crypto::detail::Md5Impl::Initialize();
  nn::crypto::detail::Md5Impl::Update(aMStack_90,param_1);
  nn::crypto::detail::Md5Impl::GetHash(aMStack_90,param_3);
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_90);
  return param_3;
}


