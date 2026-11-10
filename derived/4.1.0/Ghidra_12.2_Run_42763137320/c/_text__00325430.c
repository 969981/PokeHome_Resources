/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00325430; name: FUN_.text__00325430
 */


uint FUN__text__00325430(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(DAT_008e1d98 + 0x50);
  uVar1 = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN__text__0064db70(lVar2);
    uVar1 = uVar1 ^ 1;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return uVar1 & 1;
}


