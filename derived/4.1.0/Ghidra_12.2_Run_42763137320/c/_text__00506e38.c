/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00506e38; name: FUN_.text__00506e38
 */


undefined8 FUN__text__00506e38(long param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    plVar3 = (long *)FUN__text__00400f80(9,0x38);
    if (plVar3 != (long *)0x0) {
      lVar5 = *param_4;
      *(undefined1 *)(plVar3 + 5) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = -1;
      plVar3[6] = lVar5;
      *plVar3 = (long)&DAT_00891de8;
      plVar3[1] = 0;
      FUN__text__00529f00(param_1,plVar3);
      plVar3[2] = param_1;
      if (param_3 != 0) {
        FUN__text__00529f08(param_3,plVar3);
        param_1 = plVar3[2];
        plVar3[3] = param_3;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = *(int *)(param_2 + 0x10) * 10;
      }
      iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
      uVar4 = FUN__text__0052a714(param_2,iVar2 + iVar1,plVar3);
      if ((uVar4 & 1) == 0) {
        (**(code **)*plVar3)(plVar3);
        FUN__text__00400fc0(9,plVar3);
        return 0;
      }
      return 1;
    }
  }
  else {
    if (*(char *)(lVar5 + 0x28) != '\x02') {
      return 0;
    }
    *(undefined1 *)(lVar5 + 0x28) = 1;
  }
  return 0;
}


