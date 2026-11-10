/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b8da0; name: FUN_.text__002b8da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__002b8da0(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

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
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x98));
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
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
          uVar11 = *(undefined8 *)(puVar5 + uVar6 * 0xc + 8);
          local_58 = 0;
          local_c0 = _DAT_008a23a8 + 0x10;
          lVar1 = _DAT_008a2398 + 0x10;
          local_60 = 0;
          local_68 = lVar1;
          uStack_54 = uVar3;
          if (uVar3 == 0) {
            local_58 = 0;
          }
          else {
            uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
            uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
            uVar6 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            do {
              (**(code **)(local_68 + 0x10))(&local_68);
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            local_58 = uStack_54;
          }
          local_78 = CONCAT44(uStack_54,local_58);
          lStack_a8 = _DAT_008a2380 + 0x10;
          local_90 = 0;
          local_b0 = 0;
          local_b8 = _DAT_008a23b0 + 0x10;
          uStack_70 = 0;
          local_a0 = uVar9;
          uStack_98 = uVar11;
          local_88 = lVar1;
          uStack_80 = local_60;
          auVar12 = FUN__text__002b03e8(&local_c0,*param_3,*param_4);
          param_4 = auVar12._8_8_;
          uVar10 = auVar12._0_8_ & 0xffffffffffffff00;
          uVar6 = auVar12._0_8_ & 0xff;
          goto LAB__text__002b8eec;
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
  uVar6 = 0;
  uVar10 = 0;
LAB__text__002b8eec:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x98));
  auVar12._0_8_ = uVar10 | uVar6;
  auVar12._8_8_ = param_4;
  return auVar12;
}


