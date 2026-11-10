/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd450; name: FUN_.text__004dd450
 */


undefined8 FUN__text__004dd450(long *param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined2 *)(param_1[3] + 0x310);
    }
    *(undefined2 *)((long)param_1 + 0x54) = uVar5;
    uVar4 = (**(code **)(*param_1 + 0x140))(param_1,0);
    iVar2 = (int)uVar4;
  }
  else {
    if (param_2 == 2) {
      *(byte *)(param_1 + 4) =
           (byte)(*(uint *)(param_1[3] + 0x313) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
                    /* WARNING: Could not recover jumptable at 0x004dd52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(long *)param_1[0xb] + 0x68))();
      return uVar4;
    }
    if (param_2 != 1) goto LAB__text__004dd4c4;
    if ((param_3 & 1) != 0) {
      iVar2 = FUN__text__004ddcf4(param_1);
      iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5);
      if (iVar3 != 1) {
        return 2;
      }
      lVar6 = param_1[3];
      *(int *)(lVar6 + 0x30c) = iVar2 - (int)param_1[5];
      puVar1 = (uint *)(lVar6 + 0x313);
      *puVar1 = *puVar1 & 0xfe3fffff;
      goto LAB__text__004dd4c4;
    }
    plVar7 = param_1 + 5;
    iVar2 = (**(code **)(*param_1 + 0x140))(param_1,(int)*plVar7,plVar7);
    if (iVar2 == 1) goto LAB__text__004dd4c4;
    uVar4 = (**(code **)(*param_1 + 0x140))(param_1,0,plVar7);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 1) {
    return uVar4;
  }
LAB__text__004dd4c4:
                    /* WARNING: Could not recover jumptable at 0x004dd4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)param_1[0xb] + 0x68))();
  return uVar4;
}


