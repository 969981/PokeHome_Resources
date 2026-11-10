/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532df0; name: FUN_.text__00532df0
 */


bool FUN__text__00532df0(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN__text__00400f80(9,(ulong)uVar1 * 0x30);
  if (lVar5 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      if (uVar4 != 0) {
        lVar6 = 0;
        do {
          puVar2 = (undefined4 *)(lVar5 + lVar6);
          *puVar2 = 0;
          *(undefined8 *)(puVar2 + 8) = 0;
          *(undefined1 *)(puVar2 + 10) = 0;
          puVar2[6] = 0;
          *(undefined8 *)(puVar2 + 2) = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
          puVar3 = (undefined4 *)(*param_1 + lVar6);
          *puVar2 = *puVar3;
          *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar3 + 8);
          puVar2[6] = puVar3[6];
          *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(puVar3 + 10);
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          puVar2[4] = puVar3[4];
          puVar2[5] = puVar3[5];
          *puVar3 = 0;
          *(undefined8 *)(puVar3 + 8) = 0;
          puVar3[6] = 0;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
          FUN__text__00532008(*param_1 + lVar6);
          lVar6 = lVar6 + 0x30;
        } while ((ulong)uVar4 * 0x30 != lVar6);
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(9,lVar6);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar5 != 0;
}


