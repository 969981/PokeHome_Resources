/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a4204; name: FUN_.text__002a4204
 */


void FUN__text__002a4204(long *param_1,long param_2,long param_3,long param_4)

{
  param_3 = param_3 - (*param_1 - param_4);
  if (0 < param_3) {
    nn::crypto::detail::Md5Impl::Update(param_1 + 2,param_2 + (*param_1 - param_4));
    *param_1 = *param_1 + param_3;
  }
  return;
}


