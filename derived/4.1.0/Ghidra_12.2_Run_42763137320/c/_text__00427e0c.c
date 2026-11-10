/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00427e0c; name: FUN_.text__00427e0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00427e0c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long *plVar6;
  int local_58;
  undefined4 local_54;
  float local_50 [4];
  int local_24;
  
  (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
  if (param_2 < 2) {
    if (*(int *)(param_1 + 0x60) != 0) {
      if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
        *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x90))();
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))();
    bVar5 = *(byte *)(param_1 + 0xdc) | 0x10;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0xdc);
  }
  *(byte *)(param_1 + 0xdc) = bVar5 | 0x20;
  FUN__text__004de4c0(param_1 + 0x90,param_1 + 0x24,
                      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x2b0));
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x60);
    iVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_24);
    local_58 = 0;
    if (iVar3 == 2) {
      local_54 = 2;
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,local_50);
      local_54 = 0x11;
      uVar1 = local_24 + iVar2;
      local_58 = (int)((float)uVar1 / local_50[0]);
      if (iVar3 != 0x11) {
        uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
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


