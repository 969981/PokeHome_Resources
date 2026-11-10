/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006669f8; name: FUN_.text__006669f8
 */


undefined8 FUN__text__006669f8(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte abStack_b0 [128];
  
  if ((param_3 & 0xffffffffffffff01) != 1) {
    return 0x2b;
  }
  memset(abStack_b0,0,0x80);
  param_3 = param_3 - 1;
  uVar2 = FUN__text__006668b8(param_1,abStack_b0,param_3 >> 1);
  if ((int)uVar2 == 0) {
    if (param_3 != 0) {
      pbVar3 = abStack_b0;
      puVar4 = param_2;
      do {
        bVar1 = *pbVar3;
        param_3 = param_3 - 2;
        *puVar4 = *(undefined1 *)((ulong)(bVar1 >> 4) + 0x71e008);
        param_2 = puVar4 + 2;
        puVar4[1] = *(undefined1 *)(((ulong)bVar1 & 0xf) + 0x71e008);
        pbVar3 = pbVar3 + 1;
        puVar4 = param_2;
      } while (param_3 != 0);
    }
    uVar2 = 0;
    *param_2 = 0;
  }
  return uVar2;
}


