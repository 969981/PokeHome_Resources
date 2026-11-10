/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ae450; name: FUN_.text__002ae450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__002ae450(long param_1,uint *param_2)

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
  ulong uVar11;
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
          uVar10 = *(undefined8 *)(puVar5 + uVar6 * 0xc + 8);
          local_48 = 0;
          local_b0 = _DAT_008a23a8 + 0x10;
          lVar1 = _DAT_008a2398 + 0x10;
          local_50 = 0;
          local_58 = lVar1;
          uStack_44 = uVar3;
          if (uVar3 == 0) {
            local_48 = 0;
          }
          else {
            uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
            uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
            uVar6 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
            do {
              (**(code **)(local_58 + 0x10))(&local_58);
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            local_48 = uStack_44;
          }
          local_68 = CONCAT44(uStack_44,local_48);
          local_98 = _DAT_008a2380 + 0x10;
          local_80 = 0;
          uStack_60 = 0;
          local_a8 = _DAT_008a23b0 + 0x10;
          uStack_a0 = 0;
          local_90 = uVar9;
          uStack_88 = uVar10;
          local_78 = lVar1;
          uStack_70 = local_50;
          uVar6 = FUN__text__002ae608(&local_b0);
          uVar11 = uVar6 & 0xffffffffffffff00;
          uVar6 = uVar6 & 0xff;
          goto LAB__text__002ae590;
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
  uVar11 = 0;
LAB__text__002ae590:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x98));
  return uVar11 | uVar6;
}


