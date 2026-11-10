/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e7080; name: FUN_.text__004e7080
 */


int FUN__text__004e7080(long param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  
  do {
    iVar4 = 0;
    if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      if ((char)*(byte *)(param_1 + 0x44) < -0x10) {
        iVar4 = 1;
        bVar1 = *(byte *)(param_1 + 0x44) & 0xf0;
        *param_2 = bVar1;
        param_2[1] = *(byte *)(param_1 + 0x44) & 0xf;
        param_2[4] = *(byte *)(param_1 + 0x45);
        bVar2 = *(byte *)(param_1 + 0x46);
        param_2[5] = bVar2;
        if ((bVar1 == 0x90) && (bVar2 == 0)) {
          *param_2 = 0x80;
        }
      }
      else {
        iVar4 = 0;
      }
    }
    *param_3 = *(undefined4 *)(param_1 + 0x5c);
    uVar3 = FUN__text__004e6b40(param_1);
  } while ((iVar4 == 0) && ((uVar3 & 1) != 0));
  return iVar4;
}


