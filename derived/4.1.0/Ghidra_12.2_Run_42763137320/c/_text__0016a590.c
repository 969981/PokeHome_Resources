/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016a590; name: FUN_.text__0016a590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016a590(byte param_1)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = _DAT_0089f560;
  *(byte *)(*_DAT_0089f560 + 0x50) = param_1;
  if (param_1 - 1 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0016a5cc */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0016a5d8 + (ulong)*(byte *)((ulong)(param_1 - 1) + 0x7252c4) * 4))();
    return;
  }
  FUN__text__0015b020(2);
  FUN__text__00167a0c(DAT_008e1530);
  FUN__text__00169c44(DAT_008e1570);
  FUN__text__00166670(DAT_008e1530,*(undefined8 *)(DAT_008e1518 + 8));
  if (DAT_008e1650 == 0) {
    return;
  }
  uVar1 = *(byte *)(*plVar2 + 0x50) - 1;
  if (uVar1 < 0xb) {
    FUN__text__00157e4c(DAT_008e1650,*(undefined4 *)((long)(char)uVar1 * 4 + 0x725374));
    return;
  }
  FUN__text__00157e4c(DAT_008e1650,0);
  return;
}


