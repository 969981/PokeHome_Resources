/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ce10; name: FUN_.text__0043ce10
 */


undefined8 FUN__text__0043ce10(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar8 = FUN__text__00400f80(0,(ulong)uVar1 * 0x28);
    if (lVar8 != 0) {
      lVar9 = *param_1;
      if ((lVar9 != 0) && (lVar9 != lVar8)) {
        if (uVar5 != 0) {
          lVar9 = 0;
          do {
            puVar2 = (undefined8 *)(lVar8 + lVar9);
            *(undefined4 *)(puVar2 + 4) = 0;
            puVar2[2] = 0;
            *(undefined2 *)(puVar2 + 3) = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            lVar10 = *param_1;
            *puVar2 = *(undefined8 *)(lVar10 + lVar9);
            *(undefined8 *)(lVar10 + lVar9) = 0;
            if (puVar2[1] != 0) {
              *(undefined4 *)(puVar2 + 2) = 0;
              FUN__text__00400fc0(0);
              puVar2[1] = 0;
              *(undefined4 *)((long)puVar2 + 0x14) = 0;
            }
            lVar10 = lVar10 + lVar9;
            puVar2[1] = *(undefined8 *)(lVar10 + 8);
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(lVar10 + 0x10);
            *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(lVar10 + 0x14);
            *(undefined8 *)(lVar10 + 8) = 0;
            *(undefined8 *)(lVar10 + 0x10) = 0;
            bVar6 = *(byte *)(lVar10 + 0x18);
            bVar7 = *(byte *)(puVar2 + 3);
            bVar4 = bVar6 & 1;
            *(byte *)(puVar2 + 3) = bVar7 & 0xfe | bVar4;
            bVar3 = *(byte *)(lVar10 + 0x18) & 2;
            *(byte *)(puVar2 + 3) = bVar7 & 0xfc | bVar4 | bVar3;
            *(byte *)(puVar2 + 3) = *(byte *)(lVar10 + 0x18) & 0xfc | bVar6 & 1 | bVar3;
            *(undefined1 *)((long)puVar2 + 0x19) = *(undefined1 *)(lVar10 + 0x19);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar10 + 0x20);
            FUN__text__004365a4(*param_1 + lVar9);
            lVar9 = lVar9 + 0x28;
          } while ((ulong)uVar5 * 0x28 != lVar9);
          lVar9 = *param_1;
        }
        FUN__text__00400fc0(0,lVar9);
      }
      goto LAB__text__0043cf80;
    }
  }
  else {
    lVar8 = FUN__text__00400fa0(0);
    if (lVar8 != 0) {
LAB__text__0043cf80:
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


