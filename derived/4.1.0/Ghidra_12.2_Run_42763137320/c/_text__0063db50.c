/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063db50; name: FUN_.text__0063db50
 */


ulong FUN__text__0063db50(int param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = (param_2 & 0xff) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0063db70 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x75aede) * 4 + 0x63db7c))();
    return uVar2;
  }
  if (param_1 == 2) {
    return 0;
  }
  uVar2 = 0;
  do {
    uVar3 = uVar2;
    if ((uVar3 == 0xa0) || (*(int *)(uVar3 * 4 + 0x75b9b0) == param_1)) goto LAB__text__0063dc6c;
    uVar2 = uVar3 + 2;
  } while (*(int *)(uVar3 * 4 + 0x75b9b4) != param_1);
  uVar3 = uVar3 + 1;
LAB__text__0063dc6c:
  return (ulong)(0x9f < uVar3);
}


