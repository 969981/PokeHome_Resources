/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ae970; name: FUN_.text__002ae970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002ae970(long param_1,uint *param_2,char *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long local_c0;
  long local_b8 [4];
  long local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  if (*(long *)(param_2 + 8) != 1) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x78));
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) {
      lVar3 = 0x18;
      if (*(long *)(param_2 + 6) != 0) {
        lVar3 = 0x20;
      }
      (**(code **)(*plVar2 + lVar3))(plVar2,param_2);
    }
    FUN__text__002aa604(param_2,*(undefined8 *)(param_1 + 0x38),1);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  }
  lVar3 = _DAT_008a23d8;
  lVar6 = *(long *)(param_2 + 2);
  uVar1 = 0;
  if ((lVar6 != 0) && (*(long *)(param_2 + 4) != 0)) {
    *(undefined1 *)(param_2 + 10) = 1;
    lVar7 = *(long *)(param_2 + 8);
    lVar3 = lVar3 + 0x10;
    uStack_54 = *param_2;
    local_58 = 0;
    local_68 = 0x87a060;
    local_60 = 0;
    local_c0 = lVar3;
    if (uStack_54 == 0) {
      local_58 = 0;
    }
    else {
      uVar1 = uStack_54 - (uStack_54 >> 1 & 0x55555555);
      uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
      uVar4 = (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      do {
        (**(code **)(local_68 + 0x10))(&local_68);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      local_58 = uStack_54;
    }
    local_90 = 0;
    local_88 = 0x87a060;
    local_78 = CONCAT44(uStack_54,local_58);
    uStack_70 = 0;
    local_b8[0] = _DAT_008a23b0 + 0x10;
    local_b8[1] = 0;
    uVar5 = 1;
    if (*param_3 != '\0') {
      uVar5 = 2;
    }
    local_b8[2] = 0x87a088;
    local_68 = CONCAT71(local_68._1_7_,uVar5);
    local_b8[3] = lVar6;
    local_98 = lVar7;
    uStack_80 = local_60;
    if (lVar7 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN__text__002aa2d0(local_b8,&local_68,1,0);
      lVar3 = local_c0;
    }
    lVar3 = (**(code **)(lVar3 + 0x10))(&local_c0);
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  return uVar1 & 1;
}


