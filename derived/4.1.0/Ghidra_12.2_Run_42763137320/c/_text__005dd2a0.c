/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd2a0; name: FUN_.text__005dd2a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__005dd2a0(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int local_14;
  
  if (param_1[3] == 0) {
    return 0;
  }
  puVar1 = _DAT_0089f5d0;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x60);
  }
  iVar2 = nn::fs::GetEntryType((DirectoryEntryType *)&local_14,(char *)*puVar1);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (uint)(local_14 == 0) << 1;
  if (local_14 == 1) {
    iVar2 = 1;
  }
  return iVar2;
}


