/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058e320; name: FUN_.text__0058e320
 */


uint * FUN__text__0058e320(long *param_1,long param_2,ulong *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  ulong local_60;
  undefined1 local_58;
  int local_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 != 0) {
    uVar4 = *(uint *)(param_2 + 0x90);
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar4 / uVar7;
    }
    for (puVar8 = *(uint **)(*param_1 + (ulong)(uVar4 - uVar2 * uVar7) * 8); puVar8 != (uint *)0x0;
        puVar8 = *(uint **)(puVar8 + 2)) {
      if (*puVar8 == uVar4) {
        puVar9 = puVar8 + 0x1e;
        puVar8[0x1c] = puVar8[0x1c] + 1;
        goto LAB__text__0058e4d8;
      }
    }
  }
  puVar8 = (uint *)FUN__text__00400f80(5,0xc0);
  if (puVar8 != (uint *)0x0) {
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar9 = puVar8 + 0x1e;
    puVar8[6] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x2e] = 0;
    puVar8[0x2f] = 0;
    puVar8[0x24] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x19] = *(uint *)(param_2 + 0x8c);
    uVar1 = *(undefined1 *)(param_2 + 0x60);
    iVar3 = FUN__text__0058ea50(puVar9,*(undefined1 *)(param_2 + 0x94),
                                *(undefined1 *)(param_2 + 0x95));
    if (iVar3 == 0) {
      local_60 = *param_3 & 0xfffffffffffffffc;
      uVar7 = (uint)*param_3 & 3;
      local_54 = (int)param_3[1] + uVar7;
      local_58 = (undefined1)(uVar7 << 3);
      iVar3 = FUN__text__0058ea90(puVar8,uVar1,&local_60);
      if (iVar3 == 0) {
        puVar8[0x1c] = puVar8[0x1c] + 1;
        uVar7 = *(uint *)(param_2 + 0x90);
        *puVar8 = uVar7;
        uVar4 = *(uint *)(param_1 + 1);
        if ((uVar4 == 0) ||
           (fVar10 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar10 / (float)uVar4)) {
          FUN__text__0058e6f0(param_1);
          uVar4 = *(uint *)(param_1 + 1);
          if (uVar4 == 0) {
            *param_4 = 0x4a;
            FUN__text__0058e230(puVar8);
            lVar5 = *(long *)(puVar8 + 0x10);
            goto joined_r0x0058e598;
          }
          uVar7 = *puVar8;
        }
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar7 / uVar4;
        }
        lVar5 = (ulong)(uVar7 - uVar2 * uVar4) * 8;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(*param_1 + lVar5);
        *(uint **)(*param_1 + lVar5) = puVar8;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        goto LAB__text__0058e4d8;
      }
      uVar6 = 0x4a;
      if (iVar3 != -0x8b) {
        uVar6 = 0x10;
      }
      *param_4 = uVar6;
      FUN__text__0058e230(puVar8);
      lVar5 = *(long *)(puVar8 + 0x10);
    }
    else {
      *param_4 = 0x10;
      FUN__text__0058e230(puVar8);
      lVar5 = *(long *)(puVar8 + 0x10);
    }
joined_r0x0058e598:
    if (lVar5 != 0) {
      FUN__text__00400fc0(5);
    }
    if (*(long *)(puVar8 + 0xc) != 0) {
      FUN__text__00400fc0(5);
    }
    if (*(long *)(puVar8 + 8) != 0) {
      FUN__text__00400fc0(5);
    }
    if (*(long *)(puVar8 + 4) != 0) {
      FUN__text__00400fc0(5);
    }
    FUN__text__00400fc0(5,puVar8);
  }
  puVar9 = (uint *)0x0;
LAB__text__0058e4d8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return puVar9;
}


