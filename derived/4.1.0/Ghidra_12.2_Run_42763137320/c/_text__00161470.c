/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00161470; name: FUN_.text__00161470
 */


void FUN__text__00161470(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0xac8) =
       *(uint *)(param_1 + 0xac8) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  if (*(long *)(param_1 + 0x260) != 0) {
    uVar1 = FUN__text__00162d24();
    FUN__text__00690ff4(uVar1,param_2);
  }
  if (*(long *)(param_1 + 0x268) == 0) {
    return;
  }
  uVar1 = FUN__text__00162d24();
  FUN__text__00690ff4(uVar1,param_2);
  return;
}


