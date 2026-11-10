/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405b80; name: FUN_.text__00405b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00405b80(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(param_1 & 0x7f);
  if (*(uint *)(_DAT_008a4cc0 + uVar3 * 4) == param_1) {
    lVar2 = tpidr_el0;
    uVar1 = 0;
    if ((int)param_1 < 0) {
      uVar1 = param_2;
    }
    *(uint *)(lVar2 + 0x68 + uVar3 * 4) = param_1;
    *(undefined8 *)(lVar2 + 0x28 + uVar3 * 8) = uVar1;
  }
  return;
}


