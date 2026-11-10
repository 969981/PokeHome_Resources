/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cb980; name: FUN_.text__003cb980
 */


void FUN__text__003cb980(undefined8 param_1,long param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  long lVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar4 = FUN__text__006b4698(param_2);
  sVar2 = FUN__text__006b4670(param_2);
  if (sVar2 != 0) {
    uVar8 = 0;
    lVar9 = lVar4 + 1;
    do {
      puVar5 = (uint *)(lVar4 + uVar8 * 0xc);
      bVar1 = *(byte *)((long)puVar5 + (ulong)*puVar5);
      if (bVar1 != 0) {
        uVar7 = 0xcbf29ce484222645;
        pbVar6 = (byte *)(lVar9 + (ulong)*puVar5);
        do {
          uVar7 = (uVar7 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        if ((uVar7 == 0xe154416e8a908d17) &&
           (*(int *)((long)puVar5 + (ulong)*(uint *)(lVar4 + uVar8 * 0xc + 4)) == 0)) {
          *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) & 0xfe;
        }
      }
      uVar8 = uVar8 + 1;
      uVar3 = FUN__text__006b4670(param_2);
      lVar9 = lVar9 + 0xc;
    } while (uVar8 < uVar3);
  }
  return;
}


