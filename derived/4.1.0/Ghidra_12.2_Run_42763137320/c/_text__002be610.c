/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002be610; name: FUN_.text__002be610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002be610(ulong param_1,uint *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_b0;
  long local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  pMVar1 = (MutexType *)(param_1 + 0x98);
  nn::os::LockMutex(pMVar1);
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  puVar6 = *(uint **)(param_1 + 8);
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar7 = (long)puVar3 - (long)puVar6;
  if (0 < (long)uVar7) {
    uVar4 = *param_2;
    puVar8 = puVar3;
    do {
      uVar7 = uVar7 / 0x60;
      puVar9 = puVar6 + uVar7 * 0xc;
      if (*puVar9 == uVar4) {
        if (puVar9 != puVar3) {
          uVar10 = *(undefined8 *)(puVar6 + uVar7 * 0xc + 2);
          uVar11 = *(undefined8 *)(puVar6 + uVar7 * 0xc + 8);
          local_48 = 0;
          local_b0 = _DAT_008a23a8 + 0x10;
          lVar2 = _DAT_008a2398 + 0x10;
          local_50 = 0;
          local_58 = lVar2;
          uStack_44 = uVar4;
          if (uVar4 == 0) {
            local_48 = 0;
          }
          else {
            uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
            uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
            uVar7 = (ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            do {
              (**(code **)(local_58 + 0x10))(&local_58);
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            local_48 = uStack_44;
          }
          local_68 = CONCAT44(uStack_44,local_48);
          local_98 = _DAT_008a2380 + 0x10;
          local_80 = 0;
          uStack_60 = 0;
          local_a8 = _DAT_008a23b0 + 0x10;
          uStack_a0 = 0;
          local_90 = uVar10;
          uStack_88 = uVar11;
          local_78 = lVar2;
          uStack_70 = local_50;
          uVar4 = FUN__text__002be7c8(&local_b0);
          param_1 = (ulong)(uVar4 >> 8 & 0xff);
          goto LAB__text__002be74c;
        }
        break;
      }
      if (*puVar9 < uVar4) {
        puVar6 = puVar9 + 0xc;
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      uVar7 = (long)puVar8 - (long)puVar6;
    } while (0 < (long)uVar7);
  }
  uVar4 = 0;
LAB__text__002be74c:
  nn::os::UnlockMutex(pMVar1);
  return uVar4 & 0xff | (int)param_1 << 8;
}


