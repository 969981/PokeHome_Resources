/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651414; name: FUN_.text__00651414
 */


bool FUN__text__00651414(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = *(ulong *)(*(long *)(lVar3 + 0xd8) + 0x150);
  if ((long)uVar4 < 0) {
    uVar4 = (long)*(int *)(*(long *)(lVar3 + 0xd8) + 0x18) << 2;
  }
  *param_1 = 0;
  plVar2 = (long *)0x0;
  if (uVar4 != 0) {
    uVar1 = FUN__text__00650f00(lVar3);
    if (uVar4 < uVar1) {
      FUN__text__00666f74(lVar3,0x71a3d3);
      plVar2 = (long *)FUN__text__006514a8(lVar3);
      if (plVar2 != (long *)0x0) {
        FUN__text__00670414(lVar3,plVar2,0);
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
  }
  return plVar2 != param_1;
}


