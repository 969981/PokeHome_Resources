/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665a24; name: FUN_.text__00665a24
 */


undefined8 FUN__text__00665a24(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     (plVar2 = (long *)FUN__text__0065caa0(), plVar2 != (long *)0x0)) {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
      lVar3 = *plVar2;
      iVar1 = FUN__text__0066c234(lVar3 + 0x1a,*(undefined8 *)(param_2 + 0xd0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0x198) == (uint)*(ushort *)(lVar3 + 0x18))) {
        FUN__text__00666f74(param_1,0x71f8ae,*(undefined8 *)(param_2 + 0xd0));
        return 1;
      }
    }
  }
  return 0;
}


