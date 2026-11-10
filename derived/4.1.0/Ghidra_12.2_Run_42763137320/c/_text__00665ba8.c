/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665ba8; name: FUN_.text__00665ba8
 */


undefined8 FUN__text__00665ba8(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    plVar2 = (long *)FUN__text__0065caa8(*(long *)(param_1 + 0xd8));
    for (lVar4 = *plVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      sVar3 = strlen((char *)(lVar4 + 0x18));
      iVar1 = FUN__text__0066c2d8((char *)(lVar4 + 0x18),param_2,sVar3);
      if (iVar1 != 0) {
        FUN__text__00666f74(param_1,0x71206a,param_2);
        return 1;
      }
    }
  }
  return 0;
}


