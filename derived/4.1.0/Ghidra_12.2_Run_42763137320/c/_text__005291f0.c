/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005291f0; name: FUN_.text__005291f0
 */


undefined8
FUN__text__005291f0(long param_1,long param_2,long param_3,long *param_4,long *param_5,
                   undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    plVar4 = (long *)FUN__text__00400f80(9,0x48);
    if (plVar4 != (long *)0x0) {
      lVar6 = *param_4;
      lVar7 = *param_5;
      uVar2 = *param_6;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *(undefined1 *)(plVar4 + 5) = 0;
      plVar4[4] = -1;
      plVar4[6] = lVar6;
      plVar4[7] = lVar7;
      *(undefined4 *)(plVar4 + 8) = uVar2;
      *plVar4 = (long)&DAT_00891e98;
      plVar4[1] = 0;
      FUN__text__00529f00(param_1,plVar4);
      plVar4[2] = param_1;
      if (param_3 != 0) {
        FUN__text__00529f08(param_3,plVar4);
        param_1 = plVar4[2];
        plVar4[3] = param_3;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = *(int *)(param_2 + 0x10) * 10;
      }
      iVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
      uVar5 = FUN__text__0052a714(param_2,iVar3 + iVar1,plVar4);
      if ((uVar5 & 1) == 0) {
        (**(code **)*plVar4)(plVar4);
        FUN__text__00400fc0(9,plVar4);
        return 0;
      }
      return 1;
    }
  }
  else {
    if (*(char *)(lVar6 + 0x28) != '\x02') {
      return 0;
    }
    *(undefined1 *)(lVar6 + 0x28) = 1;
  }
  return 0;
}


