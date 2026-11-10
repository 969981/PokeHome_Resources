/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc7e4; name: FUN_.text__004dc7e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004dc7e4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  int local_5c;
  undefined4 local_58;
  float local_54 [4];
  int local_44;
  
  iVar3 = 1;
  if (((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) && (DAT_00ae9a30 == '\0')) {
    plVar6 = *(long **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,local_54);
    if (iVar3 - 0x2dU < 2) {
      uVar1 = (int)local_54[0] + iVar2;
      uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
      if (uVar1 < uVar4) {
        iVar3 = 0x3f;
        goto LAB__text__004dc87c;
      }
    }
    else if (iVar3 != 0x11) goto LAB__text__004dc87c;
    iVar3 = 1;
  }
LAB__text__004dc87c:
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_44);
    local_5c = 0;
    if (iVar5 == 2) {
      local_58 = 2;
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,local_54);
      local_58 = 0x11;
      uVar1 = local_44 + iVar2;
      local_5c = (int)((float)uVar1 / local_54[0]);
      if (iVar5 != 0x11) {
        uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
        local_58 = 0x11;
        if (uVar1 < uVar4) {
          local_58 = 1;
        }
      }
    }
    FUN__text__0048ebe0(*_DAT_008a4638,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x280),param_1,
                        &local_5c);
  }
  return iVar3;
}


