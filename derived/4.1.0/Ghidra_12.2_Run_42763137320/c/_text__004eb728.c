/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb728; name: FUN_.text__004eb728
 */


void FUN__text__004eb728(void *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)((long)param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x30) + -1;
    *(int *)(lVar3 + 0x30) = iVar1;
    if (iVar1 == 0) {
      lVar2 = *(long *)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 8) = 0;
      if (lVar2 != 0) {
        FUN__text__004eb980();
        if (*(long *)(lVar3 + 8) != 0) {
          FUN__text__004eb980();
          *(undefined8 *)(lVar3 + 8) = 0;
        }
      }
      FUN__text__00400fc0(0,lVar3);
      operator_delete(param_1);
      return;
    }
  }
  operator_delete(param_1);
  return;
}


