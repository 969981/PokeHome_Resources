/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046aeb0; name: FUN_.text__0046aeb0
 */


void FUN__text__0046aeb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = *(long *)(lVar1 + 0x78);
  } while (*(long *)(lVar1 + 0x78) != 0 && (*(ulong *)(lVar1 + 0x98) & 0x20020000ffe) == 0);
  FUN__text__0046a4e0(lVar1,param_2);
  if (param_4 == 0) {
    return;
  }
  FUN__text__0046a910(lVar1,param_2,param_4 + 4);
  return;
}


