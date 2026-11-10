/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656e8c; name: FUN_.text__00656e8c
 */


/* WARNING: Removing unreachable block (ram,0x00656fe4) */
/* WARNING: Removing unreachable block (ram,0x00656ff8) */
/* WARNING: Removing unreachable block (ram,0x0065700c) */
/* WARNING: Removing unreachable block (ram,0x00657020) */

undefined8 FUN__text__00656e8c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_2 + 0x18) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00656ec0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00656ecc +
                      (ulong)*(byte *)((ulong)*(uint *)(param_2 + 0x18) + 0x7601e1) * 4))();
    return uVar1;
  }
  if (param_1 == 0) {
    uVar1 = 0x17;
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    uVar1 = 0x2b;
    FUN__text__00656d18(param_1);
  }
  return uVar1;
}


