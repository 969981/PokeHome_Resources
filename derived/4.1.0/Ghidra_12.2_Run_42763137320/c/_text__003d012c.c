/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d012c; name: FUN_.text__003d012c
 */


undefined8 FUN__text__003d012c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if ((((lVar3 == 0) || (*(char *)(lVar3 + 0x170) == '\0')) ||
      (lVar2 = *(long *)(param_1 + 0x128), lVar2 == 0)) ||
     (((*(char *)(lVar2 + 0x170) == '\0' || (lVar1 = *(long *)(param_1 + 0x238), lVar1 == 0)) ||
      (*(char *)(lVar1 + 0x170) == '\0')))) {
    return 0;
  }
  if (*(long *)(param_1 + 0x350) == 0) {
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar3 + 400);
    *(int *)(param_1 + 0x358) = (int)*(undefined8 *)(lVar3 + 0x180);
    lVar3 = *(long *)(param_1 + 0x340);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x340);
  }
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(lVar2 + 400);
    *(int *)(param_1 + 0x348) = (int)*(undefined8 *)(lVar2 + 0x180);
    lVar3 = *(long *)(param_1 + 0x360);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x360);
  }
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar1 + 400);
    *(int *)(param_1 + 0x368) = (int)(*(ulong *)(lVar1 + 0x180) >> 2);
    return 1;
  }
  return 1;
}


