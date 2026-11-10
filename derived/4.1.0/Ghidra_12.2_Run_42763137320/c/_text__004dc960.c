/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc960; name: FUN_.text__004dc960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004dc960(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long local_38;
  
  plVar1 = param_1 + 0xd;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x313) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  puVar4 = _DAT_008a4598;
  do {
    iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x88))
                      ((long *)param_1[0xb],&local_38,plVar1,*puVar4);
    if ((iVar5 != 0x11) && (iVar5 != 0x2d)) {
      if (iVar5 == 0x2e) {
        return 0x3f;
      }
      return 2;
    }
    if (local_38 == 0) {
      return 2;
    }
    iVar5 = (**(code **)(*param_1 + 0x128))(param_1);
  } while (iVar5 == 0x3f);
  if (iVar5 != 1) {
    return iVar5;
  }
  if ((*(byte *)(param_1[3] + 0x315) >> 6 & 1) == 0) {
    iVar6 = (**(code **)(*(long *)param_1[0xb] + 0x78))((long *)param_1[0xb],0);
    iVar5 = *(int *)((long)param_1 + 0x74);
    iVar7 = (**(code **)(*param_1 + 0x138))(param_1,local_38,0);
    uVar3 = ((int)param_1[6] - iVar5) - iVar6;
    param_1[0xc] = param_1[0xc] + (ulong)uVar3;
    *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar3;
    *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar3;
  }
  else {
    iVar5 = FUN__text__004ddcf4(param_1);
    iVar7 = (**(code **)(*param_1 + 0x140))(param_1,iVar5,param_1 + 5);
    if (iVar7 == 1) {
      lVar8 = param_1[3];
      iVar7 = 1;
      *(int *)(lVar8 + 0x30c) = iVar5 - (int)param_1[5];
      puVar2 = (uint *)(lVar8 + 0x313);
      *puVar2 = *puVar2 & 0xfe3fffff;
      iVar5 = (int)*plVar1;
    }
    else {
      iVar7 = 2;
      iVar5 = (int)*plVar1;
    }
    if (iVar5 != 0) {
      if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
        (**(code **)(*(long *)param_1[0xb] + 0x90))();
        *(int *)plVar1 = 0;
      }
      else {
        *(int *)plVar1 = 0;
        *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
      }
    }
  }
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
  return iVar7;
}


