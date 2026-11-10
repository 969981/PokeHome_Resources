/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00497780; name: FUN_.text__00497780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00497780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_48;
  long lStack_40;
  undefined4 local_38;
  
  puVar1 = _DAT_008a4640;
  local_38 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x40);
  lStack_40 = param_1 + 0x18;
  FUN__text__0046cff0(*_DAT_008a4640,&local_48,param_1 + 0x20,param_2,param_3);
  if (*(char *)(param_1 + 0x4c) == '\x04') {
    FUN__text__0046d170(*puVar1,&local_48,*(undefined4 *)(param_1 + 0x48),param_2,param_3);
  }
  return;
}


