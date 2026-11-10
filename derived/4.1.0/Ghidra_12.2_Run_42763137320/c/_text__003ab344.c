/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ab344; name: FUN_.text__003ab344
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ab344(long *param_1)

{
  long lVar1;
  undefined4 local_34;
  long local_18;
  
  FUN__text__003a1464();
  lVar1 = _DAT_008a3558;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x2a] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[0x45] = 0x70f683;
  param_1[0x49] = 0;
  param_1[0x4b] = 0x70f683;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0x70f683;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0x70f683;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 8;
  local_34 = 0x21;
  param_1[9] = lVar1 + 0x100;
  param_1[10] = lVar1 + 0x140;
  param_1[0x44] = -0x340d631b7bddd9bb;
  param_1[0x4a] = -0x340d631b7bddd9bb;
  param_1[0x50] = -0x340d631b7bddd9bb;
  param_1[0x56] = -0x340d631b7bddd9bb;
  param_1[0x3d] = 0;
  param_1[0x3e] = -0x340d631b7bddd9bb;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x3f] = 0x70f683;
  param_1[0x40] = 0;
  FUN__text__00111970(&local_18,param_1[1],&local_34);
  if (param_1[0x3d] != 0) {
    (**(code **)(*(long *)(param_1[0x3d] + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x42) = 8;
  local_34 = 0x21;
  param_1[0x3d] = local_18;
  FUN__text__00111970(&local_18,param_1[1],&local_34);
  if (param_1[0x43] != 0) {
    (**(code **)(*(long *)(param_1[0x43] + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x48) = 8;
  local_34 = 0x21;
  param_1[0x43] = local_18;
  FUN__text__00111970(&local_18,param_1[1],&local_34);
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x4e) = 8;
  local_34 = 0x21;
  param_1[0x49] = local_18;
  FUN__text__00111970(&local_18,param_1[1],&local_34);
  if (param_1[0x4f] != 0) {
    (**(code **)(*(long *)(param_1[0x4f] + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x54) = 8;
  local_34 = 0x21;
  param_1[0x4f] = local_18;
  FUN__text__00111970(&local_18,param_1[1],&local_34);
  if (param_1[0x55] != 0) {
    (**(code **)(*(long *)(param_1[0x55] + 0x48) + 0x18))();
  }
  param_1[0x55] = local_18;
  return;
}


