/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307bd0; name: FUN_.text__00307bd0
 */


uint FUN__text__00307bd0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN__text__006312d8(*(undefined8 *)(param_1 + 0x58));
  if (((uVar1 & 0xfffffffe) == 0x30) &&
     (uVar1 = FUN__text__00632408(*(undefined8 *)(param_1 + 0x58)), uVar1 < 100)) {
    uVar1 = FUN__text__006315dc(*(undefined8 *)(param_1 + 0x58),1);
    uVar2 = FUN__text__006315dc(*(undefined8 *)(param_1 + 0x58),0);
    uVar3 = FUN__text__006315dc(*(undefined8 *)(param_1 + 0x58),2);
    uVar4 = FUN__text__006315dc(*(undefined8 *)(param_1 + 0x58),3);
    uVar5 = FUN__text__006315dc(*(undefined8 *)(param_1 + 0x58),4);
    uVar6 = FUN__text__006315dc(*(undefined8 *)(param_1 + 0x58),5);
    return (uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6) & 1;
  }
  return 0;
}


