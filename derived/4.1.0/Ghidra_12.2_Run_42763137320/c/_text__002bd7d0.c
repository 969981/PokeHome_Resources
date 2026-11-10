/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bd7d0; name: FUN_.text__002bd7d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002bd7d0(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x98));
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    puVar6 = *(uint **)(param_1 + 8);
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar7 = (long)puVar2 - (long)puVar6;
    if (0 < (long)uVar7) {
      uVar4 = *param_2;
      puVar8 = puVar2;
      do {
        uVar7 = uVar7 / 0x60;
        puVar9 = puVar6 + uVar7 * 0xc;
        if (*puVar9 == uVar4) {
          if (puVar9 != puVar2) {
            uVar10 = *(undefined8 *)(puVar6 + uVar7 * 0xc + 2);
            uVar11 = *(undefined8 *)(puVar6 + uVar7 * 0xc + 8);
            local_68 = 0;
            local_d0 = _DAT_008a23a8 + 0x10;
            lVar1 = _DAT_008a2398 + 0x10;
            local_70 = 0;
            local_78 = lVar1;
            uStack_64 = uVar4;
            if (uVar4 == 0) {
              local_68 = 0;
            }
            else {
              uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
              uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
              uVar7 = (ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
              do {
                (**(code **)(local_78 + 0x10))(&local_78);
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
              local_68 = uStack_64;
            }
            local_88 = CONCAT44(uStack_64,local_68);
            local_b8 = _DAT_008a2380 + 0x10;
            local_a0 = 0;
            uStack_80 = 0;
            local_c8 = _DAT_008a23b0 + 0x10;
            uStack_c0 = 0;
            local_b0 = uVar10;
            uStack_a8 = uVar11;
            local_98 = lVar1;
            uStack_90 = local_70;
            cVar3 = FUN__text__002a9db0(&local_d0);
            if ((cVar3 != '\b') && (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) {
              (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
            }
            uVar4 = FUN__text__002bf800(param_1,puVar9,param_3);
            goto LAB__text__002bd938;
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
    uVar4 = FUN__text__002bf9a0(param_1,param_2,param_3);
  }
  else {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
    uVar4 = 0;
  }
LAB__text__002bd938:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x98));
  return uVar4 & 1;
}


