/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ddb30; name: FUN_.text__003ddb30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__003ddb30(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar7 = (uint *)*param_1;
  if (puVar7 == (uint *)0x0) {
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_68 = uRam0000000000724788;
    local_70 = _DAT_00724780;
    uStack_58 = uRam0000000000724ca8;
    uStack_60 = _DAT_00724ca0;
    uVar1 = FUN__text__003dd89c(param_1,&local_70);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
    puVar7 = (uint *)*param_1;
    uVar1 = *puVar7;
    if ((uVar1 & 1) != 0) goto LAB__text__003ddbc8;
LAB__text__003ddb58:
    if ((uVar1 >> 1 & 1) != 0) {
      return 0x72;
    }
    if (*(long *)(puVar7 + 2) != 0) {
      lVar3 = FUN__text__003d83bc();
      if (lVar3 != 0) {
        return 0x72;
      }
      puVar7 = (uint *)*param_1;
    }
  }
  else {
    uVar1 = *puVar7;
    if ((uVar1 & 1) == 0) goto LAB__text__003ddb58;
LAB__text__003ddbc8:
    if (*(long *)(puVar7 + 2) != 0) {
      return 0x72;
    }
  }
  if (puVar7[0x12] == 1) {
LAB__text__003ddce8:
    puVar7 = (uint *)*param_1;
    uVar1 = *puVar7;
    if (((uVar1 & 1) != 0) || (lVar3 = *(long *)(puVar7 + 2), lVar3 == 0)) {
      plVar6 = operator_new(0x10,_DAT_008a37f8);
      if (plVar6 == (long *)0x0) {
        return 0xc;
      }
      FUN__text__003d74d8();
      local_70 = CONCAT44(local_70._4_4_,(uint)((*(uint *)(*param_1 + 0x50) & 0xfffffffd) == 0));
      uVar1 = FUN__text__003d7850(plVar6,&local_70);
      if (uVar1 != 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        return (ulong)uVar1;
      }
      pbVar8 = (byte *)*param_1;
      if (((*pbVar8 & 1) != 0) && (pvVar10 = *(void **)(pbVar8 + 8), pvVar10 != (void *)0x0)) {
        FUN__text__003dd7f0(pvVar10);
        operator_delete(pvVar10);
        pbVar8 = (byte *)*param_1;
      }
      *(long **)(pbVar8 + 8) = plVar6;
      puVar7 = (uint *)*param_1;
      uVar1 = *puVar7;
      lVar3 = *(long *)(puVar7 + 2);
    }
    *puVar7 = uVar1 & 0xfffffffe;
    uVar5 = FUN__text__003d7938(lVar3,param_2);
    return uVar5;
  }
  if (puVar7[0x12] != 2) {
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 == *(long *)(param_2 + 0x18)) {
      FUN__text__003d6818(param_2);
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == *(long *)(param_2 + 0x18)) goto LAB__text__003ddc04;
    }
    uVar9 = (uint)*(byte *)(*(long *)(param_2 + 0x28) + lVar3);
    uVar1 = uVar9 - 9;
    if (uVar1 < 0x73) {
                    /* WARNING: Could not emulate address calculation at 0x003ddcdc */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x73ab1d) * 4 + 0x3ddc04))();
      return uVar5;
    }
    if (uVar9 == 0xef) {
      FUN__text__003d6864(param_2,3);
      FUN__text__003dde5c(param_2);
      iVar2 = FUN__text__003dde5c(param_2);
      if ((iVar2 == 0xbb) && (iVar2 = FUN__text__003dde5c(param_2), iVar2 == 0xbf)) {
        FUN__text__003d6a10(param_2);
        goto LAB__text__003ddce8;
      }
      FUN__text__003d6a10(param_2);
    }
  }
LAB__text__003ddc04:
  puVar7 = (uint *)*param_1;
  uVar1 = *puVar7;
  if (((uVar1 & 1) == 0) || (*(long *)(puVar7 + 2) == 0)) {
    puVar4 = operator_new(0x100,_DAT_008a37f8);
    if (puVar4 == (undefined8 *)0x0) {
      return 0xc;
    }
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 0;
    if (((*puVar7 & 1) == 0) && (*(long **)(puVar7 + 2) != (long *)0x0)) {
      (**(code **)(**(long **)(puVar7 + 2) + 8))();
      puVar7 = (uint *)*param_1;
    }
    *(undefined8 **)(puVar7 + 2) = puVar4;
    puVar7 = (uint *)*param_1;
    uVar1 = *puVar7;
  }
  *puVar7 = uVar1 | 1;
  **(long **)(*param_1 + 8) = param_2;
  return 0;
}


