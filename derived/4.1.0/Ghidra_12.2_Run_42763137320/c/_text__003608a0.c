/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003608a0; name: FUN_.text__003608a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__003608a0(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
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
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar6 = *(uint **)(param_1 + 8);
  puVar2 = *(uint **)(param_1 + 0x10);
  uVar8 = (long)puVar2 - (long)puVar6;
  if (0 < (long)uVar8) {
    puVar7 = puVar2;
    do {
      puVar4 = puVar6 + (uVar8 >> 6) * 8;
      if (*puVar4 == *param_2) {
        if (puVar4 != puVar2) {
          nn::os::UnlockMutex(pMVar1);
          local_90 = *(undefined8 *)(puVar4 + 2);
          uStack_88 = *(undefined8 *)(puVar4 + 6);
          local_b0 = _DAT_008a2ee8 + 0x10;
          uStack_44 = *puVar4;
          local_78 = _DAT_008a2ed8 + 0x10;
          local_48 = 0;
          local_50 = 0;
          local_58 = local_78;
          if (uStack_44 == 0) {
            local_48 = 0;
          }
          else {
            uVar3 = uStack_44 - (uStack_44 >> 1 & 0x55555555);
            uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
            uVar8 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            do {
              (**(code **)(local_58 + 0x10))(&local_58);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            local_48 = uStack_44;
          }
          local_68 = CONCAT44(uStack_44,local_48);
          local_98 = _DAT_008a2ec0 + 0x10;
          local_80 = 0;
          uStack_60 = 0;
          local_a8 = _DAT_008a2ef0 + 0x10;
          uStack_a0 = 0;
          uStack_70 = local_50;
          uVar8 = FUN__text__00360a5c(&local_b0);
          uVar9 = uVar8 & 0xffffffffffffff00;
          uVar8 = uVar8 & 0xff;
          goto LAB__text__003609e4;
        }
        break;
      }
      if (*puVar4 < *param_2) {
        puVar6 = puVar4 + 8;
        puVar4 = puVar7;
      }
      puVar7 = puVar4;
      uVar8 = (long)puVar7 - (long)puVar6;
    } while (0 < (long)uVar8);
  }
  nn::os::UnlockMutex(pMVar1);
  uVar8 = 0;
  uVar9 = 0;
LAB__text__003609e4:
  nn::os::UnlockMutex(pMVar1);
  return uVar9 | uVar8;
}


