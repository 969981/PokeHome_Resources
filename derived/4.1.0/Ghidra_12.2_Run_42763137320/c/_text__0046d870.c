/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046d870; name: FUN_.text__0046d870
 */


void FUN__text__0046d870(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 local_6c;
  int local_64;
  
  if ((int)param_1[1] != 0) {
    plVar5 = (long *)*param_1;
    do {
      piVar3 = (int *)*plVar5;
      if ((((*(char *)((long)piVar3 + 0xd) == '\x04') && (*piVar3 == param_2)) &&
          (iVar1 = piVar3[2], iVar1 == 7 || iVar1 == 0)) &&
         (uVar2 = FUN__text__0046d6c0(param_2), (uVar2 & 1) != 0)) {
        local_6c = 0x3f80000000000000;
        local_64 = iVar1;
        FUN__text__0046db48(*plVar5 + 0x18,(long)&local_6c + 4,&local_6c);
        uVar6 = *(uint *)(param_3 + 1);
        if (*(uint *)((long)param_3 + 0xc) <= uVar6) {
          uVar2 = FUN__text__0046df90(param_3);
          if (((uVar2 & 1) == 0) || (*(uint *)((long)param_3 + 0xc) <= uVar6))
          goto LAB__text__0046d8c0;
          uVar6 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar6 + 1;
        if (*param_3 != 0) {
          puVar4 = (undefined8 *)(*param_3 + (ulong)uVar6 * 0xc);
          *puVar4 = 0x3f80000000000000;
          *(undefined4 *)(puVar4 + 1) = 0x3c;
          *(int *)(puVar4 + 1) = local_64;
          *puVar4 = local_6c;
        }
      }
LAB__text__0046d8c0:
      plVar5 = plVar5 + 1;
    } while (plVar5 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8));
  }
  return;
}


