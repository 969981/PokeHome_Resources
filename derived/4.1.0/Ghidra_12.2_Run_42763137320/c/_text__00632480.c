/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632480; name: FUN_.text__00632480
 */


undefined8 FUN__text__00632480(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar1 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  if (param_2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x006324c8 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006324d8 + (ulong)*(byte *)((ulong)param_2 + 0x75a810) * 4))
                      (uVar1,uVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}


