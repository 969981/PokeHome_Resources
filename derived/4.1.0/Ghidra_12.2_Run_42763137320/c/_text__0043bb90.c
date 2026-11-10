/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043bb90; name: FUN_.text__0043bb90
 */


undefined8 FUN__text__0043bb90(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar6 = FUN__text__00400f80(0,(ulong)uVar1 << 5);
    if (lVar6 != 0) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        if (uVar4 != 0) {
          lVar7 = 0;
          do {
            puVar2 = (undefined8 *)(lVar6 + lVar7);
            *puVar2 = 0;
            *(undefined1 *)((long)puVar2 + 10) = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar7);
            lVar7 = lVar7 + 0x20;
            *puVar2 = *puVar3;
            uVar5 = *(undefined2 *)(puVar3 + 1);
            *(undefined1 *)((long)puVar2 + 10) = *(undefined1 *)((long)puVar3 + 10);
            *(undefined2 *)(puVar2 + 1) = uVar5;
            puVar2[2] = puVar3[2];
            *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 3);
            *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x1c);
            puVar3[2] = 0;
            puVar3[3] = 0;
          } while ((ulong)uVar4 * 0x20 != lVar7);
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      goto LAB__text__0043bc74;
    }
  }
  else {
    lVar6 = FUN__text__00400fa0(0);
    if (lVar6 != 0) {
LAB__text__0043bc74:
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


