/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00364040; name: FUN_.text__00364040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00364040(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long local_b0;
  long local_a8 [3];
  long local_90;
  long lStack_88;
  undefined1 local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar6 = *(uint **)(param_1 + 8);
  puVar2 = *(uint **)(param_1 + 0x10);
  uVar8 = (long)puVar2 - (long)puVar6;
  if ((long)uVar8 < 1) {
LAB__text__00364174:
    nn::os::UnlockMutex(pMVar1);
LAB__text__0036417c:
    iVar10 = (int)param_1;
    uVar9 = 0;
LAB__text__00364180:
    nn::os::UnlockMutex(pMVar1);
    return uVar9 | iVar10 << 8;
  }
  puVar7 = puVar2;
LAB__text__003640a4:
  puVar3 = puVar6 + (uVar8 >> 6) * 8;
  if (*puVar3 != *param_2) goto code_r0x003640b8;
  if (puVar3 != puVar2) {
    nn::os::UnlockMutex(pMVar1);
    local_90 = *(long *)(puVar3 + 2);
    lStack_88 = *(long *)(puVar3 + 6);
    param_1 = _DAT_008a2ee8 + 0x10;
    uStack_44 = *puVar3;
    local_78 = _DAT_008a2ed8 + 0x10;
    local_48 = 0;
    local_50 = 0;
    local_b0 = param_1;
    local_58 = local_78;
    if (uStack_44 == 0) {
      local_48 = 0;
    }
    else {
      uVar9 = uStack_44 - (uStack_44 >> 1 & 0x55555555);
      uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
      uVar8 = (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      do {
        (**(code **)(local_58 + 0x10))(&local_58);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      local_48 = uStack_44;
    }
    uVar8 = 0;
    local_68 = CONCAT44(uStack_44,local_48);
    local_a8[2] = _DAT_008a2ec0 + 0x10;
    local_80 = 0;
    uStack_60 = 0;
    local_a8[0] = _DAT_008a2ef0 + 0x10;
    local_a8[1] = 0;
    uStack_70 = local_50;
    if ((local_90 != 0) && (0 < lStack_88)) {
      uVar8 = FUN__text__00358180(local_a8,&local_58,1,0);
      uVar8 = uVar8 & 0xffffffff;
      param_1 = local_b0;
    }
    lVar5 = (**(code **)(param_1 + 0x10))(&local_b0);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    if ((uVar8 & 1) != 0) {
      if ((char)local_58 == '\x02') {
        iVar10 = 1;
      }
      else {
        if ((char)local_58 != '\x01') goto LAB__text__0036417c;
        iVar10 = 0;
      }
      uVar9 = 1;
      goto LAB__text__00364180;
    }
    goto LAB__text__0036417c;
  }
  goto LAB__text__00364174;
code_r0x003640b8:
  if (*puVar3 < *param_2) {
    puVar6 = puVar3 + 8;
    puVar3 = puVar7;
  }
  puVar7 = puVar3;
  uVar8 = (long)puVar7 - (long)puVar6;
  if ((long)uVar8 < 1) goto LAB__text__00364174;
  goto LAB__text__003640a4;
}


