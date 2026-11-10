/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ae230; name: FUN_.text__002ae230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002ae230(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long local_b0 [4];
  long local_90;
  long lStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  pMVar1 = (MutexType *)(param_1 + 0x98);
  nn::os::LockMutex(pMVar1);
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  puVar4 = *(uint **)(param_1 + 8);
  puVar2 = *(uint **)(param_1 + 0x10);
  uVar5 = (long)puVar2 - (long)puVar4;
  if ((long)uVar5 < 1) {
LAB__text__002ae410:
    iVar9 = (int)param_1;
    uVar8 = 0;
LAB__text__002ae414:
    nn::os::UnlockMutex(pMVar1);
    return uVar8 | iVar9 << 8;
  }
  uVar8 = *param_2;
  puVar6 = puVar2;
LAB__text__002ae2a0:
  uVar5 = uVar5 / 0x60;
  puVar7 = puVar4 + uVar5 * 0xc;
  if (*puVar7 != uVar8) goto code_r0x002ae2b8;
  if (puVar7 != puVar2) {
    lVar11 = *(long *)(puVar4 + uVar5 * 0xc + 2);
    lVar10 = *(long *)(puVar4 + uVar5 * 0xc + 8);
    local_b0[0] = 0x879ff0;
    local_48 = 0;
    local_58 = 0x87a060;
    local_50 = 0;
    uStack_44 = uVar8;
    if (uVar8 == 0) {
      local_48 = 0;
    }
    else {
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333);
      uVar5 = (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      do {
        (**(code **)(local_58 + 0x10))(&local_58);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      local_48 = uStack_44;
    }
    uVar5 = 0;
    local_78 = 0x87a060;
    local_68 = CONCAT44(uStack_44,local_48);
    local_b0[3] = _DAT_008a2380 + 0x10;
    local_80 = 0;
    uStack_60 = 0;
    local_b0[1] = 0x87a020;
    local_b0[2] = 0;
    param_1 = 0x879ff0;
    local_90 = lVar11;
    lStack_88 = lVar10;
    uStack_70 = local_50;
    if ((lVar11 != 0) && (0 < lVar10)) {
      uVar5 = FUN__text__002aa0b0(local_b0 + 1,&local_58,1,0);
      uVar5 = uVar5 & 0xffffffff;
      param_1 = local_b0[0];
    }
    lVar10 = (**(code **)(param_1 + 0x10))(local_b0);
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    if ((uVar5 & 1) != 0) {
      if ((char)local_58 == '\x02') {
        iVar9 = 1;
      }
      else {
        if ((char)local_58 != '\x01') goto LAB__text__002ae410;
        iVar9 = 0;
      }
      uVar8 = 1;
      goto LAB__text__002ae414;
    }
  }
  goto LAB__text__002ae410;
code_r0x002ae2b8:
  if (*puVar7 < uVar8) {
    puVar4 = puVar7 + 0xc;
    puVar7 = puVar6;
  }
  puVar6 = puVar7;
  uVar5 = (long)puVar6 - (long)puVar4;
  if ((long)uVar5 < 1) goto LAB__text__002ae410;
  goto LAB__text__002ae2a0;
}


