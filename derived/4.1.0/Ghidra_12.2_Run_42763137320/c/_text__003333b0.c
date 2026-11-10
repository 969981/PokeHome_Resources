/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003333b0; name: FUN_.text__003333b0
 */


void FUN__text__003333b0(int param_1)

{
  long lVar1;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  
  lVar1 = FUN__text__00321ac0();
  *(undefined1 *)(lVar1 + 0x934d4) = 1;
  FUN__text__0034a504(&local_40);
  local_40 = 0x200000002;
  local_30 = 0x49093d0a743ffc18;
  if (param_1 != 0x4e21) {
    local_30 = 0xdf00ce37d0b3d414;
  }
  local_38 = param_1;
  FUN__text__00332d00(&local_40);
  return;
}


