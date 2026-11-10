/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3c40; name: FUN_.text__002d3c40
 */


byte FUN__text__002d3c40(long param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ushort *puVar9;
  
  if (*(undefined8 **)(param_1 + 0x270) == *(undefined8 **)(param_1 + 0x278)) {
    return 0;
  }
  param_2 = param_2 & 0xffff;
  param_3 = param_3 & 0xffff;
  puVar4 = *(undefined8 **)(param_1 + 0x270);
  do {
    puVar3 = puVar4 + 1;
    piVar7 = (int *)*puVar4;
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar2 = *puVar9;
    if (uVar2 < 7) {
      uVar8 = 0;
      uVar6 = 0;
LAB__text__002d3c68:
      bVar5 = (uVar8 != param_3 || uVar6 != param_2) | param_4;
      if ((uVar8 == param_3 && uVar6 == param_2) && (param_4 & 1) == 0) break;
    }
    else {
      uVar6 = 0;
      if ((ulong)puVar9[3] != 0) {
        uVar6 = *(uint *)((long)piVar7 + (ulong)puVar9[3]);
      }
      if (uVar2 < 9) {
        uVar8 = 0;
        goto LAB__text__002d3c68;
      }
      uVar8 = 0;
      if ((ulong)puVar9[4] != 0) {
        uVar8 = *(uint *)((long)piVar7 + (ulong)puVar9[4]);
      }
      if ((uVar2 < 0xb) || ((ulong)puVar9[5] == 0)) goto LAB__text__002d3c68;
      bVar1 = *(char *)((long)piVar7 + (ulong)puVar9[5]) != '\0' ^ param_4;
      bVar5 = (uVar8 != param_3 || uVar6 != param_2) | bVar1;
      if ((uVar8 == param_3 && uVar6 == param_2) && (bVar1 & 1) == 0) break;
    }
    puVar4 = puVar3;
  } while (puVar3 != *(undefined8 **)(param_1 + 0x278));
  return (bVar5 ^ 1) & 1;
}


