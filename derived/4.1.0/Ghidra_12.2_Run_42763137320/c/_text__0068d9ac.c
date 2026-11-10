/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d9ac; name: FUN_.text__0068d9ac
 */


undefined8 FUN__text__0068d9ac(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 0x2d;
  if (*(char *)(param_1 + 0x30) == '\0' || param_2 != 0x2011) {
    iVar1 = param_2;
  }
  if ((*(char *)(param_1 + 0x2f) == '\0') ||
     (uVar2 = FUN__text__00691184(*(undefined8 *)(param_1 + 0x10),iVar1,
                                  *(undefined2 *)(param_1 + 0x32)), (uVar2 & 1) == 0)) {
    return 0;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  return 1;
}


