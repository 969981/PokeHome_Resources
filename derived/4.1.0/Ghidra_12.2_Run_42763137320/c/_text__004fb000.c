/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fb000; name: FUN_.text__004fb000
 */


void FUN__text__004fb000(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 auStack_210 [128];
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulong)uVar2;
  lVar3 = (long)auStack_210 + (0x200 - (uVar4 * 4 + 0xf & 0x7fffffff0));
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    if (uVar2 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      puVar7 = (undefined4 *)(lVar5 + 0x50);
      do {
        puVar1 = (undefined4 *)(lVar3 + uVar6 * 4);
        uVar6 = uVar6 + 2;
        *puVar1 = puVar7[-0x12];
        puVar1[1] = *puVar7;
        puVar7 = puVar7 + 0x24;
      } while ((uVar4 & 0xfffffffe) != uVar6);
    }
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(lVar3 + uVar6 * 4) = *(undefined4 *)(lVar5 + uVar6 * 0x48 + 8);
    }
  }
  FUN__text__004cc734(*(long *)(param_1 + 0x78) + 0x150,
                      *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x20),lVar3,uVar4,0,0,0);
  return;
}


