/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00217058; name: FUN_.text__00217058
 */


byte FUN__text__00217058(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  
  bVar4 = FUN__text__002155e0();
  if (param_2 != (undefined8 *)0x0 && (5 >= param_3 && ((bVar4 ^ 1) & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x88) + (ulong)param_3 * 100;
    uVar1 = *(undefined8 *)(lVar5 + 0x40);
    *param_2 = *(undefined8 *)(lVar5 + 0x38);
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)(lVar5 + 0x48);
    uVar2 = *(undefined8 *)(lVar5 + 0x50);
    uVar3 = *(undefined8 *)(lVar5 + 0x60);
    param_2[4] = *(undefined8 *)(lVar5 + 0x58);
    param_2[5] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar2;
    uVar1 = *(undefined8 *)(lVar5 + 0x68);
    uVar2 = *(undefined8 *)(lVar5 + 0x70);
    uVar3 = *(undefined8 *)(lVar5 + 0x80);
    param_2[8] = *(undefined8 *)(lVar5 + 0x78);
    param_2[9] = uVar3;
    param_2[6] = uVar1;
    param_2[7] = uVar2;
  }
  return ((param_2 == (undefined8 *)0x0 | 5 < param_3 | bVar4 ^ 1) ^ 0xff) & 1;
}


