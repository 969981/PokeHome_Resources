/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045d6d8; name: FUN_.text__0045d6d8
 */


long * FUN__text__0045d6d8(void)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  
  plVar2 = (long *)FUN__text__00400f80(2,0x1a0);
  if (plVar2 != (long *)0x0) {
    FUN__text__0045d058(plVar2);
    iVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    uVar3 = 0x20000;
    if (iVar1 != 10 && iVar1 != 0) {
      uVar3 = 0;
    }
    *(uint *)((long)plVar2 + 0xd2) = uVar3 | *(uint *)((long)plVar2 + 0xd2) & 0xfffdffff;
  }
  return plVar2;
}


