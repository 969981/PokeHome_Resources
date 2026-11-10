/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b9cc0; name: FUN_.text__002b9cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002b9cc0(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  uVar3 = *param_4 + 5;
  if (*(ulong *)(param_2 + 8) != uVar3) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x78));
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) {
      lVar4 = 0x18;
      if (uVar3 <= *(ulong *)(param_2 + 6)) {
        lVar4 = 0x20;
      }
      (**(code **)(*plVar2 + lVar4))(plVar2,param_2);
    }
    FUN__text__002aa604(param_2,*(undefined8 *)(param_1 + 0x38),uVar3);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  }
  lVar4 = *(long *)(param_2 + 2);
  uVar1 = 0;
  if ((lVar4 != 0) && (*(long *)(param_2 + 4) != 0)) {
    *(undefined1 *)(param_2 + 10) = 1;
    uVar5 = *(undefined8 *)(param_2 + 8);
    uStack_44 = *param_2;
    local_b0 = 0x87a0d0;
    local_48 = 0;
    local_58 = 0x87a060;
    local_50 = 0;
    if (uStack_44 == 0) {
      local_48 = 0;
    }
    else {
      uVar1 = uStack_44 - (uStack_44 >> 1 & 0x55555555);
      uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
      uVar3 = (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      do {
        (**(code **)(local_58 + 0x10))(&local_58);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      local_48 = uStack_44;
    }
    local_68 = CONCAT44(uStack_44,local_48);
    local_78 = 0x87a060;
    lStack_98 = _DAT_008a2380 + 0x10;
    local_80 = 0;
    local_a0 = 0;
    local_a8 = 0x87a020;
    uStack_60 = 0;
    local_90 = lVar4;
    uStack_88 = uVar5;
    uStack_70 = local_50;
    uVar1 = FUN__text__002b0020(&local_b0,*param_3,*param_4);
  }
  return uVar1 & 1;
}


