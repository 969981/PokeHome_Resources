/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a5720; name: FUN_.text__006a5720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a5720(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(short *)(*(long *)(param_3 + 0x68) + 0x30) != 0) {
    lVar3 = *(long *)(*(long *)(param_3 + 0x68) + 0x20);
    lVar2 = (*(code *)*_DAT_008a6960)(0x38,4,*_DAT_008a6970);
    if (lVar2 != 0) {
      *(long *)lVar2 = lVar2;
      *(long *)(lVar2 + 8) = lVar2;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x16) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    if (uVar1 < 0x1c) {
                    /* WARNING: Could not emulate address calculation at 0x006a57cc */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006a57d8 + (ulong)*(byte *)((ulong)uVar1 + 0x7660af) * 4))();
      return;
    }
  }
  return;
}


