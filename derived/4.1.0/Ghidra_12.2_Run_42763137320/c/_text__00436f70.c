/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436f70; name: FUN_.text__00436f70
 */


void FUN__text__00436f70(long param_1,int *param_2)

{
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 *local_30;
  int local_28;
  int iStack_24;
  
  local_28 = *(int *)(param_1 + 0x70);
  iStack_24 = *param_2;
  *(int *)(param_1 + 0x70) = iStack_24;
  if (iStack_24 != local_28 && *(int *)(param_1 + 0x60) != 0) {
    local_68 = 0;
    local_50 = 0xff;
    local_48 = 0xff;
    local_60 = 0;
    local_38 = (undefined4)*(undefined8 *)(param_1 + 8);
    local_58 = 0;
    local_40 = 0;
    *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
    *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x04';
    local_30 = &local_68;
    local_34 = (undefined1)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
    FUN__text__00438120(param_1 + 0x58,&local_38);
    *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + -4;
  }
  return;
}


