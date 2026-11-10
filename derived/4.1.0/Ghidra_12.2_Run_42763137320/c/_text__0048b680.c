/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048b680; name: FUN_.text__0048b680
 */


bool FUN__text__0048b680(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar5 + (uVar5 >> 1);
  if (uVar5 == 0) {
    iVar1 = 1;
  }
  lVar6 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar5) * 0x18);
  if (lVar6 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar6)) {
      if (uVar4 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined4 *)(lVar6 + lVar7);
          *(undefined8 *)(puVar2 + 2) = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
          puVar3 = (undefined4 *)(*param_1 + lVar7);
          lVar7 = lVar7 + 0x18;
          *puVar2 = *puVar3;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          puVar2[4] = puVar3[4];
          puVar2[5] = puVar3[5];
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
        } while ((ulong)uVar4 * 0x18 != lVar7);
        lVar7 = *param_1;
      }
      FUN__text__00400fc0(0,lVar7);
    }
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = iVar1 + uVar5;
  }
  return lVar6 != 0;
}


