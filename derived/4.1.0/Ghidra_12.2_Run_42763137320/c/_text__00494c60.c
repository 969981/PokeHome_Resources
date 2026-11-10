/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00494c60; name: FUN_.text__00494c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00494c60(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  
  plVar2 = (long *)FUN__text__00400f80(0,0x48);
  if (plVar2 != (long *)0x0) {
    FUN__text__004b7a40(plVar2,*(undefined8 *)(param_2 + 0x10));
    iVar1 = FUN__text__004b8ed0(param_4,*param_1,plVar2);
    if ((iVar1 == 1) && (iVar1 = FUN__text__004b8f40(param_4,param_1[1],plVar2), iVar1 == 1)) {
      FUN__text__004b8fb0(param_4,param_1[2]);
      iVar1 = (**(code **)(*param_4 + 0x38))(param_4,0xf,*(int *)(param_2 + 0x84) + param_3,0,0);
      if (iVar1 != 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
        FUN__text__00400fc0(0,plVar2);
        return iVar1;
      }
      plVar2[1] = (long)param_4;
      *(undefined4 *)(plVar2 + 6) = *(undefined4 *)(param_2 + 0x34);
      *(undefined8 *)((long)plVar2 + 0x24) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)((long)plVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
      piVar3 = *(int **)(param_2 + 0x20);
      if (*(long *)((long)plVar2 + 0x1c) != 0) {
        FUN__text__0040c060();
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
      }
      *(int **)((long)plVar2 + 0x1c) = piVar3;
      FUN__text__004b2960(*_DAT_008a45c0,plVar2,0,0);
      return 1;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN__text__00400fc0(0,plVar2);
  }
  return 0x34;
}


