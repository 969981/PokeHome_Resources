/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bbe84; name: FUN_.text__004bbe84
 */


void FUN__text__004bbe84(long param_1)

{
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_8;
  uint uStack_4;
  
  local_8 = FUN__text__004ba030();
  local_30 = &local_8;
  local_28 = *(undefined1 *)(param_1 + 0x58);
  local_27 = 1;
  uStack_4 = *(byte *)(param_1 + 0x36) & 0x1f;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  FUN__text__00434b30(DAT_00ae9a70,*(undefined4 *)(param_1 + 0x30),&local_60,&local_30,1);
  return;
}


