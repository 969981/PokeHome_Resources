/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011b95c; name: FUN_.text__0011b95c
 */


undefined1  [16] FUN__text__0011b95c(long param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return ZEXT816(0);
  }
  local_20 = 0;
  uStack_18 = 0;
  iVar2 = nn::account::GetUserId((Uid *)&local_20,(UserHandle *)(param_1 + 0x58));
  if (iVar2 == 0) {
    auVar1._8_8_ = uStack_18;
    auVar1._0_8_ = local_20;
    return auVar1;
  }
  return ZEXT816(0);
}


