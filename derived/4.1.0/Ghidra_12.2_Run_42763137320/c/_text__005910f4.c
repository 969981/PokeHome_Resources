/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005910f4; name: FUN_.text__005910f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__005910f4(long *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 local_28;
  
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x313) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x88))
                    ((long *)param_1[0xb],&local_28,param_1 + 0xd,*_DAT_008a4598);
  if (iVar5 != 0x11) {
    if (iVar5 == 0x2e) {
      return 0x3f;
    }
    if (iVar5 != 0x2d) {
      return 2;
    }
  }
  if (*(int *)((long)param_1 + 0x24) == 0) {
    iVar5 = (**(code **)(*param_1 + 0x128))(param_1,local_28);
    if (iVar5 != 1) {
      return iVar5;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = *(undefined2 *)(param_1[3] + 0x310);
    }
    *(undefined2 *)((long)param_1 + 0x54) = uVar6;
    iVar5 = (**(code **)(*param_1 + 0x138))(param_1,local_28,0);
    if (iVar5 != 1) {
      return iVar5;
    }
    uVar4 = *(uint *)(param_1 + 6);
    param_1[0xc] = param_1[0xc] + (ulong)uVar4;
    *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar4;
    *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar4;
    iVar5 = *(int *)((long)param_1 + 0xac);
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x138))(param_1,local_28,0);
    if (iVar5 != 1) {
      return iVar5;
    }
    iVar5 = *(int *)((long)param_1 + 0xac);
  }
  if (iVar5 == 0) {
    iVar5 = FUN__text__00591358(param_1);
    if (iVar5 != 1) {
      return iVar5;
    }
  }
  if ((param_1[0x12] == 0) && (iVar5 = FUN__text__00591494(param_1), iVar5 != 1)) {
    return 2;
  }
  if ((*(byte *)(param_1[3] + 0x315) >> 6 & 1) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = FUN__text__004dd29c(param_1);
    if ((int)param_1[0xd] != 0) {
      if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
        (**(code **)(*(long *)param_1[0xb] + 0x90))();
      }
      else {
        *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
      }
      param_1[0xc] = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
    }
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x13) != 0) {
      uVar4 = *(uint *)(param_1 + 5) / *(uint *)(param_1 + 0x13);
    }
    uVar3 = (int)param_1[0x16] - 1;
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    *(uint *)((long)param_1 + 0xa4) = uVar4;
    lVar7 = param_1[3];
    puVar1 = (uint *)(lVar7 + 0x313);
    iVar2 = *(int *)(lVar7 + 0x30c);
    if ((*puVar1 & 0x400000) != 0) {
      iVar2 = 0;
    }
    *(int *)((long)param_1 + 0xb4) = iVar2 + *(int *)((long)param_1 + 0xb4);
    *(uint *)(param_1 + 5) = iVar2 + *(uint *)(param_1 + 5);
    *(undefined4 *)(lVar7 + 0x30c) = 0;
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
  return iVar5;
}


