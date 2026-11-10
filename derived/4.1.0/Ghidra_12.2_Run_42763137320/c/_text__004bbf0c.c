/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bbf0c; name: FUN_.text__004bbf0c
 */


void FUN__text__004bbf0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_28;
  uint uStack_24;
  
  local_28 = FUN__text__004ba030();
  local_38 = &local_28;
  local_30 = *(undefined1 *)(param_1 + 0x58);
  local_2f = 1;
  uStack_24 = *(byte *)(param_1 + 0x36) & 0x1f;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_50 = 0xff;
  local_48 = 0xff;
  local_68 = param_3;
  FUN__text__00434b30(DAT_00ae9a70,*(undefined4 *)(param_1 + 0x30),&local_68,&local_38,1);
  return;
}


