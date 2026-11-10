/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d567c; name: FUN_.text__003d567c
 */


bool FUN__text__003d567c(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    return false;
  }
  bVar2 = *(char *)(lVar3 + 0x170) != '\0';
  bVar1 = bVar2 && *(long *)(param_1 + 0x1b0) == 0;
  if (bVar1) {
    FUN__text__00168178(param_1 + 0x170,lVar3 + 0x60);
    lVar3 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar3 + 400);
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(lVar3 + 0x180);
    uVar4 = *(ulong *)(lVar3 + 0x180);
    *(undefined4 *)(param_1 + 0x1a8) = 1;
    *(ulong *)(param_1 + 0x1b8) = uVar4 >> 1;
  }
  return bVar1 || bVar2;
}


