/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00522728; name: FUN_.text__00522728
 */


undefined8
FUN__text__00522728(long param_1,long param_2,long param_3,long *param_4,undefined4 *param_5,
                   undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    plVar6 = (long *)FUN__text__00400f80(9,0x48);
    if (plVar6 != (long *)0x0) {
      lVar8 = *param_4;
      uVar2 = *param_5;
      uVar3 = *param_6;
      uVar4 = *param_7;
      plVar6[2] = 0;
      plVar6[3] = 0;
      *(undefined1 *)(plVar6 + 5) = 0;
      plVar6[4] = -1;
      plVar6[6] = lVar8;
      *(undefined4 *)(plVar6 + 7) = uVar2;
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar3;
      *(undefined4 *)(plVar6 + 8) = uVar4;
      *plVar6 = (long)&DAT_00891f48;
      plVar6[1] = 0;
      FUN__text__00529f00(param_1,plVar6);
      plVar6[2] = param_1;
      if (param_3 != 0) {
        FUN__text__00529f08(param_3,plVar6);
        param_1 = plVar6[2];
        plVar6[3] = param_3;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = *(int *)(param_2 + 0x10) * 10;
      }
      iVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
      uVar7 = FUN__text__0052a714(param_2,iVar5 + iVar1,plVar6);
      if ((uVar7 & 1) == 0) {
        (**(code **)*plVar6)(plVar6);
        FUN__text__00400fc0(9,plVar6);
        return 0;
      }
      return 1;
    }
  }
  else {
    if (*(char *)(lVar8 + 0x28) != '\x02') {
      return 0;
    }
    *(undefined1 *)(lVar8 + 0x28) = 1;
  }
  return 0;
}


