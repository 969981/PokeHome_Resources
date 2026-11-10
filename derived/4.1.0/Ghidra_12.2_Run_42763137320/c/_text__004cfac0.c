/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfac0; name: FUN_.text__004cfac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cfac0(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulong uVar3;
  
  puVar1 = _DAT_008a4648;
  pbVar2 = *(byte **)(param_1 + 0x18);
  if (pbVar2 != (byte *)0x0) {
    uVar3 = (ulong)*pbVar2;
    if (*pbVar2 != 0) {
      pbVar2 = pbVar2 + (uVar3 & 0xf8);
      do {
        pbVar2 = pbVar2 + 0x10;
        if (*(long *)pbVar2 != 0) {
          FUN__text__0042f5a0(*puVar1,*(long *)pbVar2,param_1);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__004cfb34;
    }
    FUN__text__00400fc0(0);
  }
LAB__text__004cfb34:
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


