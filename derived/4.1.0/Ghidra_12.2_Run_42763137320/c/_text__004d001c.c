/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d001c; name: FUN_.text__004d001c
 */


void FUN__text__004d001c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  lVar1 = FUN__text__0040a740(param_1 + 0x68);
  if (lVar1 == 0) {
    return;
  }
  FUN__text__00407d7c(lVar1,param_2,param_3);
  return;
}


