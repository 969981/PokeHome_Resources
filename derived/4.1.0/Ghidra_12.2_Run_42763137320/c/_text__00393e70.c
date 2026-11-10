/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00393e70; name: FUN_.text__00393e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__00393e70(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined1 auVar10 [16];
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
          local_a0 = *(undefined8 *)(puVar4 + 2);
          uStack_98 = *(undefined8 *)(puVar4 + 6);
          local_c0 = _DAT_008a3278 + 0x10;
          uStack_54 = *puVar4;
          local_88 = _DAT_008a3280 + 0x10;
          local_58 = 0;
          local_60 = 0;
          local_68 = local_88;
          if (uStack_54 == 0) {
            local_58 = 0;
          }
          else {
            uVar3 = uStack_54 - (uStack_54 >> 1 & 0x55555555);
            uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
            uVar8 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            do {
              (**(code **)(local_68 + 0x10))(&local_68);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            local_58 = uStack_54;
          }
          local_78 = CONCAT44(uStack_54,local_58);
          lStack_a8 = _DAT_008a3288 + 0x10;
          local_90 = 0;
          local_b0 = 0;
          local_b8 = _DAT_008a3290 + 0x10;
          uStack_70 = 0;
          uStack_80 = local_60;
          auVar10 = FUN__text__00380be0(&local_c0,*param_3,*param_4);
          param_4 = auVar10._8_8_;
          uVar8 = auVar10._0_8_ & 0xffffffffffffff00;
          uVar9 = auVar10._0_8_ & 0xff;
          goto LAB__text__00393fb8;
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
  uVar9 = 0;
  uVar8 = 0;
LAB__text__00393fb8:
  nn::os::UnlockMutex(pMVar1);
  auVar10._0_8_ = uVar8 | uVar9;
  auVar10._8_8_ = param_4;
  return auVar10;
}


