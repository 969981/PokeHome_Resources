/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532970; name: FUN_.text__00532970
 */


bool FUN__text__00532970(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar9 = FUN__text__00400f80(9,(ulong)uVar1 * 0x58);
  if (lVar9 != 0) {
    lVar10 = *param_1;
    if ((lVar10 != 0) && (lVar10 != lVar9)) {
      if (uVar5 != 0) {
        lVar10 = 0;
        do {
          puVar2 = (undefined4 *)(lVar9 + lVar10);
          *puVar2 = 0;
          puVar2[10] = 0;
          *(undefined2 *)(puVar2 + 0xb) = 0;
          *(undefined8 *)(puVar2 + 0xc) = 1;
          *(undefined8 *)(puVar2 + 0x12) = 0;
          *(undefined1 *)(puVar2 + 0x14) = 0;
          *(undefined8 *)(puVar2 + 2) = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
          *(undefined8 *)(puVar2 + 6) = 0;
          *(undefined8 *)(puVar2 + 8) = 0x3f8000003f800000;
          puVar3 = (undefined4 *)(*param_1 + lVar10);
          *puVar2 = *puVar3;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          uVar11 = *(undefined8 *)(puVar3 + 8);
          uVar6 = *(undefined8 *)(puVar3 + 4);
          uVar7 = *(undefined8 *)(puVar3 + 6);
          *(undefined8 *)((long)puVar2 + 0x26) = *(undefined8 *)((long)puVar3 + 0x26);
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar11;
          *(undefined8 *)(puVar2 + 4) = uVar6;
          uVar6 = *(undefined8 *)(puVar3 + 0xc);
          uVar7 = *(undefined8 *)(puVar3 + 0xe);
          uVar8 = puVar3[0x10];
          *(undefined8 *)(puVar2 + 0x12) = 0;
          puVar2[0x10] = uVar8;
          *(undefined8 *)(puVar2 + 0xc) = uVar6;
          *(undefined8 *)(puVar2 + 0xe) = uVar7;
          *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar3 + 0x12);
          *(undefined8 *)(puVar3 + 0x12) = 0;
          *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
          *(undefined1 *)(puVar3 + 0x14) = 0;
          lVar4 = *param_1 + lVar10;
          if ((*(long *)(lVar4 + 0x48) != 0) && (*(char *)(lVar4 + 0x50) != '\0')) {
            FUN__text__00400fc0(9);
            *(undefined1 *)(lVar4 + 0x50) = 0;
          }
          lVar10 = lVar10 + 0x58;
          *(undefined8 *)(lVar4 + 0x48) = 0;
        } while ((ulong)uVar5 * 0x58 != lVar10);
        lVar10 = *param_1;
      }
      FUN__text__00400fc0(9,lVar10);
    }
    *param_1 = lVar9;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar9 != 0;
}


