/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8b50; name: FUN_.text__004d8b50
 */


bool FUN__text__004d8b50(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = FUN__text__00400f80(0,(ulong)uVar1 * 0x30);
  if (lVar4 != 0) {
    lVar5 = *param_1;
    if ((lVar5 != 0) && (lVar5 != lVar4)) {
      if (uVar3 != 0) {
        lVar5 = 0;
        do {
          puVar2 = (undefined8 *)(lVar4 + lVar5);
          *puVar2 = 0;
          puVar2[1] = 0x2b00000000;
          *(undefined4 *)(puVar2 + 2) = 0;
          puVar2[3] = 0;
          *(undefined1 *)(puVar2 + 4) = 0;
          *(undefined4 *)((long)puVar2 + 0x24) = 0;
          puVar2[5] = 0;
          FUN__text__004d3d5c(puVar2,*param_1 + lVar5);
          FUN__text__004d3ca8(*param_1 + lVar5);
          lVar5 = lVar5 + 0x30;
        } while ((ulong)uVar3 * 0x30 != lVar5);
        lVar5 = *param_1;
      }
      FUN__text__00400fc0(0,lVar5);
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar4 != 0;
}


