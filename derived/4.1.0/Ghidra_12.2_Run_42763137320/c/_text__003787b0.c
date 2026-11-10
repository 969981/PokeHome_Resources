/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003787b0; name: FUN_.text__003787b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__003787b0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  long local_d0;
  long local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    nn::os::LockMutex(pMVar1);
    puVar6 = *(uint **)(param_1 + 8);
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar8 = (long)puVar2 - (long)puVar6;
    if (0 < (long)uVar8) {
      puVar7 = puVar2;
      do {
        puVar3 = puVar6 + (uVar8 >> 6) * 8;
        if (*puVar3 == *param_2) {
          if (puVar3 != puVar2) {
            nn::os::UnlockMutex(pMVar1);
            local_b0 = *(undefined8 *)(puVar3 + 2);
            uStack_a8 = *(undefined8 *)(puVar3 + 6);
            local_d0 = _DAT_008a2ee8 + 0x10;
            uStack_64 = *puVar3;
            local_98 = _DAT_008a2ed8 + 0x10;
            local_68 = 0;
            local_70 = 0;
            local_78 = local_98;
            if (uStack_64 == 0) {
              local_68 = 0;
            }
            else {
              uVar4 = uStack_64 - (uStack_64 >> 1 & 0x55555555);
              uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
              uVar8 = (ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
              do {
                (**(code **)(local_78 + 0x10))(&local_78);
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              local_68 = uStack_64;
            }
            local_88 = CONCAT44(uStack_64,local_68);
            local_b8 = _DAT_008a2ec0 + 0x10;
            local_a0 = 0;
            uStack_80 = 0;
            local_c8 = _DAT_008a2ef0 + 0x10;
            uStack_c0 = 0;
            uStack_90 = local_70;
            uVar8 = FUN__text__00357e8c(&local_d0);
            if ((((uVar8 & 0xff) != 4) || ((uVar8 >> 0x20 != 0 && ((uVar8 & 0xff0000) != 0)))) &&
               (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) {
              (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
            }
            uVar4 = FUN__text__00378de0(param_1,puVar3,param_3,param_4);
            goto LAB__text__00378924;
          }
          break;
        }
        if (*puVar3 < *param_2) {
          puVar6 = puVar3 + 8;
          puVar3 = puVar7;
        }
        puVar7 = puVar3;
        uVar8 = (long)puVar7 - (long)puVar6;
      } while (0 < (long)uVar8);
    }
    nn::os::UnlockMutex(pMVar1);
    uVar4 = FUN__text__00378ff0(param_1,param_2,param_3,param_4);
  }
  else {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
    uVar4 = 0;
  }
LAB__text__00378924:
  nn::os::UnlockMutex(pMVar1);
  return uVar4 & 1;
}


