/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004587e0; name: FUN_.text__004587e0
 */


void FUN__text__004587e0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    lVar2 = param_1[1];
    iVar1 = *(int *)(lVar2 + 0xd8) + 1;
    *(int *)(lVar2 + 0xd8) = iVar1;
    if ((*(int *)(lVar2 + 0xc4) != 3 && *(int *)(lVar2 + 0xd0) <= iVar1) &&
       (*(long *)(lVar2 + 0xa8) != 0)) {
      uVar3 = *(undefined4 *)(*(long *)(lVar2 + 0xa8) + 0xc);
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      *(undefined4 *)(lVar2 + 200) = uVar3;
    }
  }
  return;
}


