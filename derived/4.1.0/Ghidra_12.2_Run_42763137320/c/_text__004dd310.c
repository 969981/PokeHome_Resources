/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd310; name: FUN_.text__004dd310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004dd310(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int local_58;
  undefined4 local_54;
  float local_50 [4];
  int local_24;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x70))();
  if ((param_2 < 2) && (*(int *)(param_1 + 0x68) != 0)) {
    if ((*(byte *)(param_1 + 0x82) >> 1 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x90))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,&local_24);
    local_58 = 0;
    if (iVar3 == 2) {
      local_54 = 2;
    }
    else {
      (**(code **)(*plVar5 + 0x28))(plVar5,local_50);
      local_54 = 0x11;
      uVar1 = local_24 + iVar2;
      local_58 = (int)((float)uVar1 / local_50[0]);
      if (iVar3 != 0x11) {
        uVar4 = (**(code **)(*plVar5 + 0x60))(plVar5);
        local_54 = 0x11;
        if (uVar1 < uVar4) {
          local_54 = 1;
        }
      }
    }
    FUN__text__0048ebe0(*_DAT_008a4638,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x280),param_1,
                        &local_58);
  }
  return;
}


