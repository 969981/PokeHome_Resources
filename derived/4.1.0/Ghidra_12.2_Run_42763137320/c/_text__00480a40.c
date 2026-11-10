/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00480a40; name: FUN_.text__00480a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00480a40(int *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  long local_40;
  long lStack_38;
  long local_30;
  long local_28;
  
  if (*(int *)(param_2 + 0x148) == 1) {
    lVar2 = *(long *)(param_2 + 0x140);
    local_48 = *(uint *)(lVar2 + 0xc0);
    local_50 = *(undefined8 *)(lVar2 + 0xf8);
    uStack_44 = local_48;
    if ((*(uint *)(lVar2 + 0xb8) & 0xf00) != 0x300) {
      uStack_44 = *(uint *)(lVar2 + 0xb8);
    }
  }
  else {
    local_50 = 0;
    local_48 = 0x300;
    uStack_44 = 0x300;
  }
  local_40 = param_2 + 0xc;
  lStack_38 = param_2 + 0x14;
  local_30 = param_2;
  lVar2 = FUN__text__0045c1e4(param_2);
  local_28 = 0;
  if (lVar2 != 0) {
    local_28 = lVar2 + 0x98;
  }
  local_60 = (**(code **)(**(long **)(param_2 + 0x150) + 0x10))();
  if (*param_1 == 0) {
    local_68 = 0;
    local_58 = 0;
    uVar3 = *_DAT_008a4678;
    uVar1 = FUN__text__00478e4c(*(undefined8 *)(*(long *)(param_2 + 0x150) + 8));
    FUN__text__0048efd0(uVar3,uVar1,&local_68);
    return;
  }
  FUN__text__0048d820(*_DAT_008a45d8,*param_1,&local_68);
  return;
}


