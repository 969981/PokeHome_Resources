/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436314; name: FUN_.text__00436314
 */


void FUN__text__00436314(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  
  if ((param_4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    *(undefined8 *)(param_2 + 0x10) = 0;
    bVar1 = *(char *)(param_2 + 0x28) != '\0';
  }
  local_58 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined4 *)(param_2 + 0x20);
  local_24[0] = 0;
  local_30 = 0;
  *(undefined1 *)(param_2 + 0x29) = 1;
  local_40 = 0xff;
  local_38 = 0xff;
  local_48 = 0;
  local_5c = param_1;
  FUN__text__004363b0(*(undefined8 *)(param_2 + 8),&local_58,&local_5c,local_24,0,0,bVar1);
  if (bVar1 == false) {
    *(undefined1 *)(param_2 + 0x29) = 0;
  }
  return;
}


