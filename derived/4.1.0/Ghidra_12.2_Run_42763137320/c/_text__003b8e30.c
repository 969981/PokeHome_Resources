/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8e30; name: FUN_.text__003b8e30
 */


long FUN__text__003b8e30(undefined8 *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  if (lVar3 != lVar2) {
    while (*(char *)(lVar3 + 8) != '\0' || *(int *)(lVar3 + 0xc) != param_2) {
      lVar3 = lVar3 + 0x18;
      if (lVar3 == lVar2) {
        return 0;
      }
    }
  }
  lVar1 = 0;
  if (lVar3 != lVar2) {
    lVar1 = lVar3;
  }
  return lVar1;
}


