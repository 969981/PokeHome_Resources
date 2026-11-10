/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044b700; name: FUN_.text__0044b700
 */


bool FUN__text__0044b700(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
          puVar2 = (undefined8 *)(lVar6 + lVar7);
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar3 = (undefined8 *)(*param_1 + lVar7);
          lVar7 = lVar7 + 0x18;
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
          *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)((long)puVar3 + 0x14);
          puVar3[1] = 0;
          puVar3[2] = 0;
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


