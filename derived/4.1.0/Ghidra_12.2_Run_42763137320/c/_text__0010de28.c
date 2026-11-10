/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010de28; name: FUN_.text__0010de28
 */


void FUN__text__0010de28(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x9d0);
  if (iVar1 == 2) {
    FUN__text__0010e020(param_1);
    uVar2 = 3;
  }
  else if (iVar1 == 1) {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x170) == '\0'))
    {
      return;
    }
    if ((*(long *)(param_1 + 0x168) != 0) && (*(char *)(*(long *)(param_1 + 0x168) + 0x170) == '\0')
       ) {
      return;
    }
    if ((*(long *)(param_1 + 0x278) != 0) && (*(char *)(*(long *)(param_1 + 0x278) + 0x170) == '\0')
       ) {
      return;
    }
    if ((*(long *)(param_1 + 0x388) != 0) && (*(char *)(*(long *)(param_1 + 0x388) + 0x170) == '\0')
       ) {
      return;
    }
    if ((*(long *)(param_1 + 0x498) != 0) && (*(char *)(*(long *)(param_1 + 0x498) + 0x170) == '\0')
       ) {
      return;
    }
    if ((*(long *)(param_1 + 0x5a8) != 0) && (*(char *)(*(long *)(param_1 + 0x5a8) + 0x170) == '\0')
       ) {
      return;
    }
    if ((*(long *)(param_1 + 0x6b8) != 0) && (*(char *)(*(long *)(param_1 + 0x6b8) + 0x170) == '\0')
       ) {
      return;
    }
    if ((*(long *)(param_1 + 0x7c8) != 0) && (*(char *)(*(long *)(param_1 + 0x7c8) + 0x170) == '\0')
       ) {
      return;
    }
    uVar2 = 2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    FUN__text__0010df04(param_1);
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x9d0) = uVar2;
  return;
}


