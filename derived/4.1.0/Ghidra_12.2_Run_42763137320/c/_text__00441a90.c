/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00441a90; name: FUN_.text__00441a90
 */


undefined8 FUN__text__00441a90(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar5 = FUN__text__00400f80(0,(ulong)uVar1 * 0x28);
    if (lVar5 != 0) {
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar5)) {
        if (uVar4 != 0) {
          lVar6 = 0;
          do {
            puVar2 = (undefined8 *)(lVar5 + lVar6);
            puVar2[3] = 0;
            puVar2[4] = 0;
            *(undefined1 *)(puVar2 + 2) = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 0x28;
            *puVar2 = *puVar3;
            uVar7 = puVar3[1];
            *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar3 + 2);
            puVar2[1] = uVar7;
            puVar2[3] = puVar3[3];
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
            *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar3 + 0x24);
            puVar3[3] = 0;
            puVar3[4] = 0;
          } while ((ulong)uVar4 * 0x28 != lVar6);
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(0,lVar6);
      }
      goto LAB__text__00441b78;
    }
  }
  else {
    lVar5 = FUN__text__00400fa0(0);
    if (lVar5 != 0) {
LAB__text__00441b78:
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


