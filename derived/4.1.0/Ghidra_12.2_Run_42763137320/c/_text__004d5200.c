/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d5200; name: FUN_.text__004d5200
 */


void FUN__text__004d5200(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long alStack_410 [128];
  
  uVar1 = *(uint *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    uVar3 = 0;
    param_3 = 0;
    do {
      if (((*(byte *)(lVar4 + 0x198) ^ 0xff) & 3) != 0 && (*(byte *)(lVar4 + 0x198) & 4) != 0) {
        iVar2 = *(int *)(lVar4 + 0x148);
        *(long *)((long)alStack_410 + (uVar3 * 8 - ((ulong)uVar1 * 8 + 0xf & 0xffffffff0)) + 0x400)
             = lVar4;
        uVar3 = (ulong)((int)uVar3 + 1);
        param_3 = (ulong)(uint)(iVar2 + (int)param_3);
      }
      lVar4 = *(long *)(lVar4 + 0x18);
    } while (lVar4 != 0);
    if ((int)uVar3 != 0) {
      FUN__text__004d4f40();
      return;
    }
  }
  FUN__text__00413d04(param_1,param_3);
  return;
}


