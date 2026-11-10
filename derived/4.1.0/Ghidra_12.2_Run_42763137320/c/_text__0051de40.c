/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051de40; name: FUN_.text__0051de40
 */


bool FUN__text__0051de40(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN__text__00400f80(10,(ulong)uVar1 << 5);
  if (lVar5 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      if (uVar4 != 0) {
        lVar6 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0xffffffffffffffff;
          puVar3 = (undefined8 *)(*param_1 + lVar6);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
          if (*(long *)(*param_1 + lVar6) != 0) {
            puVar2 = (undefined8 *)(*param_1 + lVar6);
            *(undefined4 *)(puVar2 + 1) = 0;
            FUN__text__00400fc0(0xb);
            *puVar2 = 0;
            *(undefined4 *)((long)puVar2 + 0xc) = 0;
          }
          lVar6 = lVar6 + 0x20;
        } while ((ulong)uVar4 * 0x20 != lVar6);
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(10,lVar6);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar5 != 0;
}


