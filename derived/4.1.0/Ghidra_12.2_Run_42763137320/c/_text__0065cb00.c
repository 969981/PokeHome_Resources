/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065cb00; name: FUN_.text__0065cb00
 */


void FUN__text__0065cb00(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0x60) != 2) {
    *(undefined4 *)(lVar2 + 0x60) = 2;
    FUN__text__0066dba0(lVar2);
  }
  FUN__text__00656b90((long *)(param_1 + 0x40),plVar1,0);
  FUN__text__0065a050(lVar2,0,6);
  return;
}


