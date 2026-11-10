/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466c24; name: FUN_.text__00466c24
 */


undefined8 FUN__text__00466c24(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN__text__00400f80(2,0x28);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 0;
    }
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 **)(param_1 + 0x58) = puVar1;
  }
  uVar2 = puVar1[1];
  uVar3 = 1L << (param_2 & 0x3f);
  puVar1[1] = uVar2 | uVar3;
  if ((uVar2 & uVar3) == 0 && *(long *)(param_1 + 0x70) != 0) {
    FUN__text__0046c6a0();
  }
  return 1;
}


