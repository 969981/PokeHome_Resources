/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437660; name: FUN_.text__00437660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00437660(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  int local_18;
  undefined4 local_14;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != param_2) {
    *(long *)(param_1 + 0x20) = param_2;
    if (lVar2 != 0) {
      FUN__text__004377e0(param_1,lVar2);
      FUN__text__00434700(*_DAT_008a45f0,*(undefined8 *)(lVar2 + 0x28),lVar2);
      if (*(long *)(lVar2 + 8) != 0) {
        FUN__text__00400fc0(0);
      }
      *(long *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 1;
      FUN__text__00400fc0(0x10,lVar2);
      return;
    }
    local_14 = 0;
    FUN__text__00434ed0(*_DAT_008a45f0,*(undefined8 *)(param_2 + 0x28),&local_14);
    local_18 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x18));
      FUN__text__0041a060(local_14,(long *)(param_2 + 8),&local_78,&local_18);
      *(undefined4 *)(param_2 + 0x18) = (undefined4)local_78;
    }
    iVar1 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = local_18;
    if ((local_18 != iVar1) && (*(int *)(param_1 + 0x60) != 0)) {
      local_60 = 0xff;
      local_58 = 0xff;
      local_78 = 0;
      local_48 = (undefined4)*(undefined8 *)(param_1 + 8);
      local_70 = 0;
      local_68 = 0;
      local_50 = 0;
      *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
      *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x04';
      local_40 = &local_78;
      local_44 = (undefined1)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
      local_38 = iVar1;
      iStack_34 = local_18;
      FUN__text__00438120(param_1 + 0x58,&local_48);
      *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + -4;
    }
    FUN__text__004377e0(param_1,0);
  }
  return;
}


