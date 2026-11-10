/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd0b8; name: FUN_.text__005fd0b8
 */


ulong FUN__text__005fd0b8(long *param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 < 0x1a) {
                    /* WARNING: Could not emulate address calculation at 0x005fd0d0 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__005fd0dc + (ulong)*(byte *)((ulong)param_2 + 0x757fcc) * 4))();
    return uVar2;
  }
  lVar3 = *param_1;
  cVar1 = *(char *)(lVar3 + 0x15);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      if (param_2 - 0x1a < 0x2d) {
                    /* WARNING: Could not emulate address calculation at 0x005fd288 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__005fd294 +
                          (ulong)*(byte *)((ulong)(param_2 - 0x1a) + 0x757fe6) * 4))
                          (param_2,lVar3 + 0x1e);
        return uVar2;
      }
      return 0;
    }
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return (ulong)*(byte *)(lVar3 + 0x1e);
}


