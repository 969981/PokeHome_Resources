/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b7e20; name: FUN_.text__002b7e20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002b7e20(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
    puVar5 = *(uint **)(param_1 + 8);
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar6 = (long)puVar2 - (long)puVar5;
    if (0 < (long)uVar6) {
      uVar3 = *param_2;
      puVar7 = puVar2;
      do {
        uVar6 = uVar6 / 0x60;
        puVar8 = puVar5 + uVar6 * 0xc;
        if (*puVar8 == uVar3) {
          if (puVar8 != puVar2) {
            uVar9 = *(undefined8 *)(puVar5 + uVar6 * 0xc + 2);
            uVar10 = *(undefined8 *)(puVar5 + uVar6 * 0xc + 8);
            local_68 = 0;
            local_d0 = _DAT_008a23a8 + 0x10;
            lVar1 = _DAT_008a2398 + 0x10;
            local_70 = 0;
            local_78 = lVar1;
            uStack_64 = uVar3;
            if (uVar3 == 0) {
              local_68 = 0;
            }
            else {
              uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
              uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
              uVar6 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
              do {
                (**(code **)(local_78 + 0x10))(&local_78);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              local_68 = uStack_64;
            }
            local_88 = CONCAT44(uStack_64,local_68);
            local_b8 = _DAT_008a2380 + 0x10;
            local_a0 = 0;
            uStack_80 = 0;
            local_c8 = _DAT_008a23b0 + 0x10;
            uStack_c0 = 0;
            local_b0 = uVar9;
            uStack_a8 = uVar10;
            local_98 = lVar1;
            uStack_90 = local_70;
            uVar6 = FUN__text__002a9db0(&local_d0);
            if ((((uVar6 & 0xff) != 4) || ((uVar6 >> 0x20 != 0 && ((uVar6 & 0xff0000) != 0)))) &&
               (plVar4 = *(long **)(param_1 + 0x58), plVar4 != (long *)0x0)) {
              (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
            }
            uVar3 = FUN__text__002b9520(param_1,puVar8,param_3,param_4);
            goto LAB__text__002b7f8c;
          }
          break;
        }
        if (*puVar8 < uVar3) {
          puVar5 = puVar8 + 0xc;
          puVar8 = puVar7;
        }
        puVar7 = puVar8;
        uVar6 = (long)puVar7 - (long)puVar5;
      } while (0 < (long)uVar6);
    }
    uVar3 = FUN__text__002b96d0(param_1,param_2,param_3,param_4);
  }
  else {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
    uVar3 = 0;
  }
LAB__text__002b7f8c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x98));
  return uVar3 & 1;
}


