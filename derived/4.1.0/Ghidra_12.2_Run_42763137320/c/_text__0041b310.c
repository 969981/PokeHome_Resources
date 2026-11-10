/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041b310; name: FUN_.text__0041b310
 */


void FUN__text__0041b310(long param_1,byte *param_2,code *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = (*param_3)(param_2,uVar2 & 0xffffffff);
      *(undefined1 *)(*(long *)(param_1 + 0x50) + uVar2) = uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_2);
  }
  return;
}


