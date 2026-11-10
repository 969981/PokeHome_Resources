/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063d690; name: FUN_.text__0063d690
 */


undefined8 FUN__text__0063d690(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if ((((ulong)param_2 < (ulong)((*(long *)(param_1 + 0x68) - lVar1 >> 4) * -0xf0f0f0f0f0f0f0f)) &&
      (lVar2 = *(long *)(lVar1 + (ulong)param_2 * 0x110 + 8), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x170) != '\0')) {
    return *(undefined8 *)(lVar2 + 400);
  }
  return *(undefined8 *)(*(long *)(lVar1 + 8) + 400);
}


